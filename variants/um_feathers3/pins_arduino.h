#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303A
#define USB_PID 0x80D6
#define USB_MANUFACTURER "Unexpected Maker"
#define USB_PRODUCT "FeatherS3"
#define USB_SERIAL ""

#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        21
#define NUM_ANALOG_INPUTS       13

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<48)?(p):-1)
#define digitalPinHasPWM(p)         (p < 46)

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

static const uint8_t SS    = 5;
static const uint8_t MOSI  = 35;
static const uint8_t MISO  = 37;
static const uint8_t SDO  = 35;
static const uint8_t SDI  = 37;
static const uint8_t SCK   = 36;

static const uint8_t A0 = 1;
static const uint8_t A1 = 2;
static const uint8_t A2 = 3;
static const uint8_t A3 = 4;
static const uint8_t A4 = 5;
static const uint8_t A5 = 6;
static const uint8_t A6 = 7;
static const uint8_t A7 = 8;
static const uint8_t A8 = 9;
static const uint8_t A9 = 10;
static const uint8_t A10 = 11;
static const uint8_t A11 = 12;
static const uint8_t A12 = 13;

static const uint8_t T1 = 1;
static const uint8_t T3 = 3;
static const uint8_t T5 = 5;
static const uint8_t T6 = 6;
static const uint8_t T7 = 7;
static const uint8_t T8 = 8;
static const uint8_t T9 = 9;
static const uint8_t T10 = 10;
static const uint8_t T11 = 11;
static const uint8_t T12 = 12;
static const uint8_t T14 = 14;

static const uint8_t VBAT_SENSE = 2;
static const uint8_t VBUS_SENSE = 34;

static const uint8_t RGB_DATA = 40;
static const uint8_t RGB_PWR = 39;
static const uint8_t LDO2 = 39;
static const uint8_t LED_BUILTIN = 13;
static const uint8_t LED = 13;

#endif /* Pins_Arduino_h */
