--
-- Product:       Tolk
-- File:          Tolk.lua
-- Description:   LuaJIT FFI (or compatible) wrapper module.
-- Copyright:     (c) 2017, Avi Kelman <fiendish> <patcherton.fixesthings@gmail.com>
-- License:       LGPLv3
--
-- Usage:
--    tolk = require "Tolk"
--    tolk.Load()
--    tolk.TrySAPI(true)
--    tolk.Output("Tolk is now using "..tolk.DetectScreenReader()..".")

local ffi = require "ffi"

ffi.cdef [[
   int MultiByteToWideChar(unsigned int CodePage, unsigned int dwFlags, const char* lpMultiByteStr, int cbMultiByte, wchar_t* lpWideCharStr, int cchWideChar);
   int WideCharToMultiByte(unsigned int CodePage, unsigned int dwFlags, const wchar_t* lpWideCharStr, int cchWideChar, const char* lpMultiByteStr, int cbMultiByte, const char * lpDefaultChar, bool lpUsedDefaultChar);
   void __cdecl Tolk_TrySAPI(bool);
   void __cdecl Tolk_Load();
   bool __cdecl Tolk_IsLoaded();
   void __cdecl Tolk_Unload();
   void __cdecl Tolk_PreferSAPI(bool);
   const wchar_t * __cdecl Tolk_DetectScreenReader();
   bool __cdecl Tolk_HasSpeech();
   bool __cdecl Tolk_HasBraille();
   bool __cdecl Tolk_Output(const wchar_t *str, bool interrupt);
   bool __cdecl Tolk_Speak(const wchar_t *str, bool interrupt);
   bool __cdecl Tolk_Braille(const wchar_t *str);
   bool __cdecl Tolk_IsSpeaking();
   bool __cdecl Tolk_Silence();
]]

local Tolk = ffi.load('Tolk.dll')

local CP_UTF8 = 65001

-- convert wchar_t[] to lua str
function widestr_to_luastr(wstr)
    local size_needed = ffi.C.WideCharToMultiByte(CP_UTF8, 0, wstr, -1, nil, 0, nil, false)
    local str = ffi.new("char[?]", size_needed)
    ffi.C.WideCharToMultiByte(CP_UTF8, 0, wstr, -1, str, size_needed, nil, false)
    return ffi.string(str)
end

-- convert lua str to wchar_t[]
function luastr_to_widestr(str)
    local size_needed = ffi.C.MultiByteToWideChar(CP_UTF8, 0, str, -1, nil, 0)
    local wstr = ffi.new("wchar_t[?]", size_needed)
    ffi.C.MultiByteToWideChar(CP_UTF8, 0, str, #str, wstr, size_needed)
    return wstr
end

local function IsLoaded()
   return Tolk.Tolk_IsLoaded()
end

local function Load()
   if not IsLoaded() then
      Tolk.Tolk_Load()
   end
   return IsLoaded()
end

local function Unload()
   Tolk.Tolk_Unload()
   return not IsLoaded()
end

local function TrySAPI(yesno)
   Tolk.Tolk_TrySAPI(yesno)
end

local function PreferSAPI(yesno)
   Tolk.Tolk_PreferSAPI(yesno)
end

local function HasSpeech()
   return Tolk.Tolk_HasSpeech()
end

local function HasBraille()
   return Tolk.Tolk_HasBraille()
end

local function DetectScreenReader()
   wstr = Tolk.Tolk_DetectScreenReader()
   if nil == wstr then
      return nil
   end
   return widestr_to_luastr(wstr)
end

local function Output(text, interrupt)
   return Tolk.Tolk_Output(luastr_to_widestr(text), interrupt or false)
end

local function Speak(text, interrupt)
   return Tolk.Tolk_Speak(luastr_to_widestr(text), interrupt or false)
end

local function Braille(text)
   return Tolk.Tolk_Braille(luastr_to_widestr(text))
end

local function IsSpeaking()
   return Tolk.Tolk_IsSpeaking()
end

local function Silence()
   Tolk.Tolk_Silence()
end

return {
   IsLoaded = IsLoaded,
   Load = Load,
   Unload = Unload,
   TrySAPI = TrySAPI,
   PreferSAPI = PreferSAPI,
   HasSpeech = HasSpeech,
   HasBraille = HasBraille,
   DetectScreenReader = DetectScreenReader,
   Output = Output,
   Speak = Speak,
   Braille = Braille,
   IsSpeaking = IsSpeaking,
   Silence = Silence
}
