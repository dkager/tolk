/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverJAWS.h
 *  Description:    Driver for the JAWS screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifndef _SCREEN_READER_DRIVER_JAWS_H_
#define _SCREEN_READER_DRIVER_JAWS_H_

#include "fsapi.h"
#include "ScreenReaderDriver.h"

class ScreenReaderDriverJAWS : public ScreenReaderDriver {
public:
  ScreenReaderDriverJAWS();
  ~ScreenReaderDriverJAWS();

public:
  bool Speak(const wchar_t *str, bool interrupt);
  bool Braille(const wchar_t *str);
  bool IsSpeaking() { return false; }
  bool Silence();
  bool IsActive();
  bool Output(const wchar_t *str, bool interrupt);

private:
  void Initialize();
  void Finalize();
  bool IsRunning() { return (!!FindWindow(L"JFWUI2", NULL)); }

private:
  IJawsApi *controller;
};

#endif // _SCREEN_READER_DRIVER_JAWS_H_
