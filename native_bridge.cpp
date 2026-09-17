#include <jni.h>
#include <string>
#include <EGL/egl.h>
#include <GLES3/gl3.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_zalith_launcher_NativeBridge_getGlEsVersion(
    JNIEnv* env,
    jclass clazz) {
    
    std::string info = "Zalith Launcher Native Bridge Ready!";
    return env->NewStringUTF(info.c_str());
}
