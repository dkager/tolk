/**
 *  Product:        Tolk
 *  File:           Tolk.java
 *  Description:    Java Native Interface (JNI) wrapper class.
 *  Copyright:      (c) 2014, Davy Kager <mail@davykager.nl>
 *  License:        LGPLv3
 */

package com.davykager.tolk;

public final class Tolk {
  public static native void load();
  public static native boolean isLoaded();
  public static native void unload();
  public static native void trySAPI(boolean trySAPI);
  public static native void preferSAPI(boolean preferSAPI);
  public static native String detectScreenReader();
  public static native boolean hasSpeech();
  public static native boolean hasBraille();
  public static native boolean output(String str, boolean interrupt);
  public static native boolean speak(String str, boolean interrupt);
  public static native boolean braille(String str);
  public static native boolean isSpeaking();
  public static native boolean silence();

  // Prevent construction
  private Tolk() {}

  // Overloading
  public static boolean output(String str) { return output(str, false); }
  public static boolean speak(String str) { return speak(str, false); }

  static {
    System.loadLibrary("Tolk");
  }
}
