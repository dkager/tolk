###
 #  Product:        Tolk
 #  File:           Tolk.py
 #  Description:    Python wrapper module.
 #  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 #  License:        LGPLv3
 ##

from ctypes import cdll, CFUNCTYPE, c_bool, c_wchar_p

_tolk = cdll.Tolk

_proto_load = CFUNCTYPE(None)
load = _proto_load(("Tolk_Load", _tolk))

_proto_is_loaded = CFUNCTYPE(c_bool)
is_loaded = _proto_is_loaded(("Tolk_IsLoaded", _tolk))

_proto_unload = CFUNCTYPE(None)
unload = _proto_unload(("Tolk_Unload", _tolk))

_proto_try_sapi = CFUNCTYPE(None, c_bool)
_param_try_sapi = (1, "try_sapi"),
try_sapi = _proto_try_sapi(("Tolk_TrySAPI", _tolk), _param_try_sapi)

_proto_prefer_sapi = CFUNCTYPE(None, c_bool)
_param_prefer_sapi = (1, "prefer_sapi"),
prefer_sapi = _proto_prefer_sapi(("Tolk_PreferSAPI", _tolk), _param_prefer_sapi)

_proto_detect_screen_reader = CFUNCTYPE(c_wchar_p)
detect_screen_reader = _proto_detect_screen_reader(("Tolk_DetectScreenReader", _tolk))

_proto_has_speech = CFUNCTYPE(c_bool)
has_speech = _proto_has_speech(("Tolk_HasSpeech", _tolk))

_proto_has_braille = CFUNCTYPE(c_bool)
has_braille = _proto_has_braille(("Tolk_HasBraille", _tolk))

_proto_output = CFUNCTYPE(c_bool, c_wchar_p, c_bool)
_param_output = (1, "str"), (1, "interrupt", False)
output = _proto_output(("Tolk_Output", _tolk), _param_output)

_proto_speak = CFUNCTYPE(c_bool, c_wchar_p, c_bool)
_param_speak = (1, "str"), (1, "interrupt", False)
speak = _proto_speak(("Tolk_Speak", _tolk), _param_speak)

_proto_braille = CFUNCTYPE(c_bool, c_wchar_p)
_param_braille = (1, "str"),
braille = _proto_braille(("Tolk_Braille", _tolk), _param_braille)

_proto_is_speaking = CFUNCTYPE(c_bool)
is_speaking = _proto_is_speaking(("Tolk_IsSpeaking", _tolk))

_proto_silence = CFUNCTYPE(c_bool)
silence = _proto_silence(("Tolk_Silence", _tolk))
