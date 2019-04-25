//
// Created by master wang on 2019/4/25.
//


//导入刚才生成的.h文件
#include "com_bwck_cloudAIO_ndkTest_NativeInterface.h"

//返回一个a+b的值Java_com_bwck_cloudAIO_ndkTest_NativeInterface_Count
JNIEXPORT jint JNICALL Java_com_bwck_cloudAIO_ndkTest_NativeInterface_Count (JNIEnv *, jobject, jint a, jint b) {
    return a + b;
}