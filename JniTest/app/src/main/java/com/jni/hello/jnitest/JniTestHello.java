package com.jni.hello.jnitest;

import android.provider.Settings;

/**
 * Created by jack on 16-7-6.
 */
public class JniTestHello {

    static {
        System.loadLibrary("jni_hello");
    }

    public native String getCLaguageString();

}
