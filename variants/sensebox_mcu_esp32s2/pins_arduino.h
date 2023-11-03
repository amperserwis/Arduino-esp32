#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303A
#define USB_PID 0x81B5
#define USB_MANUFACTURER "senseBox"
#define USB_PRODUCT "MCU-S2 ESP32S2"
#define USB_SERIAL "" // Empty string for MAC adddress

// Default USB FirmwareMSC Settings
#define USB_FW_MSC_VENDOR_ID "senseBox"        // max 8 chars
#define USB_FW_MSC_PRODUCT_ID "MCU-S2 ESP32S2" // max 16 chars
#define USB_FW_MSC_PRODUCT_REVISION "1.00"     // max 4 chars
#define USB_FW_MSC_VOLUME_NAME "senseBox"      // max 11 chars
#define USB_FW_MSC_SERIAL_NUMBER 0x00000000

#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS 48
#define NUM_ANALOG_INPUTS 20

#define analogInputToDigitalPin(p) (((p) < 20) ? (analogChannelToDigitalPin(p)) : -1)
#define digitalPinToInterrupt(p) (((p) < 48) ? (p) : -1)
#define digitalPinHasPWM(p) (p < 46)

#define PIN_NEOPIXEL 1 // NeoPixel LED
#define NEOPIXEL_PIN 1 // NeoPixel LED
#define NEOPIXEL_NUM 1 // number of neopixels

// Default I2C QWIIC-Ports
static const uint8_t SDA = 39;
static const uint8_t SCL = 40;

// Secondary I2C MPU6050
#define WIRE1_PIN_DEFINED 1 // See Wire.cpp at bool TwoWire::initPins(int sdaPin, int sclPin)
static const uint8_t SCL1 = 42;
static const uint8_t SDA1 = 45;

static const uint8_t SS = 42;
static const uint8_t MOSI = 35;
static const uint8_t SCK = 36;
static const uint8_t MISO = 37;

#define PIN_XBEE_INT 33
#define PIN_XBEE_CS 34
#define PIN_XBEE_MOSI 35
#define PIN_XBEE_SCLK 36
#define PIN_XBEE_MISO 37
#define PIN_XBEE_RESET 38

// IO Pins
#define PIN_LED 1
#define PIN_IO2 2
#define PIN_IO3 3
#define PIN_IO4 4
#define PIN_IO5 5
#define PIN_IO6 6
#define PIN_IO7 7
#define IO_ENABLE 8

static const uint8_t A2 = PIN_IO2;
static const uint8_t A3 = PIN_IO3;
static const uint8_t A4 = PIN_IO4;
static const uint8_t A5 = PIN_IO5;
static const uint8_t A6 = PIN_IO6;
static const uint8_t A7 = PIN_IO7;

static const uint8_t D2 = PIN_IO2;
static const uint8_t D3 = PIN_IO3;
static const uint8_t D4 = PIN_IO4;
static const uint8_t D5 = PIN_IO5;
static const uint8_t D6 = PIN_IO6;
static const uint8_t D7 = PIN_IO7;

// UART Port
static const uint8_t TX = 43;
static const uint8_t RX = 44;
#define PIN_UART_ENABLE 26

// UART XBee
static const uint8_t TX1 = 17;
static const uint8_t RX1 = 18;

// PD-Sensor
#define PD_SENSE 14
#define PD_ENABLE 21

// XBee
#define PIN_XB1_CS 34
#define PIN_XB1_ENABLE 41

// SD-Card
#define VSPI_MISO 13
#define VSPI_MOSI 11
#define VSPI_SCLK 12
#define VSPI_SS 10
#define SD_ENABLE 9

// Touch Pins
static const uint8_t T2 = PIN_IO2;
static const uint8_t T3 = PIN_IO3;
static const uint8_t T4 = PIN_IO4;
static const uint8_t T5 = PIN_IO5;
static const uint8_t T6 = PIN_IO6;
static const uint8_t T7 = PIN_IO7;


static const uint8_t DAC1 = 17;
static const uint8_t DAC2 = 18;

// Alias Serial to SerialUSB
#define Serial SerialUSB

#endif /* Pins_Arduino_h */
