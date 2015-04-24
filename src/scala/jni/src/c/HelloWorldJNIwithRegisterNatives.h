#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

//JNIEXPORT jint JNICALL add(JNIEnv *, jobject, jint, jint);
//
//JNIEXPORT jstring JNICALL hello(JNIEnv *, jobject);

JNIEXPORT jboolean JNICALL buildSupportsOpenssl(JNIEnv *env, jobject);

JNIEXPORT jlong JNICALL testByteArray(JNIEnv * env, jobject obj, jbyteArray value1);


#ifdef __cplusplus
}
#endif
