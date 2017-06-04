import System
import System.Runtime.InteropServices

public final class Tolk { 
	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	private static __extern func Tolk_Load()

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static __extern func Tolk_IsLoaded() -> Bool

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	private static __extern func Tolk_Unload()

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	private static __extern func Tolk_TrySAPI(_ trySAPI: Bool)

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	private static __extern func Tolk_PreferSAPI(_ preferSAPI: Bool)

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	private static __extern func Tolk_DetectScreenReader() -> IntPtr!

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static __extern func Tolk_HasSpeech() -> Bool

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static __extern func Tolk_HasBraille() -> Bool

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static __extern func Tolk_Output(_ str: String!, _ interrupt: Bool) -> Bool

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static __extern func Tolk_Speak(_ str: String!, _ interrupt: Bool) -> Bool

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static __extern func Tolk_Braille(_ str: String!) -> Bool

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static __extern func Tolk_IsSpeaking() -> Bool

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static __extern func Tolk_Silence() -> Bool

	// Prevent construction
	private init() {
	}

	public static func Load() {
		Tolk_Load()
	}

	public static func IsLoaded() -> Bool {
		return Tolk_IsLoaded()
	}

	public static func Unload() {
		Tolk_Unload()
	}

	public static func TrySAPI(_ trySAPI: Bool) {
		Tolk_TrySAPI(trySAPI)
	}

	public static func PreferSAPI(_ preferSAPI: Bool) {
		Tolk_PreferSAPI(preferSAPI)
	}

	// Prevent the marshaller from freeing the unmanaged string
	public static func DetectScreenReader() -> String! {
		return Marshal.PtrToStringUni(Tolk_DetectScreenReader())
	}

	public static func HasSpeech() -> Bool {
		return Tolk_HasSpeech()
	}

	public static func HasBraille() -> Bool {
		return Tolk_HasBraille()
	}

	public static func Output(_ str: String!, _ interrupt: Bool = false) -> Bool {
		return Tolk_Output(str, interrupt)
	}

	public static func Speak(_ str: String!, _ interrupt: Bool = false) -> Bool {
		return Tolk_Speak(str, interrupt)
	}

	public static func Braille(_ str: String!) -> Bool {
		return Tolk_Braille(str)
	}

	public static func IsSpeaking() -> Bool {
		return Tolk_IsSpeaking()
	}

	public static func Silence() -> Bool {
		return Tolk_Silence()
	}
}