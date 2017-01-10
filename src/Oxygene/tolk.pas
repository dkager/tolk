namespace DavyKager;

interface

uses
  System,
  System.Runtime.InteropServices;

type
  Tolk = public sealed class
  private
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    class method Tolk_Load; external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    [MarshalAs(UnmanagedType.I1)]
    class method Tolk_IsLoaded: Boolean; external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    class method Tolk_Unload; external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    class method Tolk_TrySAPI(trySAPI: Boolean); external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    class method Tolk_PreferSAPI(preferSAPI: Boolean); external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    class method Tolk_DetectScreenReader: IntPtr; external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    [MarshalAs(UnmanagedType.I1)]
    class method Tolk_HasSpeech: Boolean; external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    [MarshalAs(UnmanagedType.I1)]
    class method Tolk_HasBraille: Boolean; external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    [MarshalAs(UnmanagedType.I1)]
    class method Tolk_Output(str: String; interrupt: Boolean): Boolean; external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    [MarshalAs(UnmanagedType.I1)]
    class method Tolk_Speak(str: String; interrupt: Boolean): Boolean; external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    [MarshalAs(UnmanagedType.I1)]
    class method Tolk_Braille(str: String): Boolean; external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    [MarshalAs(UnmanagedType.I1)]
    class method Tolk_IsSpeaking: Boolean; external;
    [DllImport('Tolk.dll', CharSet.Unicode, CallingConvention.Cdecl)]
    [MarshalAs(UnmanagedType.I1)]
    class method Tolk_Silence: Boolean; external;
    // Prevent construction
    constructor;
  public
    class method Load;
    class method IsLoaded: Boolean;
    class method Unload;
    class method TrySAPI(trySAPI: Boolean);
    class method PreferSAPI(preferSAPI: Boolean);
    // Prevent the marshaller from freeing the unmanaged string
    class method DetectScreenReader: String;
    class method HasSpeech: Boolean;
    class method HasBraille: Boolean;
    class method Output(str: String; interrupt: Boolean := false): Boolean;
    class method Speak(str: String; interrupt: Boolean := false): Boolean;
    class method Braille(str: String): Boolean;
    class method IsSpeaking: Boolean;
    class method Silence: Boolean;
  end;

implementation

constructor Tolk;
begin
end;

class method Tolk.Load;
begin
  Tolk_Load();
end;

class method Tolk.IsLoaded: Boolean;
begin
  exit Tolk_IsLoaded();
end;

class method Tolk.Unload;
begin
  Tolk_Unload();
end;

class method Tolk.TrySAPI(trySAPI: Boolean);
begin
  Tolk_TrySAPI(trySAPI);
end;

class method Tolk.PreferSAPI(preferSAPI: Boolean);
begin
  Tolk_PreferSAPI(preferSAPI);
end;

class method Tolk.DetectScreenReader: String;
begin
  exit Marshal.PtrToStringUni(Tolk_DetectScreenReader());
end;

class method Tolk.HasSpeech: Boolean;
begin
  exit Tolk_HasSpeech();
end;

class method Tolk.HasBraille: Boolean;
begin
  exit Tolk_HasBraille();
end;

class method Tolk.Output(str: String; interrupt: Boolean := false): Boolean;
begin
  exit Tolk_Output(str, interrupt);
end;

class method Tolk.Speak(str: String; interrupt: Boolean := false): Boolean;
begin
  exit Tolk_Speak(str, interrupt);
end;

class method Tolk.Braille(str: String): Boolean;
begin
  exit Tolk_Braille(str);
end;

class method Tolk.IsSpeaking: Boolean;
begin
  exit Tolk_IsSpeaking();
end;

class method Tolk.Silence: Boolean;
begin
  exit Tolk_Silence();
end;

end.