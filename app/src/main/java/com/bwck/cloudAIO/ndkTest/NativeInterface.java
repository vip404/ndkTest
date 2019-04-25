package com.bwck.cloudAIO.ndkTest;

public class NativeInterface {

    static {
        System.loadLibrary("jssc");
    }
    public  native int Count(int a, int b);
}



