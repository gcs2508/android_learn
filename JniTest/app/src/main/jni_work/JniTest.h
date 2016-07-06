#include <jni.h>

#ifndef _Incoulde_com_jni_hello_jnitest_JniTestHello 
#define _Incoulde_com_jni_hello_jnitest_JniTestHello 

#ifdef __cplusplus
extern "C" {
#endif 

/* ********************************************
 * Class: com_jni_hello_jnitest_JniTestHello
 * Methon : getCLaguageString
 * Signature:()Ljava/lang/String;
 **********************************************/
JNIEXPORT jstring JNICALL Java_com_jni_hello_jnitest_JniTestHello_getCLaguageString 
	(JNIEnv * env ,jobject obj);
	



#ifdef __cplusplus
}
#endif 
#endif 





