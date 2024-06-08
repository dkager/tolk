# Tolk: Screen Reader Abstraction Library

NOTE: this project is not currently being developed.

## Introduction

Tolk is an application extension (DLL) that allows Windows applications to output text through screen reader software (assistive technology for the blind and visually impaired). It is an abstraction layer on top of the vendor-specific APIs that auto-detects the active screen reader, allowing for clean and simple client code. Speech and braille output are supported in 32-bit and 64-bit environments. See `Supported screen readers` for more details. In addition to screen readers, Microsoft Speech API (SAPI) is also supported. The name Tolk is a Dutch word meaning interpreter.

There are APIs for the following languages:

* C/C++
* Java
* Microsoft .NET (C# and VB)
* Python
* AutoIt
* PureBasic

## License

Tolk is distributed under the GNU Lesser General Public License version 3 (LGPLv3).
Client libraries and headers are distributed under their own license.

## Design

The key components of Tolk are the screen reader drivers. They wrap a specific screen reader API into an abstract interface which is then used by Tolk's auto-detection mechanism. SAPI, albeit not a screen reader, also has its own driver. To keep things simple and secure, these screen reader drivers are not exposed to client code.

Functions that output text or that silence speech are asynchronous. That is, they return immediately once the appropriate commands have been queued for processing by the active screen reader. All other functions are synchronous. That is, they return only when their work is done.

Finally, a few words on multi-threaded applications. Tolk is not thread-safe. Also, some of the screen reader drivers use COM. You have two options for initializing COM:

1. Call `Tolk_Load` on every thread that uses Tolk. Match every call by a call to `Tolk_Unload`. Tolk will initialize COM if required.
2. Initialize and uninitialize COM yourself and call `Tolk_Load` only once in your application. You still need a matching call to `Tolk_Unload`. This is also what you should do in languages that automatically deal with COM, e.g. .NET.

## Usage

Tolk has functions for (un)initialization, querying and using the active screen reader, and for working with Microsoft SAPI. To use Tolk, import the appropriate version of `Tolk.dll` into your application. In C/C++ this is usually done by including `Tolk.h` and linking with the appropriate import library `Tolk.lib`. You could also use the Windows API functions `LoadLibrary` and `FreeLibrary`. Other languages are also supported, see `Wrappers`. If you're working in an unsupported language, use its specific facilities to call into the DLL.

### Required files

The `lib` directory contains the required screen reader API DLLs. Tolk expects these DLLs to be found either in the current working directory or somewhere in the `PATH`. If a DLL for a screen reader is not found, that screen reader will be unavailable. Note that some screen readers use COM and therefore don't need API DLLs.

### Loading

Before using Tolk you need to initialize it with `Tolk_Load`, and uninitialize it with `Tolk_Unload` when you are done. You can then use all the other functions.

### Outputting text

The most important way to send text to the active screen reader is using `Tolk_Output`. The first parameter to this function is the Unicode string of text, the second parameter indicates whether or not previously queued speech should be interrupted (or canceled, flushed, etc). In languages that support this feature, the second parameter is optional and defaults to `false`. The advantage of using `Tolk_Output` is that it tries both speech and braille. If you need something more specialized, use `Tolk_Speak` for speech, `Tolk_Braille` for braille and `Tolk_Silence` to interrupt previously queued speech. All these functions return `true` on success and `false` otherwise, but because of the auto-detection mechanism it is recommended (and safe) to discard this return value and simply insert the required calls wherever you need screen reader output. This keeps your code clean and straight-forward.

### Querying status

There are functions to find out more about the active screen reader driver. You can get the name of the currently active screen reader through `Tolk_DetectScreenReader`. This returns the name as Unicode string or `NULL` if none of the supported screen readers is active. As the name implies, this function tries auto-detection if required. Internally, Tolk's other functions use this, so it is not necessary to call this yourself unless you actually need the common name.
If a screen reader is active, you can use `Tolk_HasSpeech` and `Tolk_HasBraille` to find out whether the driver supports speech or braille, respectively.
For synchronization, `Tolk_IsSpeaking` returns whether or not the active screen reader is speaking text at the time of the call, assuming the driver supports this query. Note that not many drivers implement this functionality because of limitations in screen reader APIs. See the `Status` column of the `Supported screen readers` table for details. There is no such function for braille, since braille is instantaneous.

### Using SAPI

Tolk can output text through Microsoft SAPI. This is mostly meant as a fallback mechanism. To do this, Tolk has a screen reader driver that uses SAPI 5.3. Therefore, the functionality is limited to what screen reader drivers provide. Applications that need more control should use SAPI directly. Another consequence is that there is no way to explicitly tell Tolk to use SAPI, the driver is part of the auto-detection chain.

By default, support for SAPI is disabled. To change this, use `Tolk_TrySAPI`, passing `true` to enable SAPI or `false` to disable it. The required driver will automatically be (un)loaded.
SAPI is initially put at the end of the auto-detection chain. This is good for using it as a fallback option when none of the supported screen readers is running. It is also possible to have Tolk prefer SAPI over the other screen reader drivers. This is good for basic SAPI output where screen readers are only tried if SAPI fails or if SAPI 5.3 or later is unavailable. To change the preference for SAPI, use `Tolk_PreferSAPI`. This also takes a boolean parameter, `true` to prefer SAPI or `false` to prefer the traditional screen readers.
The most efficient way of enabling SAPI support is to set it up before calling `Tolk_Load`. However, you can also call these functions after Tolk has already been loaded. This will trigger the screen reader detection process and is therefore slightly less efficient.

### Wrappers

Wrappers around `Tolk.dll` have been added for some languages to make things easier:

* `Tolk.jar` for Java
* `TolkDotNet.dll` for C#/VB.NET
* `Tolk.pyo` for Python
* `Tolk.au3` for AutoIt
* `Tolk.pb` for PureBasic

The wrappers cover all functions and use the language's native types where possible. The function names have also been adapted to meet the specific conventions for these languages.

## Examples

Take a look at the `examples` directory to get started. This directory contains console applications in the supported languages that demonstrate the basic usage. Note that Microsoft SAPI will stop speaking when your application closes, which means that it will not work with these console applications because they return immediately after queueing text. Add a short delay (sleep) to work around this if you want to try SAPI.

## Supported screen readers

The following table lists the supported screen readers in the order in which they are auto-detected.

    Screen Reader   Speech   Braille   Status   x86   x64
    JAWS            Yes      Yes       No       Yes   Yes
    Window-Eyes     Yes      Yes       No       Yes   Yes
    NVDA            Yes      Yes       No       Yes   Yes
    SuperNova       Yes      No        No       Yes   No
    System Access   Yes      Yes       No       Yes   Yes
    ZoomText        Yes      No        Yes      Yes   Yes
    SAPI            Yes      No        Yes      Yes   Yes

### Notes

* SuperNova is the only screen reader that does not have a 64-bit compatible API.
* SuperNova has support for braille, but the API does not let you use it.
* SuperNova can speak even if the user turned the voice off, but in that state interrupts will not work.
* Some screen readers (notably Window-Eyes and ZoomText) support many more functions, but there are no plans to implement any of them.
* The driver for Microsoft SAPI explicitly disables XML handling because there is no way to be sure SAPI is being used and other drivers don't support this.
* Window-Eyes is obsolete, but support has not yet been removed.

## Compiling

If you want to compile Tolk yourself, here's what you need to build the whole thing:

* Microsoft Visual C++
* Windows Software Development Kit (SDK)
* Java Development Kit (JDK)
* Microsoft .NET Framework
* Python
* Pandoc

The root directory and `examples` directories contain various batch files as a starting point. They assume the required tools are in your `PATH` and that the JDK include directory is in `INCLUDE`. For the examples you will also need to copy over any dependency files.

## Contributors

* Davy Kager
* Leonard de Ruijter
* Axel Vugts
* QuentinC, who has developed [Universal Speech](https://github.com/QuentinC-Github/UniversalSpeech), another great screen reader library
