#include "../../jni.h"
#include "com_company_Main.h"
#include <stdio.h>
JNIEXPORT void JNICALL Java_com_company_Main_DisplayHello
(JNIEnv *env, jclass obj)
{
    printf("From jni_mainImpl.cpp :");
    printf("Hello world ! \n");
    return;
}