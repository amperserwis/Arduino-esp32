/*
 * Automatically generated file. DO NOT EDIT.
 * Espressif IoT Development Framework (ESP-IDF) Configuration Header
 */
#pragma once
#define CONFIG_IDF_CMAKE 1
#define CONFIG_IDF_TARGET_ARCH_RISCV 1
#define CONFIG_IDF_TARGET "esp32c3"
#define CONFIG_IDF_TARGET_ESP32C3 1
#define CONFIG_IDF_FIRMWARE_CHIP_ID 0x0005
#define CONFIG_SDK_TOOLPREFIX "riscv32-esp-elf-"
#define CONFIG_APP_BUILD_TYPE_APP_2NDBOOT 1
#define CONFIG_APP_BUILD_GENERATE_BINARIES 1
#define CONFIG_APP_BUILD_BOOTLOADER 1
#define CONFIG_APP_BUILD_USE_FLASH_SECTIONS 1
#define CONFIG_APP_COMPILE_TIME_DATE 1
#define CONFIG_APP_RETRIEVE_LEN_ELF_SHA 16
#define CONFIG_BOOTLOADER_OFFSET_IN_FLASH 0x0
#define CONFIG_BOOTLOADER_COMPILER_OPTIMIZATION_SIZE 1
#define CONFIG_BOOTLOADER_LOG_LEVEL_NONE 1
#define CONFIG_BOOTLOADER_LOG_LEVEL 0
#define CONFIG_BOOTLOADER_VDDSDIO_BOOST_1_9V 1
#define CONFIG_BOOTLOADER_REGION_PROTECTION_ENABLE 1
#define CONFIG_BOOTLOADER_WDT_ENABLE 1
#define CONFIG_BOOTLOADER_WDT_TIME_MS 9000
#define CONFIG_BOOTLOADER_RESERVE_RTC_SIZE 0x0
#define CONFIG_BOOTLOADER_FLASH_XMC_SUPPORT 1
#define CONFIG_SECURE_BOOT_SUPPORTS_RSA 1
#define CONFIG_SECURE_TARGET_HAS_SECURE_ROM_DL_MODE 1
#define CONFIG_BOOT_ROM_LOG_ALWAYS_ON 1
#define CONFIG_ESPTOOLPY_BAUD_OTHER_VAL 115200
#define CONFIG_ESPTOOLPY_FLASHMODE_QIO 1
#define CONFIG_ESPTOOLPY_FLASH_SAMPLE_MODE_STR 1
#define CONFIG_ESPTOOLPY_FLASHMODE "dio"
#define CONFIG_ESPTOOLPY_FLASHFREQ_80M 1
#define CONFIG_ESPTOOLPY_FLASHFREQ "80m"
#define CONFIG_ESPTOOLPY_FLASHSIZE_2MB 1
#define CONFIG_ESPTOOLPY_FLASHSIZE "2MB"
#define CONFIG_ESPTOOLPY_FLASHSIZE_DETECT 1
#define CONFIG_ESPTOOLPY_BEFORE_RESET 1
#define CONFIG_ESPTOOLPY_BEFORE "default_reset"
#define CONFIG_ESPTOOLPY_AFTER_RESET 1
#define CONFIG_ESPTOOLPY_AFTER "hard_reset"
#define CONFIG_ESPTOOLPY_MONITOR_BAUD_115200B 1
#define CONFIG_ESPTOOLPY_MONITOR_BAUD_OTHER_VAL 115200
#define CONFIG_ESPTOOLPY_MONITOR_BAUD 115200
#define CONFIG_PARTITION_TABLE_SINGLE_APP 1
#define CONFIG_PARTITION_TABLE_CUSTOM_FILENAME "partitions.csv"
#define CONFIG_PARTITION_TABLE_FILENAME "partitions_singleapp.csv"
#define CONFIG_PARTITION_TABLE_OFFSET 0x8000
#define CONFIG_PARTITION_TABLE_MD5 1
#define CONFIG_LIB_BUILDER_FLASHMODE "qio"
#define CONFIG_LIB_BUILDER_FLASHFREQ "80m"
#define CONFIG_ESP_RMAKER_ASSISTED_CLAIM 1
#define CONFIG_ESP_RMAKER_CLAIM_TYPE 2
#define CONFIG_ESP_RMAKER_MQTT_HOST "a1p72mufdu6064-ats.iot.us-east-1.amazonaws.com"
#define CONFIG_ESP_RMAKER_MAX_PARAM_DATA_SIZE 1024
#define CONFIG_ESP_RMAKER_CONSOLE_UART_NUM_0 1
#define CONFIG_ESP_RMAKER_CONSOLE_UART_NUM 0
#define CONFIG_ESP_RMAKER_USE_CERT_BUNDLE 1
#define CONFIG_ESP_RMAKER_OTA_AUTOFETCH 1
#define CONFIG_ESP_RMAKER_OTA_AUTOFETCH_PERIOD 0
#define CONFIG_ESP_RMAKER_OTA_HTTP_RX_BUFFER_SIZE 1024
#define CONFIG_ESP_RMAKER_SCHEDULING_MAX_SCHEDULES 10
#define CONFIG_ESP_RMAKER_SCENES_MAX_SCENES 10
#define CONFIG_ENABLE_ARDUINO_DEPENDS 1
#define CONFIG_AUTOSTART_ARDUINO 1
#define CONFIG_ARDUINO_RUN_CORE0 1
#define CONFIG_ARDUINO_RUNNING_CORE 0
#define CONFIG_ARDUINO_LOOP_STACK_SIZE 8192
#define CONFIG_ARDUINO_EVENT_RUN_CORE0 1
#define CONFIG_ARDUINO_EVENT_RUNNING_CORE 0
#define CONFIG_ARDUINO_UDP_RUN_CORE0 1
#define CONFIG_ARDUINO_UDP_TASK_PRIORITY 3
#define CONFIG_ARDUINO_UDP_RUNNING_CORE 0
#define CONFIG_ARDUHAL_LOG_DEFAULT_LEVEL_ERROR 1
#define CONFIG_ARDUHAL_LOG_DEFAULT_LEVEL 1
#define CONFIG_ARDUHAL_PARTITION_SCHEME_DEFAULT 1
#define CONFIG_ARDUHAL_PARTITION_SCHEME "default"
#define CONFIG_COMPILER_OPTIMIZATION_SIZE 1
#define CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_ENABLE 1
#define CONFIG_COMPILER_OPTIMIZATION_ASSERTION_LEVEL 2
#define CONFIG_COMPILER_HIDE_PATHS_MACROS 1
#define CONFIG_COMPILER_CXX_EXCEPTIONS 1
#define CONFIG_COMPILER_CXX_EXCEPTIONS_EMG_POOL_SIZE 0
#define CONFIG_COMPILER_STACK_CHECK_MODE_NORM 1
#define CONFIG_COMPILER_STACK_CHECK 1
#define CONFIG_COMPILER_WARN_WRITE_STRINGS 1
#define CONFIG_APPTRACE_DEST_NONE 1
#define CONFIG_APPTRACE_LOCK_ENABLE 1
#define CONFIG_BT_ENABLED 1
#define CONFIG_BT_SOC_SUPPORT_5_0 1
#define CONFIG_BT_CTRL_MODE_EFF 1
#define CONFIG_BT_CTRL_BLE_MAX_ACT 10
#define CONFIG_BT_CTRL_BLE_MAX_ACT_EFF 10
#define CONFIG_BT_CTRL_BLE_STATIC_ACL_TX_BUF_NB 0
#define CONFIG_BT_CTRL_PINNED_TO_CORE 0
#define CONFIG_BT_CTRL_HCI_MODE_VHCI 1
#define CONFIG_BT_CTRL_HCI_TL 1
#define CONFIG_BT_CTRL_ADV_DUP_FILT_MAX 30
#define CONFIG_BT_CTRL_HW_CCA_VAL 20
#define CONFIG_BT_CTRL_HW_CCA_EFF 0
#define CONFIG_BT_CTRL_CE_LENGTH_TYPE_ORIG 1
#define CONFIG_BT_CTRL_CE_LENGTH_TYPE_EFF 0
#define CONFIG_BT_CTRL_TX_ANTENNA_INDEX_0 1
#define CONFIG_BT_CTRL_TX_ANTENNA_INDEX_EFF 0
#define CONFIG_BT_CTRL_RX_ANTENNA_INDEX_0 1
#define CONFIG_BT_CTRL_RX_ANTENNA_INDEX_EFF 0
#define CONFIG_BT_CTRL_DFT_TX_POWER_LEVEL_P3 1
#define CONFIG_BT_CTRL_DFT_TX_POWER_LEVEL_EFF 10
#define CONFIG_BT_CTRL_BLE_ADV_REPORT_FLOW_CTRL_SUPP 1
#define CONFIG_BT_CTRL_BLE_ADV_REPORT_FLOW_CTRL_NUM 100
#define CONFIG_BT_CTRL_BLE_ADV_REPORT_DISCARD_THRSHOLD 20
#define CONFIG_BT_CTRL_BLE_SCAN_DUPL 1
#define CONFIG_BT_CTRL_SCAN_DUPL_TYPE_DEVICE 1
#define CONFIG_BT_CTRL_SCAN_DUPL_TYPE 0
#define CONFIG_BT_CTRL_SCAN_DUPL_CACHE_SIZE 100
#define CONFIG_BT_CTRL_COEX_PHY_CODED_TX_RX_TLIM_DIS 1
#define CONFIG_BT_CTRL_COEX_PHY_CODED_TX_RX_TLIM_EFF 0
#define CONFIG_BT_CTRL_SLEEP_MODE_EFF 0
#define CONFIG_BT_CTRL_SLEEP_CLOCK_EFF 0
#define CONFIG_BT_CTRL_HCI_TL_EFF 1
#define CONFIG_BT_BLUEDROID_ENABLED 1
#define CONFIG_BT_BTC_TASK_STACK_SIZE 3072
#define CONFIG_BT_BLUEDROID_PINNED_TO_CORE 0
#define CONFIG_BT_BTU_TASK_STACK_SIZE 4096
#define CONFIG_BT_BLE_ENABLED 1
#define CONFIG_BT_GATTS_ENABLE 1
#define CONFIG_BT_BLE_BLUFI_ENABLE 1
#define CONFIG_BT_GATT_MAX_SR_PROFILES 8
#define CONFIG_BT_GATTS_SEND_SERVICE_CHANGE_AUTO 1
#define CONFIG_BT_GATTS_SEND_SERVICE_CHANGE_MODE 0
#define CONFIG_BT_GATTC_ENABLE 1
#define CONFIG_BT_GATTC_CONNECT_RETRY_COUNT 3
#define CONFIG_BT_BLE_SMP_ENABLE 1
#define CONFIG_BT_LOG_HCI_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_HCI_TRACE_LEVEL 2
#define CONFIG_BT_LOG_BTM_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_BTM_TRACE_LEVEL 2
#define CONFIG_BT_LOG_L2CAP_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_L2CAP_TRACE_LEVEL 2
#define CONFIG_BT_LOG_RFCOMM_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_RFCOMM_TRACE_LEVEL 2
#define CONFIG_BT_LOG_SDP_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_SDP_TRACE_LEVEL 2
#define CONFIG_BT_LOG_GAP_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_GAP_TRACE_LEVEL 2
#define CONFIG_BT_LOG_BNEP_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_BNEP_TRACE_LEVEL 2
#define CONFIG_BT_LOG_PAN_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_PAN_TRACE_LEVEL 2
#define CONFIG_BT_LOG_A2D_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_A2D_TRACE_LEVEL 2
#define CONFIG_BT_LOG_AVDT_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_AVDT_TRACE_LEVEL 2
#define CONFIG_BT_LOG_AVCT_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_AVCT_TRACE_LEVEL 2
#define CONFIG_BT_LOG_AVRC_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_AVRC_TRACE_LEVEL 2
#define CONFIG_BT_LOG_MCA_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_MCA_TRACE_LEVEL 2
#define CONFIG_BT_LOG_HID_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_HID_TRACE_LEVEL 2
#define CONFIG_BT_LOG_APPL_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_APPL_TRACE_LEVEL 2
#define CONFIG_BT_LOG_GATT_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_GATT_TRACE_LEVEL 2
#define CONFIG_BT_LOG_SMP_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_SMP_TRACE_LEVEL 2
#define CONFIG_BT_LOG_BTIF_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_BTIF_TRACE_LEVEL 2
#define CONFIG_BT_LOG_BTC_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_BTC_TRACE_LEVEL 2
#define CONFIG_BT_LOG_OSI_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_OSI_TRACE_LEVEL 2
#define CONFIG_BT_LOG_BLUFI_TRACE_LEVEL_WARNING 1
#define CONFIG_BT_LOG_BLUFI_TRACE_LEVEL 2
#define CONFIG_BT_ACL_CONNECTIONS 4
#define CONFIG_BT_MULTI_CONNECTION_ENBALE 1
#define CONFIG_BT_SMP_ENABLE 1
#define CONFIG_BT_BLE_ESTAB_LINK_CONN_TOUT 30
#define CONFIG_BT_BLE_RPA_SUPPORTED 1
#define CONFIG_BT_BLE_50_FEATURES_SUPPORTED 1
#define CONFIG_BT_BLE_42_FEATURES_SUPPORTED 1
#define CONFIG_COAP_MBEDTLS_PSK 1
#define CONFIG_COAP_LOG_DEFAULT_LEVEL 0
#define CONFIG_ADC_DISABLE_DAC 1
#define CONFIG_SPI_MASTER_ISR_IN_IRAM 1
#define CONFIG_SPI_SLAVE_ISR_IN_IRAM 1
#define CONFIG_EFUSE_MAX_BLK_LEN 256
#define CONFIG_ESP_TLS_USING_MBEDTLS 1
#define CONFIG_ESP_TLS_USE_DS_PERIPHERAL 1
#define CONFIG_ESP_TLS_SERVER 1
#define CONFIG_ESP32C3_DEFAULT_CPU_FREQ_160 1
#define CONFIG_ESP32C3_DEFAULT_CPU_FREQ_MHZ 160
#define CONFIG_ESP32C3_REV_MIN_3 1
#define CONFIG_ESP32C3_REV_MIN 3
#define CONFIG_ESP32C3_DEBUG_OCDAWARE 1
#define CONFIG_ESP32C3_BROWNOUT_DET 1
#define CONFIG_ESP32C3_BROWNOUT_DET_LVL_SEL_7 1
#define CONFIG_ESP32C3_BROWNOUT_DET_LVL 7
#define CONFIG_ESP32C3_TIME_SYSCALL_USE_RTC_SYSTIMER 1
#define CONFIG_ESP32C3_RTC_CLK_SRC_INT_RC 1
#define CONFIG_ESP32C3_RTC_CLK_CAL_CYCLES 576
#define CONFIG_ESP_ERR_TO_NAME_LOOKUP 1
#define CONFIG_ETH_ENABLED 1
#define CONFIG_ETH_USE_SPI_ETHERNET 1
#define CONFIG_ESP_EVENT_POST_FROM_ISR 1
#define CONFIG_ESP_EVENT_POST_FROM_IRAM_ISR 1
#define CONFIG_ESP_HTTP_CLIENT_ENABLE_HTTPS 1
#define CONFIG_ESP_HTTP_CLIENT_ENABLE_DIGEST_AUTH 1
#define CONFIG_HTTPD_MAX_REQ_HDR_LEN 1024
#define CONFIG_HTTPD_MAX_URI_LEN 512
#define CONFIG_HTTPD_ERR_RESP_NO_DELAY 1
#define CONFIG_HTTPD_PURGE_BUF_LEN 32
#define CONFIG_HTTPD_WS_SUPPORT 1
#define CONFIG_ESP_HTTPS_SERVER_ENABLE 1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_WIFI_STA 1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_WIFI_AP 1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_BT 1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_ETH 1
#define CONFIG_ESP32C3_UNIVERSAL_MAC_ADDRESSES_FOUR 1
#define CONFIG_ESP32C3_UNIVERSAL_MAC_ADDRESSES 4
#define CONFIG_ESP_SLEEP_POWER_DOWN_FLASH 1
#define CONFIG_ESP_SLEEP_GPIO_RESET_WORKAROUND 1
#define CONFIG_RTC_CLOCK_BBPLL_POWER_ON_WITH_USB 1
#define CONFIG_ESP_IPC_TASK_STACK_SIZE 1024
#define CONFIG_LCD_PANEL_IO_FORMAT_BUF_SIZE 32
#define CONFIG_ESP_NETIF_IP_LOST_TIMER_INTERVAL 120
#define CONFIG_ESP_NETIF_TCPIP_LWIP 1
#define CONFIG_ESP_NETIF_TCPIP_ADAPTER_COMPATIBLE_LAYER 1
#define CONFIG_ESP_PHY_CALIBRATION_AND_DATA_STORAGE 1
#define CONFIG_ESP_PHY_MAX_WIFI_TX_POWER 20
#define CONFIG_ESP_PHY_MAX_TX_POWER 20
#define CONFIG_ESP_PHY_ENABLE_USB 1
#define CONFIG_PM_POWER_DOWN_CPU_IN_LIGHT_SLEEP 1
#define CONFIG_ESP_SYSTEM_PANIC_PRINT_REBOOT 1
#define CONFIG_ESP_SYSTEM_SINGLE_CORE_MODE 1
#define CONFIG_ESP_SYSTEM_RTC_FAST_MEM_AS_HEAP_DEPCHECK 1
#define CONFIG_ESP_SYSTEM_ALLOW_RTC_FAST_MEM_AS_HEAP 1
#define CONFIG_ESP_SYSTEM_MEMPROT_DEPCHECK 1
#define CONFIG_ESP_SYSTEM_MEMPROT_FEATURE 1
#define CONFIG_ESP_SYSTEM_MEMPROT_FEATURE_LOCK 1
#define CONFIG_ESP_SYSTEM_MEMPROT_CPU_PREFETCH_PAD_SIZE 16
#define CONFIG_ESP_SYSTEM_MEMPROT_MEM_ALIGN_SIZE 512
#define CONFIG_ESP_SYSTEM_EVENT_QUEUE_SIZE 32
#define CONFIG_ESP_SYSTEM_EVENT_TASK_STACK_SIZE 2304
#define CONFIG_ESP_MAIN_TASK_STACK_SIZE 3584
#define CONFIG_ESP_MAIN_TASK_AFFINITY_CPU0 1
#define CONFIG_ESP_MAIN_TASK_AFFINITY 0x0
#define CONFIG_ESP_MINIMAL_SHARED_STACK_SIZE 2048
#define CONFIG_ESP_CONSOLE_UART_DEFAULT 1
#define CONFIG_ESP_CONSOLE_SECONDARY_USB_SERIAL_JTAG 1
#define CONFIG_ESP_CONSOLE_UART 1
#define CONFIG_ESP_CONSOLE_UART_NUM 0
#define CONFIG_ESP_CONSOLE_UART_BAUDRATE 115200
#define CONFIG_ESP_INT_WDT 1
#define CONFIG_ESP_INT_WDT_TIMEOUT_MS 300
#define CONFIG_ESP_TASK_WDT 1
#define CONFIG_ESP_TASK_WDT_TIMEOUT_S 5
#define CONFIG_ESP_TASK_WDT_CHECK_IDLE_TASK_CPU0 1
#define CONFIG_ESP_SYSTEM_CHECK_INT_LEVEL_4 1
#define CONFIG_ESP_TIME_FUNCS_USE_RTC_TIMER 1
#define CONFIG_ESP_TIME_FUNCS_USE_ESP_TIMER 1
#define CONFIG_ESP_TIMER_TASK_STACK_SIZE 3584
#define CONFIG_ESP_TIMER_INTERRUPT_LEVEL 1
#define CONFIG_ESP_TIMER_IMPL_SYSTIMER 1
#define CONFIG_ESP32_WIFI_ENABLED 1
#define CONFIG_ESP32_WIFI_SW_COEXIST_ENABLE 1
#define CONFIG_ESP32_WIFI_STATIC_RX_BUFFER_NUM 10
#define CONFIG_ESP32_WIFI_DYNAMIC_RX_BUFFER_NUM 32
#define CONFIG_ESP32_WIFI_DYNAMIC_TX_BUFFER 1
#define CONFIG_ESP32_WIFI_TX_BUFFER_TYPE 1
#define CONFIG_ESP32_WIFI_DYNAMIC_TX_BUFFER_NUM 32
#define CONFIG_ESP32_WIFI_AMPDU_TX_ENABLED 1
#define CONFIG_ESP32_WIFI_TX_BA_WIN 6
#define CONFIG_ESP32_WIFI_AMPDU_RX_ENABLED 1
#define CONFIG_ESP32_WIFI_RX_BA_WIN 6
#define CONFIG_ESP32_WIFI_NVS_ENABLED 1
#define CONFIG_ESP32_WIFI_SOFTAP_BEACON_MAX_LEN 752
#define CONFIG_ESP32_WIFI_MGMT_SBUF_NUM 32
#define CONFIG_ESP32_WIFI_ENABLE_WPA3_SAE 1
#define CONFIG_ESP_WIFI_FTM_ENABLE 1
#define CONFIG_ESP_WIFI_FTM_INITIATOR_SUPPORT 1
#define CONFIG_ESP_WIFI_FTM_RESPONDER_SUPPORT 1
#define CONFIG_ESP_WIFI_SOFTAP_SUPPORT 1
#define CONFIG_ESP_COREDUMP_ENABLE_TO_NONE 1
#define CONFIG_FATFS_CODEPAGE_437 1
#define CONFIG_FATFS_CODEPAGE 437
#define CONFIG_FATFS_LFN_HEAP 1
#define CONFIG_FATFS_MAX_LFN 255
#define CONFIG_FATFS_API_ENCODING_ANSI_OEM 1
#define CONFIG_FATFS_FS_LOCK 0
#define CONFIG_FATFS_TIMEOUT_MS 10000
#define CONFIG_FATFS_PER_FILE_CACHE 1
#define CONFIG_FMB_COMM_MODE_TCP_EN 1
#define CONFIG_FMB_TCP_PORT_DEFAULT 502
#define CONFIG_FMB_TCP_PORT_MAX_CONN 5
#define CONFIG_FMB_TCP_CONNECTION_TOUT_SEC 20
#define CONFIG_FMB_COMM_MODE_RTU_EN 1
#define CONFIG_FMB_COMM_MODE_ASCII_EN 1
#define CONFIG_FMB_MASTER_TIMEOUT_MS_RESPOND 150
#define CONFIG_FMB_MASTER_DELAY_MS_CONVERT 200
#define CONFIG_FMB_QUEUE_LENGTH 20
#define CONFIG_FMB_PORT_TASK_STACK_SIZE 4096
#define CONFIG_FMB_SERIAL_BUF_SIZE 256
#define CONFIG_FMB_SERIAL_ASCII_BITS_PER_SYMB 8
#define CONFIG_FMB_SERIAL_ASCII_TIMEOUT_RESPOND_MS 1000
#define CONFIG_FMB_PORT_TASK_PRIO 10
#define CONFIG_FMB_PORT_TASK_AFFINITY 0x7FFFFFFF
#define CONFIG_FMB_CONTROLLER_SLAVE_ID_SUPPORT 1
#define CONFIG_FMB_CONTROLLER_SLAVE_ID 0x00112233
#define CONFIG_FMB_CONTROLLER_NOTIFY_TIMEOUT 20
#define CONFIG_FMB_CONTROLLER_NOTIFY_QUEUE_SIZE 20
#define CONFIG_FMB_CONTROLLER_STACK_SIZE 4096
#define CONFIG_FMB_EVENT_QUEUE_TIMEOUT 20
#define CONFIG_FMB_TIMER_PORT_ENABLED 1
#define CONFIG_FMB_TIMER_GROUP 0
#define CONFIG_FMB_TIMER_INDEX 0
#define CONFIG_FMB_MASTER_TIMER_GROUP 0
#define CONFIG_FMB_MASTER_TIMER_INDEX 0
#define CONFIG_FREERTOS_UNICORE 1
#define CONFIG_FREERTOS_NO_AFFINITY 0x7FFFFFFF
#define CONFIG_FREERTOS_TICK_SUPPORT_SYSTIMER 1
#define CONFIG_FREERTOS_CORETIMER_SYSTIMER_LVL1 1
#define CONFIG_FREERTOS_SYSTICK_USES_SYSTIMER 1
#define CONFIG_FREERTOS_OPTIMIZED_SCHEDULER 1
#define CONFIG_FREERTOS_HZ 1000
#define CONFIG_FREERTOS_ASSERT_ON_UNTESTED_FUNCTION 1
#define CONFIG_FREERTOS_CHECK_STACKOVERFLOW_CANARY 1
#define CONFIG_FREERTOS_INTERRUPT_BACKTRACE 1
#define CONFIG_FREERTOS_THREAD_LOCAL_STORAGE_POINTERS 1
#define CONFIG_FREERTOS_ASSERT_FAIL_ABORT 1
#define CONFIG_FREERTOS_IDLE_TASK_STACKSIZE 2304
#define CONFIG_FREERTOS_ISR_STACKSIZE 1536
#define CONFIG_FREERTOS_MAX_TASK_NAME_LEN 16
#define CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION 1
#define CONFIG_FREERTOS_TIMER_TASK_PRIORITY 1
#define CONFIG_FREERTOS_TIMER_TASK_STACK_DEPTH 2048
#define CONFIG_FREERTOS_TIMER_QUEUE_LENGTH 10
#define CONFIG_FREERTOS_QUEUE_REGISTRY_SIZE 0
#define CONFIG_FREERTOS_CHECK_MUTEX_GIVEN_BY_OWNER 1
#define CONFIG_FREERTOS_DEBUG_OCDAWARE 1
#define CONFIG_FREERTOS_ENABLE_TASK_SNAPSHOT 1
#define CONFIG_HAL_ASSERTION_EQUALS_SYSTEM 1
#define CONFIG_HAL_DEFAULT_ASSERTION_LEVEL 2
#define CONFIG_HEAP_POISONING_DISABLED 1
#define CONFIG_HEAP_TRACING_OFF 1
#define CONFIG_LOG_DEFAULT_LEVEL_ERROR 1
#define CONFIG_LOG_DEFAULT_LEVEL 1
#define CONFIG_LOG_MAXIMUM_EQUALS_DEFAULT 1
#define CONFIG_LOG_MAXIMUM_LEVEL 1
#define CONFIG_LOG_TIMESTAMP_SOURCE_RTOS 1
#define CONFIG_LWIP_LOCAL_HOSTNAME "espressif"
#define CONFIG_LWIP_DNS_SUPPORT_MDNS_QUERIES 1
#define CONFIG_LWIP_TIMERS_ONDEMAND 1
#define CONFIG_LWIP_MAX_SOCKETS 16
#define CONFIG_LWIP_SO_REUSE 1
#define CONFIG_LWIP_SO_REUSE_RXTOALL 1
#define CONFIG_LWIP_SO_RCVBUF 1
#define CONFIG_LWIP_IP4_FRAG 1
#define CONFIG_LWIP_IP6_FRAG 1
#define CONFIG_LWIP_ESP_GRATUITOUS_ARP 1
#define CONFIG_LWIP_GARP_TMR_INTERVAL 60
#define CONFIG_LWIP_TCPIP_RECVMBOX_SIZE 32
#define CONFIG_LWIP_DHCP_DOES_ARP_CHECK 1
#define CONFIG_LWIP_DHCP_DISABLE_VENDOR_CLASS_ID 1
#define CONFIG_LWIP_DHCP_RESTORE_LAST_IP 1
#define CONFIG_LWIP_DHCP_OPTIONS_LEN 128
#define CONFIG_LWIP_DHCPS 1
#define CONFIG_LWIP_DHCPS_LEASE_UNIT 60
#define CONFIG_LWIP_DHCPS_MAX_STATION_NUM 8
#define CONFIG_LWIP_IPV6 1
#define CONFIG_LWIP_IPV6_NUM_ADDRESSES 3
#define CONFIG_LWIP_NETIF_LOOPBACK 1
#define CONFIG_LWIP_LOOPBACK_MAX_PBUFS 8
#define CONFIG_LWIP_MAX_ACTIVE_TCP 16
#define CONFIG_LWIP_MAX_LISTENING_TCP 16
#define CONFIG_LWIP_TCP_HIGH_SPEED_RETRANSMISSION 1
#define CONFIG_LWIP_TCP_MAXRTX 12
#define CONFIG_LWIP_TCP_SYNMAXRTX 12
#define CONFIG_LWIP_TCP_MSS 1440
#define CONFIG_LWIP_TCP_TMR_INTERVAL 250
#define CONFIG_LWIP_TCP_MSL 60000
#define CONFIG_LWIP_TCP_SND_BUF_DEFAULT 5744
#define CONFIG_LWIP_TCP_WND_DEFAULT 5744
#define CONFIG_LWIP_TCP_RECVMBOX_SIZE 6
#define CONFIG_LWIP_TCP_QUEUE_OOSEQ 1
#define CONFIG_LWIP_TCP_OVERSIZE_MSS 1
#define CONFIG_LWIP_TCP_RTO_TIME 1500
#define CONFIG_LWIP_MAX_UDP_PCBS 16
#define CONFIG_LWIP_UDP_RECVMBOX_SIZE 6
#define CONFIG_LWIP_CHECKSUM_CHECK_ICMP 1
#define CONFIG_LWIP_TCPIP_TASK_STACK_SIZE 3072
#define CONFIG_LWIP_TCPIP_TASK_AFFINITY_NO_AFFINITY 1
#define CONFIG_LWIP_TCPIP_TASK_AFFINITY 0x7FFFFFFF
#define CONFIG_LWIP_IPV6_MEMP_NUM_ND6_QUEUE 3
#define CONFIG_LWIP_IPV6_ND6_NUM_NEIGHBORS 5
#define CONFIG_LWIP_ICMP 1
#define CONFIG_LWIP_MAX_RAW_PCBS 16
#define CONFIG_LWIP_SNTP_MAX_SERVERS 3
#define CONFIG_LWIP_DHCP_GET_NTP_SRV 1
#define CONFIG_LWIP_DHCP_MAX_NTP_SERVERS 1
#define CONFIG_LWIP_SNTP_UPDATE_DELAY 3600000
#define CONFIG_LWIP_ESP_LWIP_ASSERT 1
#define CONFIG_LWIP_HOOK_TCP_ISN_DEFAULT 1
#define CONFIG_LWIP_HOOK_IP6_ROUTE_NONE 1
#define CONFIG_LWIP_HOOK_ND6_GET_GW_NONE 1
#define CONFIG_LWIP_HOOK_NETCONN_EXT_RESOLVE_NONE 1
#define CONFIG_MBEDTLS_INTERNAL_MEM_ALLOC 1
#define CONFIG_MBEDTLS_ASYMMETRIC_CONTENT_LEN 1
#define CONFIG_MBEDTLS_SSL_IN_CONTENT_LEN 16384
#define CONFIG_MBEDTLS_SSL_OUT_CONTENT_LEN 4096
#define CONFIG_MBEDTLS_SSL_KEEP_PEER_CERTIFICATE 1
#define CONFIG_MBEDTLS_CERTIFICATE_BUNDLE 1
#define CONFIG_MBEDTLS_CERTIFICATE_BUNDLE_DEFAULT_FULL 1
#define CONFIG_MBEDTLS_HARDWARE_AES 1
#define CONFIG_MBEDTLS_AES_USE_INTERRUPT 1
#define CONFIG_MBEDTLS_HARDWARE_MPI 1
#define CONFIG_MBEDTLS_HARDWARE_SHA 1
#define CONFIG_MBEDTLS_ROM_MD5 1
#define CONFIG_MBEDTLS_HAVE_TIME 1
#define CONFIG_MBEDTLS_ECDSA_DETERMINISTIC 1
#define CONFIG_MBEDTLS_SHA512_C 1
#define CONFIG_MBEDTLS_TLS_SERVER_AND_CLIENT 1
#define CONFIG_MBEDTLS_TLS_SERVER 1
#define CONFIG_MBEDTLS_TLS_CLIENT 1
#define CONFIG_MBEDTLS_TLS_ENABLED 1
#define CONFIG_MBEDTLS_PSK_MODES 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_PSK 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_DHE_PSK 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_PSK 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_RSA_PSK 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_RSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_DHE_RSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ELLIPTIC_CURVE 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_RSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_ECDSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDH_ECDSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDH_RSA 1
#define CONFIG_MBEDTLS_SSL_RENEGOTIATION 1
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1 1
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1_1 1
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1_2 1
#define CONFIG_MBEDTLS_SSL_ALPN 1
#define CONFIG_MBEDTLS_CLIENT_SSL_SESSION_TICKETS 1
#define CONFIG_MBEDTLS_X509_CHECK_KEY_USAGE 1
#define CONFIG_MBEDTLS_X509_CHECK_EXTENDED_KEY_USAGE 1
#define CONFIG_MBEDTLS_SERVER_SSL_SESSION_TICKETS 1
#define CONFIG_MBEDTLS_AES_C 1
#define CONFIG_MBEDTLS_CAMELLIA_C 1
#define CONFIG_MBEDTLS_RC4_DISABLED 1
#define CONFIG_MBEDTLS_CCM_C 1
#define CONFIG_MBEDTLS_GCM_C 1
#define CONFIG_MBEDTLS_PEM_PARSE_C 1
#define CONFIG_MBEDTLS_PEM_WRITE_C 1
#define CONFIG_MBEDTLS_X509_CRL_PARSE_C 1
#define CONFIG_MBEDTLS_X509_CSR_PARSE_C 1
#define CONFIG_MBEDTLS_ECP_C 1
#define CONFIG_MBEDTLS_ECDH_C 1
#define CONFIG_MBEDTLS_ECDSA_C 1
#define CONFIG_MBEDTLS_ECP_DP_SECP192R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP224R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP256R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP384R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP521R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP192K1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP224K1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP256K1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_BP256R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_BP384R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_BP512R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_CURVE25519_ENABLED 1
#define CONFIG_MBEDTLS_ECP_NIST_OPTIM 1
#define CONFIG_MBEDTLS_LARGE_KEY_SOFTWARE_MPI 1
#define CONFIG_MDNS_MAX_SERVICES 10
#define CONFIG_MDNS_TASK_PRIORITY 1
#define CONFIG_MDNS_TASK_STACK_SIZE 4096
#define CONFIG_MDNS_TASK_AFFINITY_CPU0 1
#define CONFIG_MDNS_TASK_AFFINITY 0x0
#define CONFIG_MDNS_SERVICE_ADD_TIMEOUT_MS 2000
#define CONFIG_MDNS_TIMER_PERIOD_MS 100
#define CONFIG_MDNS_MULTIPLE_INSTANCE 1
#define CONFIG_MQTT_PROTOCOL_311 1
#define CONFIG_MQTT_TRANSPORT_SSL 1
#define CONFIG_MQTT_TRANSPORT_WEBSOCKET 1
#define CONFIG_MQTT_TRANSPORT_WEBSOCKET_SECURE 1
#define CONFIG_NEWLIB_STDOUT_LINE_ENDING_CRLF 1
#define CONFIG_NEWLIB_STDIN_LINE_ENDING_CR 1
#define CONFIG_OPENSSL_ERROR_STACK 1
#define CONFIG_OPENSSL_ASSERT_EXIT 1
#define CONFIG_PTHREAD_TASK_PRIO_DEFAULT 5
#define CONFIG_PTHREAD_TASK_STACK_SIZE_DEFAULT 3072
#define CONFIG_PTHREAD_STACK_MIN 768
#define CONFIG_PTHREAD_TASK_CORE_DEFAULT -1
#define CONFIG_PTHREAD_TASK_NAME_DEFAULT "pthread"
#define CONFIG_SPI_FLASH_ROM_DRIVER_PATCH 1
#define CONFIG_SPI_FLASH_DANGEROUS_WRITE_ABORTS 1
#define CONFIG_SPI_FLASH_YIELD_DURING_ERASE 1
#define CONFIG_SPI_FLASH_ERASE_YIELD_DURATION_MS 20
#define CONFIG_SPI_FLASH_ERASE_YIELD_TICKS 1
#define CONFIG_SPI_FLASH_WRITE_CHUNK_SIZE 8192
#define CONFIG_SPI_FLASH_SUPPORT_ISSI_CHIP 1
#define CONFIG_SPI_FLASH_SUPPORT_MXIC_CHIP 1
#define CONFIG_SPI_FLASH_SUPPORT_GD_CHIP 1
#define CONFIG_SPI_FLASH_SUPPORT_WINBOND_CHIP 1
#define CONFIG_SPI_FLASH_SUPPORT_BOYA_CHIP 1
#define CONFIG_SPI_FLASH_SUPPORT_TH_CHIP 1
#define CONFIG_SPI_FLASH_ENABLE_ENCRYPTED_READ_WRITE 1
#define CONFIG_SPIFFS_MAX_PARTITIONS 3
#define CONFIG_SPIFFS_CACHE 1
#define CONFIG_SPIFFS_CACHE_WR 1
#define CONFIG_SPIFFS_PAGE_CHECK 1
#define CONFIG_SPIFFS_GC_MAX_RUNS 10
#define CONFIG_SPIFFS_PAGE_SIZE 256
#define CONFIG_SPIFFS_OBJ_NAME_LEN 32
#define CONFIG_SPIFFS_USE_MAGIC 1
#define CONFIG_SPIFFS_USE_MAGIC_LENGTH 1
#define CONFIG_SPIFFS_META_LENGTH 4
#define CONFIG_SPIFFS_USE_MTIME 1
#define CONFIG_WS_TRANSPORT 1
#define CONFIG_WS_BUFFER_SIZE 1024
#define CONFIG_UNITY_ENABLE_FLOAT 1
#define CONFIG_UNITY_ENABLE_DOUBLE 1
#define CONFIG_UNITY_ENABLE_IDF_TEST_RUNNER 1
#define CONFIG_VFS_SUPPORT_IO 1
#define CONFIG_VFS_SUPPORT_DIR 1
#define CONFIG_VFS_SUPPORT_SELECT 1
#define CONFIG_VFS_SUPPRESS_SELECT_DEBUG_OUTPUT 1
#define CONFIG_VFS_SUPPORT_TERMIOS 1
#define CONFIG_VFS_SEMIHOSTFS_MAX_MOUNT_POINTS 1
#define CONFIG_VFS_SEMIHOSTFS_HOST_PATH_MAX_LEN 128
#define CONFIG_WL_SECTOR_SIZE_4096 1
#define CONFIG_WL_SECTOR_SIZE 4096
#define CONFIG_WIFI_PROV_SCAN_MAX_ENTRIES 16
#define CONFIG_WIFI_PROV_AUTOSTOP_TIMEOUT 30
#define CONFIG_WIFI_PROV_BLE_BONDING 1
#define CONFIG_WPA_MBEDTLS_CRYPTO 1
#define CONFIG_IO_GLITCH_FILTER_TIME_MS 50
#define CONFIG_ESP_RMAKER_LIB_ESP_MQTT 1
#define CONFIG_ESP_RMAKER_MQTT_GLUE_LIB 1
#define CONFIG_ESP_RMAKER_MQTT_PORT_443 1
#define CONFIG_ESP_RMAKER_MQTT_PORT 1
#define CONFIG_ESP_RMAKER_MQTT_SEND_USERNAME 1
#define CONFIG_ESP_RMAKER_MQTT_PRODUCT_NAME "RMDev"
#define CONFIG_ESP_RMAKER_MQTT_PRODUCT_VERSION "1x0"
#define CONFIG_ESP_RMAKER_MQTT_PRODUCT_SKU "ES00"
#define CONFIG_ESP_RMAKER_MQTT_USE_CERT_BUNDLE 1
#define CONFIG_ESP_RMAKER_WORK_QUEUE_TASK_STACK 4096
#define CONFIG_ESP_RMAKER_WORK_QUEUE_TASK_PRIORITY 5
#define CONFIG_ESP_RMAKER_FACTORY_PARTITION_NAME "fctry"
#define CONFIG_ESP_RMAKER_FACTORY_NAMESPACE "rmaker_creds"
#define CONFIG_ESP_RMAKER_DEF_TIMEZONE "Asia/Shanghai"
#define CONFIG_ESP_RMAKER_SNTP_SERVER_NAME "pool.ntp.org"
#define CONFIG_DSP_ANSI 1
#define CONFIG_DSP_OPTIMIZATION 0
#define CONFIG_DSP_MAX_FFT_SIZE_4096 1
#define CONFIG_DSP_MAX_FFT_SIZE 4096
#define CONFIG_LITTLEFS_MAX_PARTITIONS 3
#define CONFIG_LITTLEFS_PAGE_SIZE 256
#define CONFIG_LITTLEFS_OBJ_NAME_LEN 64
#define CONFIG_LITTLEFS_READ_SIZE 128
#define CONFIG_LITTLEFS_WRITE_SIZE 128
#define CONFIG_LITTLEFS_LOOKAHEAD_SIZE 128
#define CONFIG_LITTLEFS_CACHE_SIZE 512
#define CONFIG_LITTLEFS_BLOCK_CYCLES 512
#define CONFIG_LITTLEFS_USE_MTIME 1
#define CONFIG_LITTLEFS_MTIME_USE_SECONDS 1

