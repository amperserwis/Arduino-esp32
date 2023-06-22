#include "WiFi.h"

// To use secrets please read the documentation at https://espressif-docs.readthedocs-hosted.com/projects/arduino-esp32/en/latest/guides/secrets.html
#if __has_include("secrets.h")
  #include "secrets.h"
#endif

#ifdef SECRETS_WIFI_SSID_1
const char* ssid     = SECRETS_WIFI_SSID_1;
#else
const char* ssid     = "example-SSID1"; // Traditional way
#endif

#ifdef SECRETS_WIFI_PASSWORD_1
const char* password = SECRETS_WIFI_PASSWORD_1;
#else
const char* password = "example-password-1"; // Traditional way
#endif
#define AP_SSID  "esp32-v6"

static volatile bool wifi_connected = false;

WiFiUDP ntpClient;

void wifiOnConnect(){
    Serial.println("STA Connected");
    Serial.print("STA IPv4: ");
    Serial.println(WiFi.localIP());
    
    ntpClient.begin(2390);
}

void wifiOnDisconnect(){
    Serial.println("STA Disconnected");
    delay(1000);
    WiFi.begin(ssid, password);
}

void wifiConnectedLoop(){
  //lets check the time
  const int NTP_PACKET_SIZE = 48;
  byte ntpPacketBuffer[NTP_PACKET_SIZE];

  IPAddress address;
  WiFi.hostByName("time.nist.gov", address);
  memset(ntpPacketBuffer, 0, NTP_PACKET_SIZE);
  ntpPacketBuffer[0] = 0b11100011;   // LI, Version, Mode
  ntpPacketBuffer[1] = 0;     // Stratum, or type of clock
  ntpPacketBuffer[2] = 6;     // Polling Interval
  ntpPacketBuffer[3] = 0xEC;  // Peer Clock Precision
  // 8 bytes of zero for Root Delay & Root Dispersion
  ntpPacketBuffer[12]  = 49;
  ntpPacketBuffer[13]  = 0x4E;
  ntpPacketBuffer[14]  = 49;
  ntpPacketBuffer[15]  = 52;
  ntpClient.beginPacket(address, 123); //NTP requests are to port 123
  ntpClient.write(ntpPacketBuffer, NTP_PACKET_SIZE);
  ntpClient.endPacket();

  delay(1000);
  
  int packetLength = ntpClient.parsePacket();
  if (packetLength){
    if(packetLength >= NTP_PACKET_SIZE){
      ntpClient.read(ntpPacketBuffer, NTP_PACKET_SIZE);
    }
    ntpClient.flush();
    uint32_t secsSince1900 = (uint32_t)ntpPacketBuffer[40] << 24 | (uint32_t)ntpPacketBuffer[41] << 16 | (uint32_t)ntpPacketBuffer[42] << 8 | ntpPacketBuffer[43];
    //Serial.printf("Seconds since Jan 1 1900: %u\n", secsSince1900);
    uint32_t epoch = secsSince1900 - 2208988800UL;
    //Serial.printf("EPOCH: %u\n", epoch);
    uint8_t h = (epoch  % 86400L) / 3600;
    uint8_t m = (epoch  % 3600) / 60;
    uint8_t s = (epoch % 60);
    Serial.printf("UTC: %02u:%02u:%02u (GMT)\n", h, m, s);
  }

  delay(9000);
}

void WiFiEvent(WiFiEvent_t event){
    switch(event) {

        case ARDUINO_EVENT_WIFI_AP_START:
            //can set ap hostname here
            WiFi.softAPsetHostname(AP_SSID);
            //enable ap ipv6 here
            WiFi.softAPenableIpV6();
            break;

        case ARDUINO_EVENT_WIFI_STA_START:
            //set sta hostname here
            WiFi.setHostname(AP_SSID);
            break;
        case ARDUINO_EVENT_WIFI_STA_CONNECTED:
            //enable sta ipv6 here
            WiFi.enableIpV6();
            break;
        case ARDUINO_EVENT_WIFI_STA_GOT_IP6:
            Serial.print("STA IPv6: ");
            Serial.println(WiFi.localIPv6());
            break;
        case ARDUINO_EVENT_WIFI_AP_GOT_IP6:
            Serial.print("AP IPv6: ");
            Serial.println(WiFi.softAPIPv6());
            break;
        case ARDUINO_EVENT_WIFI_STA_GOT_IP:
            wifiOnConnect();
            wifi_connected = true;
            break;
        case ARDUINO_EVENT_WIFI_STA_DISCONNECTED:
            wifi_connected = false;
            wifiOnDisconnect();
            break;
        default:
            break;
    }
}

void setup(){
    Serial.begin(115200);
    WiFi.disconnect(true);
    WiFi.onEvent(WiFiEvent);
    WiFi.mode(WIFI_MODE_APSTA);
    WiFi.softAP(AP_SSID);
    WiFi.begin(ssid, password);
}

void loop(){
    if(wifi_connected){
        wifiConnectedLoop();
    }
    while(Serial.available()) Serial.write(Serial.read());
}
