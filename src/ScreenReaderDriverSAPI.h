/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverSAPI.h
 *  Description:    Driver for the Microsoft Speech API (SAPI).
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifndef _SCREEN_READER_DRIVER_SAPI_H_
#define _SCREEN_READER_DRIVER_SAPI_H_

#include "ScreenReaderDriver.h"
#include <sapi.h>

class ScreenReaderDriverSAPI : public ScreenReaderDriver {
public:
  ScreenReaderDriverSAPI();
  ~ScreenReaderDriverSAPI();
  bool Speak(const wchar_t *str, bool interrupt);
  bool Braille(const wchar_t *str) { str; return false; }
  bool Silence();
  bool IsActive() { return (controller != NULL); }
  bool Output(const wchar_t *str, bool interrupt) { return Speak(str, interrupt); }
private:
  void Initialize();
  void Finalize();
  ISpVoice *controller;
};

#endif // _SCREEN_READER_DRIVER_SAPI_H_
