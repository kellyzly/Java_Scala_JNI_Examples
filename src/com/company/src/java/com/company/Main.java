package com.company;

public class Main {

    static {
         System.loadLibrary("Hello");
    }

    public static native void DisplayHello();
    //public  native void DisplayHello();
    public static void main(String[] args) {
	   new Main().DisplayHello();
    }
}
