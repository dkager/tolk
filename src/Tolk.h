/**
 *  Product:        Tolk
 *  File:           Tolk.h
 *  Description:    Main include file for C-style DLL exports.
 *  Copyright:      (c) 2014-2016, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifndef _TOLK_H_
#define _TOLK_H_

#ifdef _EXPORTING
#define TOLK_DLL_DECLSPEC __declspec(dllexport)
#else
#define TOLK_DLL_DECLSPEC __declspec(dllimport)
#endif // _EXPORTING
#define TOLK_CALL __cdecl

#ifdef __cplusplus
extern "C" {
#else
#include <stdbool.h>
#include <wchar.h>
#endif // __cplusplus

/**
 *  Name:         Tolk_Load
 *  Description:  Initializes Tolk by loading and initializing the screen reader drivers and setting the current screen reader driver, provided at least one of the supported screen readers is active. Also initializes COM if it has not already been initialized on the calling thread. Calling this function more than once will only initialize COM. You should call this function before using the functions below. Use Tolk_IsLoaded to determine if Tolk has been initialized.
 *  Parameters:   None.
 *  Returns:      None.
 */
TOLK_DLL_DECLSPEC void TOLK_CALL Tolk_Load();

/**
 *  Name:         Tolk_IsLoaded
 *  Description:  Tests if Tolk has been initialized.
 *  Parameters:   None.
 *  Returns:      true if Tolk has been initialized, false otherwise.
 */
TOLK_DLL_DECLSPEC bool TOLK_CALL Tolk_IsLoaded();

/**
 *  Name:         Tolk_Unload
 *  Description:  Finalizes Tolk by finalizing and unloading the screen reader drivers and clearing the current screen reader driver, provided one was set. Also uninitializes COM on the calling thread. Calling this function more than once will only uninitialize COM. You should not use the functions below if this function has been called.
 *  Parameters:   None.
 *  Returns:      None.
 */
TOLK_DLL_DECLSPEC void TOLK_CALL Tolk_Unload();

/**
 *  Name:         Tolk_TrySAPI
 *  Description:  Sets if Microsoft Speech API (SAPI) should be used in the screen reader auto-detection process. The default is not to include SAPI. The SAPI driver will use the system default synthesizer, voice and soundcard. This function triggers the screen reader detection process if needed. For best performance, you should call this function before calling Tolk_Load.
 *  Parameters:   trySAPI: whether or not to include SAPI in auto-detection.
 *  Returns:      None.
 */
TOLK_DLL_DECLSPEC void TOLK_CALL Tolk_TrySAPI(bool trySAPI);

/**
 *  Name:         Tolk_PreferSAPI
 *  Description:  If auto-detection for SAPI has been turned on through Tolk_TrySAPI, sets if SAPI should be placed first (true) or last (false) in the screen reader detection list. Putting it last is the default and is good for using SAPI as a fallback option. Putting it first is good for ensuring SAPI is used even when a screen reader is running, but keep in mind screen readers will still be tried if SAPI is unavailable. This function triggers the screen reader detection process if needed. For best performance, you should call this function before calling Tolk_Load.
 *  Parameters:   preferSAPI: whether or not to prefer SAPI over screen reader drivers in auto-detection.
 *  Returns:      None.
 */
TOLK_DLL_DECLSPEC void TOLK_CALL Tolk_PreferSAPI(bool preferSAPI);

/**
 *  Name:         Tolk_DetectScreenReader
 *  Description:  Returns the common name for the currently active screen reader driver, if one is set. If none is set, tries to detect the currently active screen reader before looking up the name. If no screen reader is active, NULL is returned. Note that the drivers hard-code the common name, it is not requested from the screen reader itself. You should call Tolk_Load once before using this function.
 *  Parameters:   None.
 *  Returns:      A Unicode string representation of the common name on success, NULL otherwise.
 */
TOLK_DLL_DECLSPEC const wchar_t * TOLK_CALL Tolk_DetectScreenReader();

