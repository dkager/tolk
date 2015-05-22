/**
 *  Product:        Tolk
 *  File:           console_app.java
 *  Description:    Java console application example.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 *  Depends:        Tolk.dll
 */

// See README.md for general information.
// See Tolk.h for full documentation of all functions.
// Note that for Java the functions are provided as static methods of class Tolk,
// that the prefix Tolk_ has been removed from the names,
// and that the names are lowerCamelCase.

import com.davykager.tolk.Tolk;

public class ConsoleApp {
  public static void main(String[] args) {
    System.out.println("Tolk -- Java Console App Example");

    System.out.println("Initializing Tolk...");
    // Tolk will also initialize COM
    // if it has not been initialized on the calling thread
    Tolk.load();

    System.out.println("Querying for the active screen reader driver...");
    final String name = Tolk.detectScreenReader();
    if (name != null) {
      System.out.println("The active screen reader driver is: " + name);
    }
    else {
      System.out.println("None of the supported screen readers is running");
    }

    if (Tolk.hasSpeech()) {
      System.out.println("This screen reader driver supports speech");
    }
    if (Tolk.hasBraille()) {
      System.out.println("This screen reader driver supports braille");
    }

    System.out.println("Let's output some text...");
    if (!Tolk.output("Hello, World!")) {
      System.out.println("Failed to output text");
    }

    System.out.println("Finalizing Tolk...");
    // Tolk will also try to uninitialize COM
    Tolk.unload();

    System.out.println("Done!");
  }
}
