/**
 *  Product:        Tolk
 *  File:           ScreenReaderDriverSNova.cpp
 *  Description:    Driver for the SuperNova screen reader.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#include "ScreenReaderDriverSNova.h"

#define DOLACCESS_NONE 0
#define DOLACCESS_HAL 1
#define DOLACCESS_SUPERNOVA 4
#define DOLACCESS_LUNARPLUS 8
#define DOLACCESS_SUCCESS 0
#define DOLACCESS_FAIL_NO_SERVER 1
#define DOLACCESS_FAIL_INVALID_ID 2
#define DOLACCESS_FAIL_BAD_LEN 3
#define DOLACCESS_FAIL_INVALID_ACTION 4
#define DOLACCESS_FAIL_NOT_SUPPORTED_BY_SERVER 5
#define DOLACCESS_FAIL_BAD_STRING 6
#define DOLACCESS_FAIL_TIMED_OUT 7
#define DOLACCESS_FAIL_READ_ONLY 8
#define DOLACCESS_FAIL_SERVER_BUSY 9
#define DOLAPI_COMMAND_SPEAK 1
#define CMD_mute_ 141

ScreenReaderDriverSNova::ScreenReaderDriverSNova() :
  ScreenReaderDriver(L"SuperNova", true, false),
  #ifdef _WIN64
  // Dolphin is not currently providing this library.
  controller(LoadLibrary(L"dolapi64.dll")),
  #else
  controller(LoadLibrary(L"dolapi32.dll")),
  #endif
  dolAccess_GetSystem(NULL),
  dolAccess_Action(NULL),
  dolAccess_Command(NULL)
{
  if (controller) {
    dolAccess_GetSystem = (DolAccess_GetSystem)GetProcAddress(controller, "_DolAccess_GetSystem@0");
    dolAccess_Action = (DolAccess_Action)GetProcAddress(controller, "_DolAccess_Action@4");
    dolAccess_Command = (DolAccess_Command)GetProcAddress(controller, "_DolAccess_Command@12");
  }
}

ScreenReaderDriverSNova::~ScreenReaderDriverSNova() {
  if (controller) FreeLibrary(controller);
}

bool ScreenReaderDriverSNova::Speak(const wchar_t* str, bool interrupt) {
  if (interrupt && !Silence()) return false;
  if (dolAccess_Command && IsActive())
    return (dolAccess_Command(str, (int)(wcslen(str) + 1) * sizeof(wchar_t), DOLAPI_COMMAND_SPEAK) == DOLACCESS_SUCCESS);
  return false;
}

bool ScreenReaderDriverSNova::Silence() {
  if (dolAccess_Action && IsActive())
    return (dolAccess_Action(CMD_mute_) == DOLACCESS_SUCCESS);
  return false;
}

bool ScreenReaderDriverSNova::IsActive() {
  if (dolAccess_GetSystem) {
    const int result = dolAccess_GetSystem();
    return (result == DOLACCESS_HAL || result == DOLACCESS_SUPERNOVA || result == DOLACCESS_LUNARPLUS); 
  }
  return false;
}
