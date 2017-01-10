import System.*;
import DavyKager.*;

public class ConsoleApp
{
	public static void Main()
	{
		Console.WriteLine("Tolk -- C# Console App Example");
		Console.WriteLine("Initializing Tolk...");
		Tolk.Load();
		Console.WriteLine("Querying for the active screen reader driver...");
		String name = Tolk.DetectScreenReader();
		if (name != null)
		{
			Console.WriteLine("The active screen reader driver is: {0}", name);
		}
		else
		{
			Console.WriteLine("None of the supported screen readers is running");
		}
		if (Tolk.HasSpeech())
		{
			Console.WriteLine("This screen reader driver supports speech");
		}
		if (Tolk.HasBraille())
		{
			Console.WriteLine("This screen reader driver supports braille");
		}
		Console.WriteLine("Let\'s output some text...");
		if (!Tolk.Output("Hello, World!"))
		{
			Console.WriteLine("Failed to output text");
		}
		Console.WriteLine("Finalizing Tolk...");
		Tolk.Unload();
		Console.WriteLine("Done!");
	}
}