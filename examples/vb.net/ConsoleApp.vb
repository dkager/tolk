'''
 '  Product:        Tolk
 '  File:           ConsoleApp.vb
 '  Description:    VB.NET console application example.
 '  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 '  License:        LGPLv3
 '  Depends:        Tolk.dll, TolkDotNet.dll
 ''

'' See README.md for general information.
'' See Tolk.h for full documentation of all functions.
'' Note that for .NET the functions are provided as static functions of class Tolk,
'' and that the prefix Tolk_ has been removed from the names.

Imports DavyKager

Module ConsoleApp
  Public Sub Main()
    Console.WriteLine("Tolk -- VB.NET Console App Example")

    Console.WriteLine("Initializing Tolk...")
    Tolk.Load()

    Console.WriteLine("Querying for the active screen reader driver...")
    Dim name As String = Tolk.DetectScreenReader()
    If name IsNot Nothing Then
      Console.WriteLine("The active screen reader driver is: {0}", name)
    Else
      Console.WriteLine("None of the supported screen readers is running")
    End If

    If Tolk.HasSpeech() Then
      Console.WriteLine("This screen reader driver supports speech")
    End If
    If Tolk.HasBraille() Then
      Console.WriteLine("This screen reader driver supports braille")
    End If

    Console.WriteLine("Let's output some text...")
    If Not Tolk.Output("Hello, World!") Then
      Console.WriteLine("Failed to output text")
    End If

    Console.WriteLine("Finalizing Tolk...")
    Tolk.Unload()

    Console.WriteLine("Done!")
  End Sub
End Module
