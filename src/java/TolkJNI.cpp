/**
 *  Product:        Tolk
 *  File:           TolkJNI.cpp
 *  Description:    Java Native Interface (JNI) wrapper functions.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

#ifdef _WITH_JNI

#include <windows.h>
#include <jni_md.h> // Platform-specific defines, include first
#include "TolkJNI.h" // Auto-generated using ..\..\build_jni.bat
#include "..\Tolk.h"

extern "C" {

JNIEXPORT void JNICALL Java_com_davykager_tolk_Tolk_load(JNIEnv *, jclass) {
  Tolk_Load();
}

JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_isLoaded(JNIEnv *, jclass) {
  return Tolk_IsLoaded();
}

JNIEXPORT void JNICALL Java_com_davykager_tolk_Tolk_unload(JNIEnv *, jclass) {
  Tolk_Unload();
}

JNIEXPORT void JNICALL Java_com_davykager_tolk_Tolk_trySAPI(JNIEnv *, jclass, jboolean trySAPI) {
  Tolk_TrySAPI(trySAPI ? true : false);
}

JNIEXPORT void JNICALL Java_com_davykager_tolk_Tolk_preferSAPI(JNIEnv *, jclass, jboolean preferSAPI) {
  Tolk_PreferSAPI(preferSAPI ? true : false);
}

JNIEXPORT jstring JNICALL Java_com_davykager_tolk_Tolk_detectScreenReader(JNIEnv *env, jclass) {
  const wchar_t *str = Tolk_DetectScreenReader();
  if (!str) return NULL;
  return env->NewString((jchar *)str, (jsize)wcslen(str));
}

JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_hasSpeech(JNIEnv *, jclass) {
  return Tolk_HasSpeech();
}

JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_hasBraille(JNIEnv *, jclass) {
  return Tolk_HasBraille();
}

JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_output(JNIEnv *env, jclass, jstring jstr, jboolean interrupt) {
  const wchar_t *str = (wchar_t *)(env->GetStringChars(jstr, NULL));
  const bool result = Tolk_Output(str, interrupt ? true : false);
  env->ReleaseStringChars(jstr, (jchar *)str);
  return result;
}

JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_speak(JNIEnv *env, jclass, jstring jstr, jboolean interrupt) {
  const wchar_t *str = (wchar_t *)(env->GetStringChars(jstr, NULL));
  const bool result = Tolk_Speak(str, interrupt ? true : false);
  env->ReleaseStringChars(jstr, (jchar *)str);
  return result;
}

JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_braille(JNIEnv *env, jclass, jstring jstr) {
  const wchar_t *str = (wchar_t *)(env->GetStringChars(jstr, NULL));
  const bool result = Tolk_Braille(str);
  env->ReleaseStringChars(jstr, (jchar *)str);
  return result;
}

JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_isSpeaking(JNIEnv *, jclass) {
  return Tolk_IsSpeaking();
}

JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_silence(JNIEnv *, jclass) {
  return Tolk_Silence();
}

} // extern "C"

#endif // _WITH_JNI
