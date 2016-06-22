// helloWindow.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include <jni.h>
#include "helloWindow.h"

JNIEXPORT jint JNICALL Java_helloWindow_add
(JNIEnv *, jobject obj, jint value1, jint value2){
	//printf("add scala ");
	return (value1 + value2);

}

/*
* Class:     helloWindow
* Method:    hello
* Signature: ()Ljava/lang/String;
*/
JNIEXPORT jstring JNICALL Java_helloWindow_hello
(JNIEnv * env, jobject){
	printf("hello scala ");
	return (*env).NewStringUTF("hello");

}



