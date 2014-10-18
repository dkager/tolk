/**
 *  Product:        Tolk
 *  File:           ScreenREAPER.cpp
 *  Description:    REAPER wrapper extension.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifdef _WITH_REAPER

#include <windows.h>
#include "reaper_plugin.h"
#include "..\Tolk.h"

HWND g_hwnd = NULL;
int g_actionCurrentScreenReaderId = 0;

void Tolk_OutputCurrentScreenReader() {
  const wchar_t *name = Tolk_DetectScreenReader();
  if (name) Tolk_Output(name, true);
  else MessageBox(g_hwnd, L"No active screen reader was found.", L"Information", MB_ICONINFORMATION | MB_OK);
}

bool Tolk_CommandFilter(int commandId, int flag) {
  flag;
  if (commandId == g_actionCurrentScreenReaderId) {
    Tolk_OutputCurrentScreenReader();
    return true;
  }
  return false;
}

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

TOLK_DLL_DECLSPEC int TOLK_CALL REAPER_PLUGIN_ENTRYPOINT(REAPER_PLUGIN_HINSTANCE hInstance, reaper_plugin_info_t *rec) {
  hInstance;
  if (rec) {
    if (rec->caller_version != REAPER_PLUGIN_VERSION || !rec->GetFunc) return 0;
    Tolk_Load();
    if (!rec->Register("API_Tolk_TrySAPI", &Tolk_TrySAPI)
          || !rec->Register("APIdef_Tolk_TrySAPI",
              "void\0bool\0trySAPI\0"
              "Tolk: Include SAPI in the auto-detection chain.")
          || !rec->Register("API_Tolk_PreferSAPI", &Tolk_PreferSAPI)
          || !rec->Register("APIdef_Tolk_PreferSAPI",
              "void\0bool\0preferSAPI\0"
              "Tolk: Prefer SAPI over screen readers in the auto-detection chain.")
          || !rec->Register("API_Tolk_DetectScreenReader", &Tolk_DetectScreenReader)
          || !rec->Register("APIdef_Tolk_DetectScreenReader",
              "const wchar_t * \0\0\0"
              "Tolk: Return the name of the active screen reader or NULL if there is none.")
          || !rec->Register("API_Tolk_HasSpeech", &Tolk_HasSpeech)
          || !rec->Register("APIdef_Tolk_HasSpeech",
              "bool\0\0\0"
              "Tolk: Return if the active screen reader supports speech output.")
          || !rec->Register("API_Tolk_HasBraille", &Tolk_HasBraille)
          || !rec->Register("APIdef_Tolk_HasBraille",
              "bool\0\0\0"
              "Tolk: Return if the active screen reader supports braille output.")
          || !rec->Register("API_Tolk_Output", &Tolk_Output)
          || !rec->Register("APIdef_Tolk_Output",
              "bool\0const wchar_t *,bool\0str,interrupt = false\0"
              "Tolk: Output (speech and/or braille) str to the active screen reader, optionally interrupting prior speech.")
          || !rec->Register("API_Tolk_Speak", &Tolk_Speak)
          || !rec->Register("APIdef_Tolk_Speak",
              "bool\0const wchar_t *,bool\0str,interrupt = false\0"
              "Tolk: Output (speech) str to the active screen reader, optionally interrupting prior speech.")
          || !rec->Register("API_Tolk_Braille", &Tolk_Braille)
          || !rec->Register("APIdef_Tolk_Braille",
              "bool\0const wchar_t *\0str\0"
              "Tolk: Output (braille) str to the active screen reader. Not all screen readers support this.")
          || !rec->Register("API_Tolk_IsSpeaking", &Tolk_IsSpeaking)
          || !rec->Register("APIdef_Tolk_IsSpeaking",
              "bool\0\0\0"
              "Tolk: Return if the active screen reader is speaking.")
          || !rec->Register("API_Tolk_Silence", &Tolk_Silence)
          || !rec->Register("APIdef_Tolk_Silence",
              "bool\0\0\0"
              "Tolk: Interrupt the active screen reader's speech."))
      return 0;
    g_actionCurrentScreenReaderId = rec->Register("command_id", (void *)"TOLKOutputCurrentScreenReader");
    if (!g_actionCurrentScreenReaderId) return 0;
    gaccel_register_t actionCurrentScreenReader;
    actionCurrentScreenReader.accel.fVirt = 0;
    actionCurrentScreenReader.accel.key = 0;
    actionCurrentScreenReader.accel.cmd = (WORD)g_actionCurrentScreenReaderId;
    actionCurrentScreenReader.desc = "[developer] Tolk: Make the active screen reader output its name";
    if (!rec->Register("gaccel", &actionCurrentScreenReader)) return 0;
    if (!rec->Register("hookcommand", &Tolk_CommandFilter)) return 0;
    g_hwnd = rec->hwnd_main;
    return 1;
  }
  else { // (!rec)
    Tolk_Unload();
    return 0;
  }
}

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _WITH_REAPER