/**
 *  Name:         Tolk_HasSpeech
 *  Description:  Tests if the current screen reader driver supports speech output, if one is set. If none is set, tries to detect the currently active screen reader before testing for speech support. You should call Tolk_Load once before using this function.
 *  Parameters:   None.
 *  Returns:      true if the current screen reader driver supports speech, false otherwise.
 */
TOLK_DLL_DECLSPEC bool TOLK_CALL Tolk_HasSpeech();

/**
 *  Name:         Tolk_HasBraille
 *  Description:  Tests if the current screen reader driver supports braille output, if one is set. If none is set, tries to detect the currently active screen reader before testing for braille support. You should call Tolk_Load once before using this function.
 *  Parameters:   None.
 *  Returns:      true if the current screen reader driver supports braille, false otherwise.
 */
TOLK_DLL_DECLSPEC bool TOLK_CALL Tolk_HasBraille();

/**
 *  Name:         Tolk_Output
 *  Description:  Outputs text through the current screen reader driver, if one is set. If none is set or if it encountered an error, tries to detect the currently active screen reader before outputting the text. This is the preferred function to use for sending text to a screen reader, because it uses all of the supported output methods (speech and/or braille depending on the current screen reader driver). You should call Tolk_Load once before using this function. This function is asynchronous.
 *  Parameters:   str: text to output.
 *                interrupt: whether or not to first cancel any previous speech.
 *  Returns:      true on success, false otherwise.
 */
#ifdef __cplusplus
TOLK_DLL_DECLSPEC bool TOLK_CALL Tolk_Output(const wchar_t *str, bool interrupt = false);
#else
TOLK_DLL_DECLSPEC bool TOLK_CALL Tolk_Output(const wchar_t *str, bool interrupt);
#endif // __cplusplus

/**
 *  Name:         Tolk_Speak
 *  Description:  Speaks text through the current screen reader driver, if one is set and supports speech output. If none is set or if it encountered an error, tries to detect the currently active screen reader before speaking the text. Use this function only if you specifically need to speak text through the current screen reader without also brailling it. Not all screen reader drivers may support this functionality. Therefore, use Tolk_Output whenever possible. You should call Tolk_Load once before using this function. This function is asynchronous.
 *  Parameters:   str: text to speak.
 *                interrupt: whether or not to first cancel any previous speech.
 *  Returns:      true on success, false otherwise.
 */
#ifdef __cplusplus
TOLK_DLL_DECLSPEC bool TOLK_CALL Tolk_Speak(const wchar_t *str, bool interrupt = false);
#else
TOLK_DLL_DECLSPEC bool TOLK_CALL Tolk_Speak(const wchar_t *str, bool interrupt);
#endif // __cplusplus

/**
 *  Name:         Tolk_Braille
 *  Description:  Brailles text through the current screen reader driver, if one is set and supports braille output. If none is set or if it encountered an error, tries to detect the currently active screen reader before brailling the given text. Use this function only if you specifically need to braille text through the current screen reader without also speaking it. Not all screen reader drivers may support this functionality. Therefore, use Tolk_Output whenever possible. You should call Tolk_Load once before using this function.
 *  Parameters:   str: text to braille.
 *  Returns:      true on success, false otherwise.
 */
TOLK_DLL_DECLSPEC bool TOLK_CALL Tolk_Braille(const wchar_t *str);

/**
 *  Name:         Tolk_IsSpeaking
 *  Description:  Tests if the screen reader associated with the current screen reader driver is speaking, if one is set and supports querying for status information. If none is set, tries to detect the currently active screen reader before testing if it is speaking. You should call Tolk_Load once before using this function.
 *  Parameters:   None.
 *  Returns:      true if text is being spoken by the screen reader, false otherwise.
 */
TOLK_DLL_DECLSPEC bool TOLK_CALL Tolk_IsSpeaking();

/**
 *  Name:         Tolk_Silence
 *  Description:  Silences the screen reader associated with the current screen reader driver, if one is set and supports speech output. If none is set or if it encountered an error, tries to detect the currently active screen reader before silencing it. You should call Tolk_Load once before using this function.
 *  Parameters:   None.
 *  Returns:      true on success, false otherwise.
 */
TOLK_DLL_DECLSPEC bool TOLK_CALL Tolk_Silence();

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif // _TOLK_H_
