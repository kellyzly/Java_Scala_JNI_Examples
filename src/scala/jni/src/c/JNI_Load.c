#include "HelloWorldJNIwithRegisterNatives.h"
#include "HelloWorldJNIwithRegisterNatives1.h"


/*
 * Table of methods associated with the DrmRawContent class.
 */
static JNINativeMethod HelloWorldMethods[] = {
    /* name, signature, funcPtr */
//    {"hello", "()Ljava/lang/String;", (void*)hello},
//    //{"add", "(II)I", (void*)add},
//    {"add", "(II)I", (void*)add},
    {"buildSupportsOpenssl","()Z",(void*)buildSupportsOpenssl},
    {"testByteArray","([B)J",(void*)testByteArray},
};

  static JNINativeMethod HelloWorld1Methods[] = {
      /* name, signature, funcPtr */
  //    {"hello", "()Ljava/lang/String;", (void*)hello},
  //    //{"add", "(II)I", (void*)add},
  //    {"add", "(II)I", (void*)add},
      {"testByteBuffer","(Ljava/nio/ByteBuffer;)J",(void*)testByteBuffer},
  };

/*
 * Register several native methods for one class.
 */
static int registerNativeMethods(JNIEnv* env, const char* className,
    JNINativeMethod* gMethods, int numMethods)
{
    jclass clazz;

    clazz = (*env)->FindClass(env, className);
    if (clazz == NULL)
        return JNI_FALSE;

    if ((*env)->RegisterNatives(env, clazz, gMethods, numMethods) < 0)
        return JNI_FALSE;

    return JNI_TRUE;
}


/*
 * Register native methods for all classes we know about.
 */
static int registerNatives(JNIEnv* env,const char* className, JNINativeMethod* gMethods, int numMethods)
{
  if (!registerNativeMethods(env, className,
        gMethods, numMethods))
    return JNI_FALSE;

  return JNI_TRUE;
}


JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved)
{
  JNIEnv* env = NULL;
  jint result = -1;

  if ((*vm)->GetEnv(vm, (void **)&env, JNI_VERSION_1_2) != JNI_OK)
    return JNI_ERR;

  if (!registerNatives(env,"scala/jni/Main$",HelloWorldMethods, sizeof(HelloWorldMethods) /
  sizeof(HelloWorldMethods[0])))
    return JNI_ERR;

  if (!registerNatives(env,"scala/jni/Main1$",HelloWorld1Methods, sizeof(HelloWorld1Methods) /
  sizeof(HelloWorld1Methods[0])))
    return JNI_ERR;
  /* success -- return valid version number */
  result = JNI_VERSION_1_4;
  return result;
}

