;;;
 ;  Product:        Tolk
 ;  File:           Tolk.pb
 ;  Description:    PureBasic wrapper module.
 ;  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 ;  License:        LGPLv3
 ;;

DeclareModule Tolk
  Declare Load()
  Declare.a IsLoaded()
  Declare Unload()
  Declare TrySAPI(trySAPI.a)
  Declare PreferSAPI(preferSAPI.a)
  Declare.s DetectScreenReader()
  Declare.a HasSpeech()
  Declare.a HasBraille()
  Declare.a Output(str.s, interrupt.a = #False)
  Declare.a Speak(str.s, interrupt.a = #False)
  Declare.a Braille(str.s)
  Declare.a IsSpeaking()
  Declare.a Silence()
EndDeclareModule

Module Tolk
  ImportC "Tolk.lib"
    Tolk_Load()
    Tolk_IsLoaded.a()
    Tolk_Unload()
    Tolk_TrySAPI(trySAPI.a)
    Tolk_PreferSAPI(preferSAPI.a)
    Tolk_DetectScreenReader()
    Tolk_HasSpeech.a()
    Tolk_HasBraille.a()
    Tolk_Output.a(str.p-unicode, interrupt.a = #False)
    Tolk_Speak.a(str.p-unicode, interrupt.a = #False)
    Tolk_Braille.a(str.p-unicode)
    Tolk_IsSpeaking.a()
    Tolk_Silence.a()
  EndImport

  Procedure Load()
    Tolk_Load()
  EndProcedure

  Procedure.a IsLoaded()
    ProcedureReturn Tolk_IsLoaded()
  EndProcedure

  Procedure Unload()
    Tolk_Unload()
  EndProcedure

  Procedure TrySAPI(trySAPI.a)
    Tolk_TrySAPI(trySAPI)
  EndProcedure

  Procedure PreferSAPI(preferSAPI.a)
    Tolk_PreferSAPI(preferSAPI)
  EndProcedure

  Procedure.s DetectScreenReader()
    ; PureBasic can't do this conversion on its own
    ProcedureReturn PeekS(Tolk_DetectScreenReader())
  EndProcedure

  Procedure.a HasSpeech()
    ProcedureReturn Tolk_HasSpeech()
  EndProcedure

  Procedure.a HasBraille()
    ProcedureReturn Tolk_HasBraille()
  EndProcedure

  Procedure.a Output(str.s, interrupt.a = #False)
    ProcedureReturn Tolk_Output(str, interrupt)
  EndProcedure

  Procedure.a Speak(str.s, interrupt.a = #False)
    ProcedureReturn Tolk_Speak(str, interrupt)
  EndProcedure

  Procedure.a Braille(str.s)
    ProcedureReturn Tolk_Braille(str)
  EndProcedure

  Procedure.a IsSpeaking()
    ProcedureReturn Tolk_IsSpeaking()
  EndProcedure

  Procedure.a Silence()
    ProcedureReturn Tolk_Silence()
  EndProcedure
EndModule
