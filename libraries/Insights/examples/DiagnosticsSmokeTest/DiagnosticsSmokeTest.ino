#include "Insights.h"
#include "Metrics.h"
#include "WiFi.h"
#include "inttypes.h"
#include "esp_err.h"

const char insights_auth_key[] = "<ENTER YOUR AUTH KEY>";

#define WIFI_SSID       "<ENTER YOUR SSID>"
#define WIFI_PASSPHRASE "<ENTER YOUR PASSWORD>"

#define MAX_CRASHES     5
#define MAX_PTRS        30
#define TAG             "sketch"

RTC_NOINIT_ATTR static uint32_t s_reset_count;
static void *s_ptrs[MAX_PTRS];

static void smoke_test()
{
    int dice;
    int count = 0;
    bool allocating = false;

    while (1) {
        dice = esp_random() % 500;
        log_i("dice=%d", dice);
        if (dice > 0 && dice < 150) {
            log_e("[count][%d]", count);
        } else if (dice > 150 && dice < 300) {
            log_w("[count][%d]", count);
        } else if (dice > 300 && dice < 470) {
            ESP_DIAG_EVENT(TAG, "[count][%d]", count);
        } else {
            /* 30 in 500 probability to crash */
            if (s_reset_count > MAX_CRASHES) {
                ESP_DIAG_EVENT(TAG, "[count][%d]", count);
            } else {
               log_e("[count][%d] [crash_count][%" PRIu32 "] [excvaddr][0x0f] Crashing...", count, s_reset_count);
               *(int *)0x0F = 0x10;
           }
        }

        Metrics.dumpHeapMetrics();
        if (count % MAX_PTRS == 0) {
            allocating = !allocating;
            log_i("Allocating:%s\n", allocating ? "true" : "false");
        }
        if (allocating) {
            uint32_t size = 1024 * (esp_random() % 8);
            void *p = malloc(size);
            if (p) {
                memset(p, size, 'A' + (esp_random() % 26));
                log_i("Allocated %" PRIu32 " bytes", size);
            }
            s_ptrs[count % MAX_PTRS] = p;
        } else {
            free(s_ptrs[count % MAX_PTRS]);
            s_ptrs[count % MAX_PTRS] = NULL;
            log_i("Freeing some memory...");
        }

        count++;
        delay(1000);
    }
}

void setup()
{
    Serial.begin(115200);
    WiFi.mode(WIFI_STA);
    WiFi.begin(WIFI_SSID, WIFI_PASSPHRASE);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected");
    
    esp_err_t ret = Insights.init(insights_auth_key, ESP_DIAG_LOG_TYPE_ERROR | ESP_DIAG_LOG_TYPE_WARNING | ESP_DIAG_LOG_TYPE_EVENT);
    if(ret != ESP_OK) {
        ESP.restart();
    }
    if (esp_reset_reason() == ESP_RST_POWERON)  {
        s_reset_count = 1;
    } else {
        s_reset_count++;
    } 
}

void loop()
{
    smoke_test();
    delay(100);
}
