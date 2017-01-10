package DavyKager;

import System.*;
import System.Runtime.InteropServices.*;

public final class Tolk
{
	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	private static extern void Tolk_Load();

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static extern boolean Tolk_IsLoaded();

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	private static extern void Tolk_Unload();

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	private static extern void Tolk_TrySAPI(boolean trySAPI);

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	private static extern void Tolk_PreferSAPI(boolean preferSAPI);

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	private static extern IntPtr Tolk_DetectScreenReader();

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static extern boolean Tolk_HasSpeech();

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static extern boolean Tolk_HasBraille();

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static extern boolean Tolk_Output(String str, boolean interrupt);

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static extern boolean Tolk_Speak(String str, boolean interrupt);

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static extern boolean Tolk_Braille(String str);

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static extern boolean Tolk_IsSpeaking();

	@DllImport("Tolk.dll", CharSet.Unicode, CallingConvention.Cdecl)
	@MarshalAs(UnmanagedType.I1)
	private static extern boolean Tolk_Silence();

	// Prevent construction
	private Tolk()
	{
	}

	public static void Load()
	{
		Tolk_Load();
	}

	public static boolean IsLoaded()
	{
		return Tolk_IsLoaded();
	}

	public static void Unload()
	{
		Tolk_Unload();
	}

	public static void TrySAPI(boolean trySAPI)
	{
		Tolk_TrySAPI(trySAPI);
	}

	public static void PreferSAPI(boolean preferSAPI)
	{
		Tolk_PreferSAPI(preferSAPI);
	}

	// Prevent the marshaller from freeing the unmanaged string
	public static String DetectScreenReader()
	{
		return Marshal.PtrToStringUni(Tolk_DetectScreenReader());
	}

	public static boolean HasSpeech()
	{
		return Tolk_HasSpeech();
	}

	public static boolean HasBraille()
	{
		return Tolk_HasBraille();
	}

	public static boolean Output(String str, boolean interrupt)
	{
		return Tolk_Output(str, interrupt);
	}

	public static boolean Speak(String str, boolean interrupt)
	{
		return Tolk_Speak(str, interrupt);
	}

	public static boolean Braille(String str)
	{
		return Tolk_Braille(str);
	}

	public static boolean IsSpeaking()
	{
		return Tolk_IsSpeaking();
	}

	public static boolean Silence()
	{
		return Tolk_Silence();
	}
}