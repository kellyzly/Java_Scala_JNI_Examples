#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

//JNIEXPORT jint JNICALL add(JNIEnv *, jobject, jint, jint);
//
//JNIEXPORT jstring JNICALL hello(JNIEnv *, jobject);

JNIEXPORT  jlong JNICALL testByteBuffer(JNIEnv * env, jobject obj, jobject value1);



#ifdef __cplusplus
}
#endif
