;;;
 ;  Product:        Tolk
 ;  File:           Tolk.au3
 ;  Description:    AutoIt wrapper file.
 ;  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 ;  License:        LGPLv3
 ;;

; Preload to avoid excessive loading/unloading
; AutoIt will take care of closing this on termination
Local Const $tolk = DllOpen("Tolk.dll")

Func Tolk_Load()
  If $tolk <> -1 Then
    DllCall($tolk, "NONE:cdecl", "Tolk_Load")
  EndIf
EndFunc

Func Tolk_IsLoaded()
  If $tolk <> -1 Then
    Return DllCall($tolk, "BOOLEAN:cdecl", "Tolk_IsLoaded")[0]
  EndIf
  Return False
EndFunc

Func Tolk_Unload()
  If $tolk <> -1 Then
    DllCall($tolk, "NONE:cdecl", "Tolk_Unload")
  EndIf
EndFunc

Func Tolk_TrySAPI($trySAPI)
  If $tolk <> -1 Then
    DllCall($tolk, "NONE:cdecl", "Tolk_TrySAPI", "BOOLEAN", $trySAPI)
  EndIf
EndFunc

Func Tolk_PreferSAPI($preferSAPI)
  If $tolk <> -1 Then
    DllCall($tolk, "NONE:cdecl", "Tolk_PreferSAPI", "BOOLEAN", $preferSAPI)
  EndIf
EndFunc

Func Tolk_DetectScreenReader()
  If $tolk <> -1 Then
    Local $name = DllCall($tolk, "WSTR:cdecl", "Tolk_DetectScreenReader")[0]
    If $name <> "" Then
      Return $name
    EndIf
  EndIf
  Return Null
EndFunc

Func Tolk_HasSpeech()
  If $tolk <> -1 Then
    Return DllCall($tolk, "BOOLEAN:cdecl", "Tolk_HasSpeech")[0]
  EndIf
  Return False
EndFunc

Func Tolk_HasBraille()
  If $tolk <> -1 Then
    Return DllCall($tolk, "BOOLEAN:cdecl", "Tolk_HasBraille")[0]
  EndIf
  Return False
EndFunc

Func Tolk_Output(ByRef $str, $interrupt = False)
  If $tolk <> -1 Then
    Return DllCall($tolk, "BOOLEAN:cdecl", "Tolk_Output", "WSTR", $str, "BOOLEAN", $interrupt)[0]
  EndIf
  Return False
EndFunc

Func Tolk_Speak(ByRef $str, $interrupt = False)
  If $tolk <> -1 Then
    Return DllCall($tolk, "BOOLEAN:cdecl", "Tolk_Speak", "WSTR", $str, "BOOLEAN", $interrupt)[0]
  EndIf
  Return False
EndFunc

Func Tolk_Braille(ByRef $str)
  If $tolk <> -1 Then
    Return DllCall($tolk, "BOOLEAN:cdecl", "Tolk_Braille", "WSTR", $str)[0]
  EndIf
  Return False
EndFunc

Func Tolk_IsSpeaking()
  If $tolk <> -1 Then
    Return DllCall($tolk, "BOOLEAN:cdecl", "Tolk_IsSpeaking")[0]
  EndIf
  Return False
EndFunc

Func Tolk_Silence()
  If $tolk <> -1 Then
    Return DllCall($tolk, "BOOLEAN:cdecl", "Tolk_Silence")[0]
  EndIf
  Return False
EndFunc
