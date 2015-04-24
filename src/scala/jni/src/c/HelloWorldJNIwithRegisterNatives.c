//#include "HelloWorldJNIwithRegisterNatives.h"
#include <jni.h>
//JNIEXPORT jstring JNICALL hello(JNIEnv * env, jobject obj) {
//  return (*env)->NewStringUTF(env, "Hello World!");
//}
//
//JNIEXPORT jint JNICALL add(JNIEnv * env, jobject obj, jint value1, jint value2) {
//  return (value1 + value2);
//}

//jboolean JNICALL buildsupportsopenssl (JNIEnv *env, jobject obj) {
jboolean JNICALL buildSupportsOpenssl (JNIEnv *env, jclass clazz) {
//#ifdef SPARK_OPENSSL_LIBRARY
  return JNI_TRUE;
//#else
//  return JNI_FALSE;
//#endif
}

jlong JNICALL testByteArray(JNIEnv * env, jobject obj, jbyteArray value1) {
  return 1;
}

