/**
 *  Product:        Tolk
 *  File:           Tolk.cs
 *  Description:    .NET wrapper class (in C#).
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

using System;
using System.Runtime.InteropServices;

namespace DavyKager {

  public sealed class Tolk {
    [DllImport("Tolk.dll")] private static extern void Tolk_Load();
    [DllImport("Tolk.dll")] private static extern bool Tolk_IsLoaded();
    [DllImport("Tolk.dll")] private static extern void Tolk_Unload();
    [DllImport("Tolk.dll")] private static extern void Tolk_TrySAPI(bool trySAPI);
    [DllImport("Tolk.dll")] private static extern void Tolk_PreferSAPI(bool preferSAPI);
    [DllImport("Tolk.dll")] private static extern IntPtr Tolk_DetectScreenReader();
    [DllImport("Tolk.dll")] private static extern bool Tolk_HasSpeech();
    [DllImport("Tolk.dll")] private static extern bool Tolk_HasBraille();
    [DllImport("Tolk.dll")] private static extern bool Tolk_Output(IntPtr ptr, bool interrupt);
    [DllImport("Tolk.dll")] private static extern bool Tolk_Speak(IntPtr ptr, bool interrupt);
    [DllImport("Tolk.dll")] private static extern bool Tolk_Braille(IntPtr ptr);
    [DllImport("Tolk.dll")] private static extern bool Tolk_IsSpeaking();
    [DllImport("Tolk.dll")] private static extern bool Tolk_Silence();

    // Prevent construction
    private Tolk() {}

    public static void Load() { Tolk_Load(); }
    public static bool IsLoaded() { return Tolk_IsLoaded(); }
    public static void Unload() { Tolk_Unload(); }
    public static void TrySAPI(bool trySAPI) { Tolk_TrySAPI(trySAPI); }
    public static void PreferSAPI(bool preferSAPI) { Tolk_PreferSAPI(preferSAPI); }
    public static bool HasSpeech() { return Tolk_HasSpeech(); }
    public static bool HasBraille() { return Tolk_HasBraille(); }
    public static bool IsSpeaking() { return Tolk_IsSpeaking(); }
    public static bool Silence() { return Tolk_Silence(); }

    public static string DetectScreenReader() {
      return Marshal.PtrToStringUni(Tolk_DetectScreenReader());
    }

    public static bool Output(string str, bool interrupt = false) {
      bool result = false;
      IntPtr ptr = IntPtr.Zero;
      try {
        ptr = Marshal.StringToHGlobalUni(str);
        result = Tolk_Output(ptr, interrupt);
      }
      finally {
        Marshal.FreeHGlobal(ptr);
      }
      return result;
    }

    public static bool Speak(string str, bool interrupt = false) {
      bool result = false;
      IntPtr ptr = IntPtr.Zero;
      try {
        ptr = Marshal.StringToHGlobalUni(str);
        result = Tolk_Speak(ptr, interrupt);
      }
      finally {
        Marshal.FreeHGlobal(ptr);
      }
      return result;
    }

    public static bool Braille(string str) {
      bool result = false;
      IntPtr ptr = IntPtr.Zero;
      try {
        ptr = Marshal.StringToHGlobalUni(str);
        result = Tolk_Braille(ptr);
      }
      finally {
        Marshal.FreeHGlobal(ptr);
      }
      return result;
    }
  }
}
