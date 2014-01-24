/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverZT.h
 *  Description:    Driver for the ZoomText screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifndef _SCREENREADER_DRIVER_ZT_H_
#define _SCREENREADER_DRIVER_ZT_H_

#include "zt.h"
#include "ScreenReaderDriver.h"

class ScreenReaderDriverZT : public ScreenReaderDriver {
public:
  ScreenReaderDriverZT();
  ~ScreenReaderDriverZT();
  bool Speak(const wchar_t *str, bool interrupt = false);
  bool Braille(const wchar_t *str) { return false; }
  bool Silence();
  bool IsActive();
  bool Output(const wchar_t *str, bool interrupt = false) { return Speak(str, interrupt); }
private:
  void Initialize();
  void Finalize();
  bool IsRunning();
  IZoomText2 *controller;
  ISpeech2 *speech;
};

#endif // _SCREENREADER_DRIVER_ZT_H_