/* List of deprecated options */
#define CONFIG_A2D_TRACE_LEVEL_WARNING CONFIG_BT_LOG_A2D_TRACE_LEVEL_WARNING
#define CONFIG_ADC2_DISABLE_DAC CONFIG_ADC_DISABLE_DAC
#define CONFIG_APPL_TRACE_LEVEL_WARNING CONFIG_BT_LOG_APPL_TRACE_LEVEL_WARNING
#define CONFIG_AVCT_TRACE_LEVEL_WARNING CONFIG_BT_LOG_AVCT_TRACE_LEVEL_WARNING
#define CONFIG_AVDT_TRACE_LEVEL_WARNING CONFIG_BT_LOG_AVDT_TRACE_LEVEL_WARNING
#define CONFIG_AVRC_TRACE_LEVEL_WARNING CONFIG_BT_LOG_AVRC_TRACE_LEVEL_WARNING
#define CONFIG_BLE_ESTABLISH_LINK_CONNECTION_TIMEOUT CONFIG_BT_BLE_ESTAB_LINK_CONN_TOUT
#define CONFIG_BLE_SMP_ENABLE CONFIG_BT_BLE_SMP_ENABLE
#define CONFIG_BLUEDROID_ENABLED CONFIG_BT_BLUEDROID_ENABLED
#define CONFIG_BLUFI_TRACE_LEVEL_WARNING CONFIG_BT_LOG_BLUFI_TRACE_LEVEL_WARNING
#define CONFIG_BTC_TASK_STACK_SIZE CONFIG_BT_BTC_TASK_STACK_SIZE
#define CONFIG_BTC_TRACE_LEVEL_WARNING CONFIG_BT_LOG_BTC_TRACE_LEVEL_WARNING
#define CONFIG_BTIF_TRACE_LEVEL_WARNING CONFIG_BT_LOG_BTIF_TRACE_LEVEL_WARNING
#define CONFIG_BTM_TRACE_LEVEL_WARNING CONFIG_BT_LOG_BTM_TRACE_LEVEL_WARNING
#define CONFIG_BTU_TASK_STACK_SIZE CONFIG_BT_BTU_TASK_STACK_SIZE
#define CONFIG_COMPILER_OPTIMIZATION_LEVEL_RELEASE CONFIG_COMPILER_OPTIMIZATION_SIZE
#define CONFIG_CONSOLE_UART_DEFAULT CONFIG_ESP_CONSOLE_UART_DEFAULT
#define CONFIG_CXX_EXCEPTIONS CONFIG_COMPILER_CXX_EXCEPTIONS
#define CONFIG_CXX_EXCEPTIONS_EMG_POOL_SIZE CONFIG_COMPILER_CXX_EXCEPTIONS_EMG_POOL_SIZE
#define CONFIG_ESP32C3_LIGHTSLEEP_GPIO_RESET_WORKAROUND CONFIG_ESP_SLEEP_GPIO_RESET_WORKAROUND
#define CONFIG_ESP32C3_MEMPROT_FEATURE CONFIG_ESP_SYSTEM_MEMPROT_FEATURE
#define CONFIG_ESP32C3_MEMPROT_FEATURE_LOCK CONFIG_ESP_SYSTEM_MEMPROT_FEATURE_LOCK
#define CONFIG_ESP32H2_MEMPROT_FEATURE CONFIG_ESP_SYSTEM_MEMPROT_FEATURE
#define CONFIG_ESP32H2_MEMPROT_FEATURE_LOCK CONFIG_ESP_SYSTEM_MEMPROT_FEATURE_LOCK
#define CONFIG_ESP32S2_ALLOW_RTC_FAST_MEM_AS_HEAP CONFIG_ESP_SYSTEM_ALLOW_RTC_FAST_MEM_AS_HEAP
#define CONFIG_ESP32S2_MEMPROT_FEATURE CONFIG_ESP_SYSTEM_MEMPROT_FEATURE
#define CONFIG_ESP32S2_MEMPROT_FEATURE_LOCK CONFIG_ESP_SYSTEM_MEMPROT_FEATURE_LOCK
#define CONFIG_ESP32S2_PANIC_PRINT_REBOOT CONFIG_ESP_SYSTEM_PANIC_PRINT_REBOOT
#define CONFIG_ESP32_ALLOW_RTC_FAST_MEM_AS_HEAP CONFIG_ESP_SYSTEM_ALLOW_RTC_FAST_MEM_AS_HEAP
#define CONFIG_ESP32_APPTRACE_DEST_NONE CONFIG_APPTRACE_DEST_NONE
#define CONFIG_ESP32_ENABLE_COREDUMP_TO_NONE CONFIG_ESP_COREDUMP_ENABLE_TO_NONE
#define CONFIG_ESP32_PANIC_PRINT_REBOOT CONFIG_ESP_SYSTEM_PANIC_PRINT_REBOOT
#define CONFIG_ESP32_PHY_CALIBRATION_AND_DATA_STORAGE CONFIG_ESP_PHY_CALIBRATION_AND_DATA_STORAGE
#define CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER CONFIG_ESP_PHY_MAX_WIFI_TX_POWER
#define CONFIG_ESP32_PTHREAD_STACK_MIN CONFIG_PTHREAD_STACK_MIN
#define CONFIG_ESP32_PTHREAD_TASK_NAME_DEFAULT CONFIG_PTHREAD_TASK_NAME_DEFAULT
#define CONFIG_ESP32_PTHREAD_TASK_PRIO_DEFAULT CONFIG_PTHREAD_TASK_PRIO_DEFAULT
#define CONFIG_ESP32_PTHREAD_TASK_STACK_SIZE_DEFAULT CONFIG_PTHREAD_TASK_STACK_SIZE_DEFAULT
#define CONFIG_ESP_GRATUITOUS_ARP CONFIG_LWIP_ESP_GRATUITOUS_ARP
#define CONFIG_ESP_SYSTEM_PD_FLASH CONFIG_ESP_SLEEP_POWER_DOWN_FLASH
#define CONFIG_ESP_SYSTEM_PM_POWER_DOWN_CPU CONFIG_PM_POWER_DOWN_CPU_IN_LIGHT_SLEEP
#define CONFIG_FLASHMODE_QIO CONFIG_ESPTOOLPY_FLASHMODE_QIO
#define CONFIG_GAP_TRACE_LEVEL_WARNING CONFIG_BT_LOG_GAP_TRACE_LEVEL_WARNING
#define CONFIG_GARP_TMR_INTERVAL CONFIG_LWIP_GARP_TMR_INTERVAL
#define CONFIG_GATTC_ENABLE CONFIG_BT_GATTC_ENABLE
#define CONFIG_GATTS_ENABLE CONFIG_BT_GATTS_ENABLE
#define CONFIG_GATTS_SEND_SERVICE_CHANGE_AUTO CONFIG_BT_GATTS_SEND_SERVICE_CHANGE_AUTO
#define CONFIG_GATT_TRACE_LEVEL_WARNING CONFIG_BT_LOG_GATT_TRACE_LEVEL_WARNING
#define CONFIG_HCI_TRACE_LEVEL_WARNING CONFIG_BT_LOG_HCI_TRACE_LEVEL_WARNING
#define CONFIG_HID_TRACE_LEVEL_WARNING CONFIG_BT_LOG_HID_TRACE_LEVEL_WARNING
#define CONFIG_INT_WDT CONFIG_ESP_INT_WDT
#define CONFIG_INT_WDT_TIMEOUT_MS CONFIG_ESP_INT_WDT_TIMEOUT_MS
#define CONFIG_IPC_TASK_STACK_SIZE CONFIG_ESP_IPC_TASK_STACK_SIZE
#define CONFIG_L2CAP_TRACE_LEVEL_WARNING CONFIG_BT_LOG_L2CAP_TRACE_LEVEL_WARNING
#define CONFIG_LOG_BOOTLOADER_LEVEL_NONE CONFIG_BOOTLOADER_LOG_LEVEL_NONE
#define CONFIG_MAIN_TASK_STACK_SIZE CONFIG_ESP_MAIN_TASK_STACK_SIZE
#define CONFIG_MB_CONTROLLER_NOTIFY_QUEUE_SIZE CONFIG_FMB_CONTROLLER_NOTIFY_QUEUE_SIZE
#define CONFIG_MB_CONTROLLER_NOTIFY_TIMEOUT CONFIG_FMB_CONTROLLER_NOTIFY_TIMEOUT
#define CONFIG_MB_CONTROLLER_SLAVE_ID CONFIG_FMB_CONTROLLER_SLAVE_ID
#define CONFIG_MB_CONTROLLER_SLAVE_ID_SUPPORT CONFIG_FMB_CONTROLLER_SLAVE_ID_SUPPORT
#define CONFIG_MB_CONTROLLER_STACK_SIZE CONFIG_FMB_CONTROLLER_STACK_SIZE
#define CONFIG_MB_EVENT_QUEUE_TIMEOUT CONFIG_FMB_EVENT_QUEUE_TIMEOUT
#define CONFIG_MB_MASTER_DELAY_MS_CONVERT CONFIG_FMB_MASTER_DELAY_MS_CONVERT
#define CONFIG_MB_MASTER_TIMEOUT_MS_RESPOND CONFIG_FMB_MASTER_TIMEOUT_MS_RESPOND
#define CONFIG_MB_QUEUE_LENGTH CONFIG_FMB_QUEUE_LENGTH
#define CONFIG_MB_SERIAL_BUF_SIZE CONFIG_FMB_SERIAL_BUF_SIZE
#define CONFIG_MB_SERIAL_TASK_PRIO CONFIG_FMB_PORT_TASK_PRIO
#define CONFIG_MB_SERIAL_TASK_STACK_SIZE CONFIG_FMB_PORT_TASK_STACK_SIZE
#define CONFIG_MB_TIMER_GROUP CONFIG_FMB_TIMER_GROUP
#define CONFIG_MB_TIMER_INDEX CONFIG_FMB_TIMER_INDEX
#define CONFIG_MB_TIMER_PORT_ENABLED CONFIG_FMB_TIMER_PORT_ENABLED
#define CONFIG_MCA_TRACE_LEVEL_WARNING CONFIG_BT_LOG_MCA_TRACE_LEVEL_WARNING
#define CONFIG_MONITOR_BAUD_115200B CONFIG_ESPTOOLPY_MONITOR_BAUD_115200B
#define CONFIG_OPTIMIZATION_ASSERTIONS_ENABLED CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_ENABLE
#define CONFIG_OPTIMIZATION_LEVEL_RELEASE CONFIG_COMPILER_OPTIMIZATION_SIZE
#define CONFIG_OSI_TRACE_LEVEL_WARNING CONFIG_BT_LOG_OSI_TRACE_LEVEL_WARNING
#define CONFIG_PAN_TRACE_LEVEL_WARNING CONFIG_BT_LOG_PAN_TRACE_LEVEL_WARNING
#define CONFIG_POST_EVENTS_FROM_IRAM_ISR CONFIG_ESP_EVENT_POST_FROM_IRAM_ISR
#define CONFIG_POST_EVENTS_FROM_ISR CONFIG_ESP_EVENT_POST_FROM_ISR
#define CONFIG_RFCOMM_TRACE_LEVEL_WARNING CONFIG_BT_LOG_RFCOMM_TRACE_LEVEL_WARNING
#define CONFIG_SDP_TRACE_LEVEL_WARNING CONFIG_BT_LOG_SDP_TRACE_LEVEL_WARNING
#define CONFIG_SEMIHOSTFS_HOST_PATH_MAX_LEN CONFIG_VFS_SEMIHOSTFS_HOST_PATH_MAX_LEN
#define CONFIG_SEMIHOSTFS_MAX_MOUNT_POINTS CONFIG_VFS_SEMIHOSTFS_MAX_MOUNT_POINTS
#define CONFIG_SMP_TRACE_LEVEL_WARNING CONFIG_BT_LOG_SMP_TRACE_LEVEL_WARNING
#define CONFIG_SPI_FLASH_WRITING_DANGEROUS_REGIONS_ABORTS CONFIG_SPI_FLASH_DANGEROUS_WRITE_ABORTS
#define CONFIG_STACK_CHECK_NORM CONFIG_COMPILER_STACK_CHECK_MODE_NORM
#define CONFIG_SUPPORT_TERMIOS CONFIG_VFS_SUPPORT_TERMIOS
#define CONFIG_SUPPRESS_SELECT_DEBUG_OUTPUT CONFIG_VFS_SUPPRESS_SELECT_DEBUG_OUTPUT
#define CONFIG_SW_COEXIST_ENABLE CONFIG_ESP32_WIFI_SW_COEXIST_ENABLE
#define CONFIG_SYSTEM_EVENT_QUEUE_SIZE CONFIG_ESP_SYSTEM_EVENT_QUEUE_SIZE
#define CONFIG_SYSTEM_EVENT_TASK_STACK_SIZE CONFIG_ESP_SYSTEM_EVENT_TASK_STACK_SIZE
#define CONFIG_TASK_WDT CONFIG_ESP_TASK_WDT
#define CONFIG_TASK_WDT_CHECK_IDLE_TASK_CPU0 CONFIG_ESP_TASK_WDT_CHECK_IDLE_TASK_CPU0
#define CONFIG_TASK_WDT_TIMEOUT_S CONFIG_ESP_TASK_WDT_TIMEOUT_S
#define CONFIG_TCPIP_RECVMBOX_SIZE CONFIG_LWIP_TCPIP_RECVMBOX_SIZE
#define CONFIG_TCPIP_TASK_AFFINITY_NO_AFFINITY CONFIG_LWIP_TCPIP_TASK_AFFINITY_NO_AFFINITY
#define CONFIG_TCPIP_TASK_STACK_SIZE CONFIG_LWIP_TCPIP_TASK_STACK_SIZE
#define CONFIG_TCP_MAXRTX CONFIG_LWIP_TCP_MAXRTX
#define CONFIG_TCP_MSL CONFIG_LWIP_TCP_MSL
#define CONFIG_TCP_MSS CONFIG_LWIP_TCP_MSS
#define CONFIG_TCP_OVERSIZE_MSS CONFIG_LWIP_TCP_OVERSIZE_MSS
#define CONFIG_TCP_QUEUE_OOSEQ CONFIG_LWIP_TCP_QUEUE_OOSEQ
#define CONFIG_TCP_RECVMBOX_SIZE CONFIG_LWIP_TCP_RECVMBOX_SIZE
#define CONFIG_TCP_SND_BUF_DEFAULT CONFIG_LWIP_TCP_SND_BUF_DEFAULT
#define CONFIG_TCP_SYNMAXRTX CONFIG_LWIP_TCP_SYNMAXRTX
#define CONFIG_TCP_WND_DEFAULT CONFIG_LWIP_TCP_WND_DEFAULT
#define CONFIG_TIMER_QUEUE_LENGTH CONFIG_FREERTOS_TIMER_QUEUE_LENGTH
#define CONFIG_TIMER_TASK_PRIORITY CONFIG_FREERTOS_TIMER_TASK_PRIORITY
#define CONFIG_TIMER_TASK_STACK_DEPTH CONFIG_FREERTOS_TIMER_TASK_STACK_DEPTH
#define CONFIG_TIMER_TASK_STACK_SIZE CONFIG_ESP_TIMER_TASK_STACK_SIZE
#define CONFIG_TOOLPREFIX CONFIG_SDK_TOOLPREFIX
#define CONFIG_UDP_RECVMBOX_SIZE CONFIG_LWIP_UDP_RECVMBOX_SIZE
#define CONFIG_WARN_WRITE_STRINGS CONFIG_COMPILER_WARN_WRITE_STRINGS
#define CONFIG_ARDUINO_IDF_COMMIT "fe1cf490b9"
#define CONFIG_ARDUINO_IDF_BRANCH "release/v4.4"
