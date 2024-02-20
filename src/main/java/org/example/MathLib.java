package org.example;

public class MathLib {
    static{
        System.loadLibrary("MathLib");
    }

    public static native int plus(int a,int b);
    public static native int minus(int a,int b);
    public static native double div(int a,int b);
    public static native int multi(int a,int b);
}
