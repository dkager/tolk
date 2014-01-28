/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverNVDA.h
 *  Description:    Driver for the NVDA screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifndef _SCREENREADER_DRIVER_NVDA_H_
#define _SCREENREADER_DRIVER_NVDA_H_

#include <windows.h>
#include "ScreenReaderDriver.h"

class ScreenReaderDriverNVDA : public ScreenReaderDriver {
public:
  ScreenReaderDriverNVDA();
  ~ScreenReaderDriverNVDA();
  bool Speak(const wchar_t *str, bool interrupt = false);
  bool Braille(const wchar_t *str);
  bool Silence();
  bool IsActive();
  bool Output(const wchar_t *str, bool interrupt = false);
private:
  typedef error_status_t (__stdcall *NVDAController_speakText)(const wchar_t*);
  typedef error_status_t (__stdcall *NVDAController_brailleMessage)(const wchar_t*);
  typedef error_status_t (__stdcall *NVDAController_cancelSpeech)();
  typedef error_status_t (__stdcall *NVDAController_testIfRunning)();
  HINSTANCE controller;
  NVDAController_speakText nvdaController_speakText;
  NVDAController_brailleMessage nvdaController_brailleMessage;
  NVDAController_cancelSpeech nvdaController_cancelSpeech;
  NVDAController_testIfRunning nvdaController_testIfRunning;
};

#endif // _SCREENREADER_DRIVER_NVDA_H_
