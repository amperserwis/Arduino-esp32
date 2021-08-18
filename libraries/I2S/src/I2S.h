/*
  Copyright (c) 2016 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _I2S_H_INCLUDED
#define _I2S_H_INCLUDED

#include <Arduino.h>
#include "freertos/ringbuf.h"

namespace esp_i2s {
  #include "driver/i2s.h" // ESP specific i2s driver
}

// Default pins
#ifndef PIN_I2S_SCK
  #define PIN_I2S_SCK 5
#endif

#ifndef PIN_I2S_FS
  #define PIN_I2S_FS 25
#endif

#ifndef PIN_I2S_SD
  #define PIN_I2S_SD 35 // Input if used in duplex
#endif

#ifndef PIN_I2S_SD_OUT
  #define PIN_I2S_SD_OUT 26
#endif

typedef enum {
  I2S_PHILIPS_MODE,
  I2S_RIGHT_JUSTIFIED_MODE,
  I2S_LEFT_JUSTIFIED_MODE,
  I2S_ADC_DAC,
  I2S_PDM
} i2s_mode_t;

class I2SClass : public Stream
{
public:
  // the device index and pins must map to the "COM" pads in Table 6-1 of the datasheet
  I2SClass(uint8_t deviceIndex, uint8_t clockGenerator, uint8_t sdPin, uint8_t sckPin, uint8_t fsPin);
  I2SClass(uint8_t deviceIndex, uint8_t clockGenerator, uint8_t inSdPin, uint8_t outSdPin, uint8_t sckPin, uint8_t fsPin); // set duplex
  // the SCK and FS pins are driven as outputs using the sample rate
  int begin(int mode, long sampleRate, int bitsPerSample);
  // the SCK and FS pins are inputs, other side controls sample rate
  int begin(int mode, int bitsPerSample);

  // change pin setup and mode (default is Half Duplex)
  // Can be called only on initialized object (after begin)
  int setSckPin(int sckPin);
  int setFsPin(int fsPin);
  int setDataInPin(int inSdPin);
  int setDataOutPin(int outSdPin);

  int setAllPins();
  int setAllPins(int sckPin, int fsPin, int inSdPin, int outSdPin);

  int getSckPin();
  int getFsPin();
  int getDataPin();
  int getDataInPin();
  int getDataOutPin();

  int setDuplex();
  int setSimplex();
  int isDuplex();

  void end();

  // from Stream
  virtual int available();
  virtual int read();
  virtual int peek();
  virtual void flush();

  // from Print
  virtual size_t write(uint8_t);
  virtual size_t write(const uint8_t *buffer, size_t size);

  virtual int availableForWrite();

  int read(void* buffer, size_t size);

  //size_t write(int);
  size_t write(int32_t);
  size_t write(const void *buffer, size_t size);

  void onTransmit(void(*)(void));
  void onReceive(void(*)(void));

  int setBufferSize(int bufferSize);
  int getBufferSize();
private:
  int begin(int mode, long sampleRate, int bitsPerSample, bool driveClock);

  int enableTransmitter();
  int enableReceiver();
  void onTransferComplete();

  void destroyCallbackTask();
  int createCallbackTask();

  static void onDmaTransferComplete(void*);
  int _installDriver();
  int _uninstallDriver();
  void _setSckPin(int sckPin);
  void _setFsPin(int fsPin);
  void _setDataInPin(int inSdPin);
  void _setDataOutPin(int outSdPin);
  int  _applyPinSetting();

private:
  typedef enum {
    I2S_STATE_IDLE,
    I2S_STATE_TRANSMITTER,
    I2S_STATE_RECEIVER,
    I2S_STATE_DUPLEX
  } i2s_state_t;

  int _deviceIndex;
  int _sdPin;
  int _inSdPin;
  int _outSdPin;
  int _sckPin;
  int _fsPin;

  i2s_state_t _state;
  int _bitsPerSample;
  long _sampleRate;
  int _mode;

  uint16_t _buffer_byte_size;

  bool _initialized;
  TaskHandle_t _callbackTaskHandle;
  QueueHandle_t _i2sEventQueue;
  QueueHandle_t _task_kill_cmd_semaphore_handle;
  RingbufHandle_t _input_ring_buffer;
  RingbufHandle_t _output_ring_buffer;
  int _i2s_dma_buffer_size;
  bool _driveClock;

  void (*_onTransmit)(void);
  void (*_onReceive)(void);
};

extern I2SClass I2S;

#endif
