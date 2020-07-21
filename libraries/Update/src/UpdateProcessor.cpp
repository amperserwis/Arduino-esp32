
#include "Arduino.h"
#include "esp_spi_flash.h"
#include "esp_ota_ops.h"
#include "esp_image_format.h"
#include "esp_partition.h"
#include "esp_spi_flash.h"

#include "UpdateProcessor.h"

/* We have four formats; this handler deals with the original format:

  1) original 'raw' package.

   Starts with 0xE7 / ESP_IMAGE_HEADER_MAGIC.

   Which has no checksum or other protection (beyond the size check and the check of the first byte).

 The EC, S/MIME and RFC3161 versons have thier own processors.

*/


UpdateProcessor::secure_update_processor_err_t UpdateProcessorLegacy::process_header(uint32_t *command, uint8_t* buffer, size_t *len) {
  if ((*command) == U_SPIFFS)
    return UpdateProcessor::secure_update_processor_OK;

  if ((*command) == U_FLASH) {
    if (buffer[0] == ESP_IMAGE_HEADER_MAGIC) {
      log_d("Valid magic at start of flash header");
      return UpdateProcessor::secure_update_processor_OK;
    };
    log_e("Missing ESP_IMAGE_HEADER_MAGIC");
  };
  log_e("Invalid command 0x%04x ", *command);

  return UpdateProcessor::secure_update_processor_ERROR;
};

UpdateProcessorWithChecksum:: ~UpdateProcessorWithChecksum() {
  if (_md_ctx)
	mbedtls_md_free(_md_ctx);
};

UpdateProcessor::secure_update_processor_err_t UpdateProcessorWithChecksum::setChecksum(const char * crc, mbedtls_md_type_t md_type) {
    const mbedtls_md_info_t * mdt;

   if (md_type == MBEDTLS_MD_NONE) {
   switch(strlen(crc)) {
    case  32: md_type = MBEDTLS_MD_MD5; break;
    case  40: md_type = MBEDTLS_MD_SHA1; break;
    case  56: md_type = MBEDTLS_MD_SHA224; break;
    case  64: md_type = MBEDTLS_MD_SHA256; break;
    case 128: md_type = MBEDTLS_MD_SHA512; break;
    default: 
        log_e("Checksum type not recognized (from its length)");
        return secure_update_processor_ERROR;
        break;
    };
    log_d("Auto detected checksum based on length.");
   };

    if (!(mdt = mbedtls_md_info_from_type(md_type))) {
        log_e("Checksum type %d supported/compiled in", md_type);
        return secure_update_processor_ERROR;
    };

    size_t len = mbedtls_md_get_size(mdt);
    if (len*2 != strlen(crc)) {
        log_e("Checksum not the right length for a %s checksum in hex", mbedtls_md_get_name(mdt));
        return secure_update_processor_ERROR;
    };

    log_d("Checksum %s parsed as %s", crc, mbedtls_md_get_name(mdt));

    for(int i = 0; i < len * 2; i++) {
        unsigned char c = crc[i];
	if (c>='0' && c<='9')
		c -= '0';
	else if (c >='a' && c<='f')
		c = c - 'a' + 10;
	else if (c >='A'&& c<='F')
		c = c - 'A'  + 10;
        else {
           log_e("Hex Checksum contains illegal chars");
           return secure_update_processor_ERROR;
        };
        if (i & 1)
           _md[i>>1] |= c;
        else
           _md[i>>1] = c<<4;
    };

     if ((_md_ctx = (mbedtls_md_context_t*)malloc(sizeof(*_md_ctx))) == NULL) {
           log_e("Checksum - could not claim memory");
           return secure_update_processor_ERROR;
    };
    mbedtls_md_init(_md_ctx);
    if (
        (mbedtls_md_setup(_md_ctx, _md_info, 0) != 0) ||
        (mbedtls_md_starts(_md_ctx) != 0)
      ) {
        log_e("Checksum - setup problem");
        return secure_update_processor_ERROR;
      };
}

void UpdateProcessorWithChecksum::reset() {
     if (_md_ctx)
	mbedtls_md_starts(_md_ctx);
}

UpdateProcessor::secure_update_processor_err_t UpdateProcessorWithChecksum::process_payload(uint8_t * buffer, size_t *len) {
  if (mbedtls_md_update(_md_ctx, buffer, *len)) {
    log_e("Failed to update digest.");
    return secure_update_processor_ERROR;
  }
  return secure_update_processor_OK;
};

UpdateProcessor::secure_update_processor_err_t UpdateProcessorWithChecksum::process_end() {
  unsigned char buff[MBEDTLS_MD_MAX_SIZE], digest[MBEDTLS_MD_MAX_SIZE];

  if (mbedtls_md_finish(_md_ctx, buff)) {
    log_e("Failed to finalize digest.");
    return secure_update_processor_ERROR;
  }

#if ARDUHAL_LOG_LEVEL >= ARDUHAL_LOG_LEVEL_DEBUG
  String out = "";
  for (int i = 0; i < mbedtls_md_get_size(_md_info); i++)
    out += String(buff[i], HEX);
  log_d("Payload calculated %s Digest %d:%s", mbedtls_md_get_name(_md_info), mbedtls_md_get_size(_md_info), out.c_str());
#endif

  int res = memcmp(_md, buff, mbedtls_md_get_size(_md_info));

  mbedtls_md_free(_md_ctx);
  free(_md_ctx);
  _md_ctx = NULL;

  // compare this with the digest we got from the signed TSInfo
  if (res) {
    log_e("Payload digest does NOT match.");
    return UpdateProcessor::secure_update_processor_ERROR;
  }
  log_d("Payload digest matches.");
  return secure_update_processor_OK;
}



