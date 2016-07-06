#include <jni.h>
#include <android/log.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef LOG_TAG
	#define LOG_TAG "ANDROID_LAB"
	#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
#endif

#ifdef __cplusplus
extern "C" {
#endif 

/* ********************************************
 * Class: com_jni_hello_jnitest_JniTestHello
 * Methon : getCLaguageString
 * Signature:()Ljava/lang/String;
 **********************************************/
JNIEXPORT jstring JNICALL Java_com_jni_hello_jnitest_JniTestHello_getCLaguageString 
	(JNIEnv * env ,jobject obj) {

	LOGE("log string from native!");
	return (*env)->NewStringUTF(env,"Hello From Native");
	}

#ifdef __cplusplus
}
#endif 




