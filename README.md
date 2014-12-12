Tolk
====

Screen Reader Abstraction Library


Introduction
------------

Tolk is an application extension (DLL) that allows Windows applications to output text through screen reader software (assistive technology for the blind and visually impaired).  It is an abstraction layer on top of the vendor-specific APIs that auto-detects the active screen reader, allowing for clean and simple client code.  Speech and braille output are supported in 32-bit and 64-bit environments.  The `Screen Readers` table below provides more details.  In addition to screen readers, Microsoft Speech API (SAPI) is also supported.  The name Tolk is a Dutch word meaning interpreter.

A complete archive with source code and pre-compiled binaries is available from [the project page](http://davykager.com/projects/tolk/).  This distribution also includes compiled wrappers for a number of languages:

*   Java
*   Microsoft .NET (C# and VB)
*   Python
*   PureBasic
*   AutoIt
*   REAPER (ReaScript, etc)


License
-------

Tolk is distributed under the GNU Lesser General Public License version 3 (LGPLv3).  Please see License.txt.
Client libraries and headers are distributed under their own license.


Usage
-----

To use Tolk, import the appropriate version of `Tolk.dll` into your application.  In C/C++ this is usually done by including `Tolk.h` and linking with the appropriate import library `Tolk.lib` (load-time binding).  You could also use the Windows API `LoadLibrary` and `FreeLibrary` functions (run-time binding).  If you're working in another language, use its specific facilities to call into the DLL.  A number of wrappers for popular languages have been provided to make things easier: `Tolk.jar` for Java, `TolkDotNet.dll` for C#/VB.NET, `Tolk.pyc` for Python, `Tolk.pb` for PureBasic, `ScreenREAPER.cpp` for a REAPER extension.  Take a look at the `examples` directory to get started with these languages.

The `lib` directory contains the required screen reader API DLLs.  Tolk expects these DLLs to be found either in the current working directory or somewhere in the PATH.  If a DLL for a certain screen reader is not found, that screen reader will be unavailable.  Note that some screen readers use COM and therefore don't need API DLLs.

Tolk provides functions for (un)initialization, querying and using the active screen reader, and working with Microsoft SAPI.  The key components of Tolk are the screen reader drivers.  They wrap a specific screen reader API into an abstracted interface which is then used by Tolk's auto-detection mechanism.  SAPI, albeit not a screen reader, also has its own driver.  To keep things simple and secure, these screen reader drivers are not exposed to client code.

Before using Tolk you need to initialize it with `Tolk_Load` and then uninitialize it with `Tolk_Unload` when you're done.  Because some of the screen reader drivers use COM, you have two options:

1.  Call `Tolk_Load` on every thread that uses Tolk.  Match every call by one to `Tolk_Unload`.  Tolk will initialize COM if required.
2.  Initialize and uninitialize COM yourself and call `Tolk_Load` only once in your application.  You still need a matching call to `Tolk_Unload`.  This is also what you should do in languages that automatically deal with COM, e.g. .NET.

All the functions discussed below can be called without initializing Tolk, but they will return immediately and have no effect.  The functions that output text and silence speech are asynchronous.  That is, they return immediately once the appropriate commands have been queued for processing by the active screen reader.  All other functions are synchronous.

The most important way to send text to the active screen reader once Tolk has been initialized is using `Tolk_Output`.  The first parameter to this function is the Unicode string of text, the second parameter indicates whether or not previously queued speech should be interrupted (or canceled, flushed, etc).  In languages that support this feature, the second parameter is optional and defaults to `false`.  The advantage of using `Tolk_Output` is that it tries both speech and braille.  If you need something more specialized, use `Tolk_Speak` for speech, `Tolk_Braille` for braille and `Tolk_Silence` to interrupt previously queued speech.  All these functions return `true` on success and `false` otherwise, but because of the auto-detection mechanism it is recommended (and safe) to disregard this return value and simply insert the required calls wherever you need screen reader output.  This keeps your code clean and straight-forward.

Tolk provides a number of functions to find out more about the active screen reader driver.  You can get the name of the currently active screen reader through `Tolk_DetectScreenReader`, which returns the common name as Unicode string or `NULL` if none of the supported screen readers is active.  As the name implies, this function tries auto-detection if required.  Internally, Tolk's other functions use this, so it is **not** necessary to call this yourself unless you actually need the common name.  If a screen reader is active, you can use `Tolk_HasSpeech` and `Tolk_HasBraille` to find out if the driver supports speech and braille respectively.  For synchronization, `Tolk_IsSpeaking` returns whether or not the active screen reader is speaking text at the time of the call, assuming the driver supports this status query.  Note that not many drivers implement this functionality because of limitations in screen reader APIs.  See the `Status` column of the `Screen Readers` table below for details.

Finally, Tolk provides functionality to output text through Microsoft SAPI.  To do this, Tolk has a screen reader driver that uses SAPI 5.3 through COM.  Therefore, the functionality is limited to what screen reader drivers provide.  Applications that need more control should use SAPI directly.  Another consequence is that there is no way to explicitly tell Tolk to use SAPI, the driver is part of the auto-detection chain.

By default, support for SAPI is disabled.  To change this, use `Tolk_TrySAPI`, passing `true` to enable SAPI or `false` to disable it.  The required driver will automatically be (un)loaded depending on the argument you passed.  SAPI is initially put at the end of the auto-detection chain.  This is good for using it as a fallback option when none of the supported screen readers is running.  It is also possible to have Tolk prefer SAPI over the other screen reader drivers.  This is good for basic SAPI output where screen readers are only tried if SAPI fails or if SAPI 5.3 or later is unavailable.  To change the preference for SAPI, use `Tolk_PreferSAPI`.  This also takes a boolean parameter, `true` to prefer SAPI or `false` to prefer the traditional screen readers.  You don't need to call `Tolk_Load` before using these functions, and you don't need to manually reload Tolk after making changes to SAPI.  The most efficient way of enabling SAPI support is to set it up before calling `Tolk_Load`.  However, you can also call these functions after Tolk has already been loaded.  This will trigger the screen reader detection process and is therefore slightly less efficient.

All of the above is fully documented in `Tolk.h`, which also includes function prototypes for C/C++.  The included wrappers provide entry points into these functions that use the language native types where possible.  The function names have also been adapted to meet the specific conventions for these languages.  See the examples for a demonstration.  Note that Microsoft SAPI will stop speaking when your application closes, which means that it will not work with the console application examples because they return immediately after queueing text.


Screen Readers
--------------

    Screen Reader   Speech   Braille   Status   x86   x64
    JAWS            Yes      Yes       No       Yes   Yes
    Window-Eyes     Yes      Yes       No       Yes   Yes
    NVDA            Yes      Yes       No       Yes   Yes
    SuperNova       Yes      No        No       Yes   No
    System Access   Yes      Yes       No       Yes   Yes
    ZoomText        Yes      No        Yes      Yes   Yes
    SAPI            Yes      No        Yes      Yes   Yes


Notes
-----

*   The table above lists the supported screen readers in the order they are auto-detected.
*   Dolphin SuperNova is the only screen reader that does not have a 64-bit compatible API.
*   Dolphin SuperNova has support for braille, but the API does not let people get to it.
*   Dolphin SuperNova can speak even if the user turned the voice off, but in that state interrupts will not work.
*   ZoomText by Ai Squared requires a registry patch before it can be used, run either `ZTFix32.reg` (32-bit) or `ZTFix64.reg` (64-bit) from the `scripts` directory.
*   Tolk does not support the COBRA screen reader by BAUM Retec AG, because its lack of support for modern technologies makes it a counter-productive solution.
*   Some screen readers (notably Window-Eyes and ZoomText by Ai Squared) support many more functions, but there are no plans to implement any of these.
*   The driver for Microsoft SAPI explicitly disables XML handling because there is no way to be sure SAPI is being used and other drivers don't support it.


Compiling
---------

Should you want to compile Tolk yourself, here's what you need to build the whole thing:

*   Microsoft Visual C++
*   Windows Software Development Kit (SDK)
*   Java Development Kit (JDK)
*   Microsoft .NET Framework
*   Python 3.x
*   Pandoc
*   GnuWin32 zip or other compatible program

The root directory and `examples` directories provide various batch-scripts as a starting point.  They assume the required tools are in your PATH.  For the examples you will also need to copy over any dependency files.  Of course, you can also create one or more projects to wrap Tolk in your favorite IDE.  Any IDE that supports the MSVC++ toolchain should work.

To build everything except the examples invoke either `build_all_on_amd64.bat` or `build_all_on_x86.bat` in the root directory.  Output will go to the `bin` directory.


Contributors
------------

*   Davy Kager
*   Leonard de Ruijter
*   Axel Vugts
*   QuentinC, who has developed [Universal Speech](https://github.com/QuentinC-Github/UniversalSpeech), another great screen reader library