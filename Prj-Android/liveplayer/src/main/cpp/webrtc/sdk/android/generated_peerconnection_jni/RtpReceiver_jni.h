// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/RtpReceiver

#ifndef org_webrtc_RtpReceiver_JNI
#define org_webrtc_RtpReceiver_JNI

#include <jni.h>

#include "webrtc/sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_RtpReceiver[];
const char kClassPath_org_webrtc_RtpReceiver[] = "org/webrtc/RtpReceiver";

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_RtpReceiver_00024Observer[];
const char kClassPath_org_webrtc_RtpReceiver_00024Observer[] = "org/webrtc/RtpReceiver$Observer";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_RtpReceiver_clazz(nullptr);
#ifndef org_webrtc_RtpReceiver_clazz_defined
#define org_webrtc_RtpReceiver_clazz_defined
inline jclass org_webrtc_RtpReceiver_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_RtpReceiver,
      &g_org_webrtc_RtpReceiver_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_RtpReceiver_00024Observer_clazz(nullptr);
#ifndef org_webrtc_RtpReceiver_00024Observer_clazz_defined
#define org_webrtc_RtpReceiver_00024Observer_clazz_defined
inline jclass org_webrtc_RtpReceiver_00024Observer_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_RtpReceiver_00024Observer,
      &g_org_webrtc_RtpReceiver_00024Observer_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static jlong JNI_RtpReceiver_GetTrack(JNIEnv* env, jlong rtpReceiver);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_RtpReceiver_nativeGetTrack(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpReceiver) {
  return JNI_RtpReceiver_GetTrack(env, rtpReceiver);
}

static base::android::ScopedJavaLocalRef<jobject> JNI_RtpReceiver_GetParameters(JNIEnv* env, jlong
    rtpReceiver);

JNI_GENERATOR_EXPORT jobject Java_org_webrtc_RtpReceiver_nativeGetParameters(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpReceiver) {
  return JNI_RtpReceiver_GetParameters(env, rtpReceiver).Release();
}

static base::android::ScopedJavaLocalRef<jstring> JNI_RtpReceiver_GetId(JNIEnv* env, jlong
    rtpReceiver);

JNI_GENERATOR_EXPORT jstring Java_org_webrtc_RtpReceiver_nativeGetId(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpReceiver) {
  return JNI_RtpReceiver_GetId(env, rtpReceiver).Release();
}

static jlong JNI_RtpReceiver_SetObserver(JNIEnv* env, jlong rtpReceiver,
    const base::android::JavaParamRef<jobject>& observer);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_RtpReceiver_nativeSetObserver(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpReceiver,
    jobject observer) {
  return JNI_RtpReceiver_SetObserver(env, rtpReceiver, base::android::JavaParamRef<jobject>(env,
      observer));
}

static void JNI_RtpReceiver_UnsetObserver(JNIEnv* env, jlong rtpReceiver,
    jlong nativeObserver);

JNI_GENERATOR_EXPORT void Java_org_webrtc_RtpReceiver_nativeUnsetObserver(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpReceiver,
    jlong nativeObserver) {
  return JNI_RtpReceiver_UnsetObserver(env, rtpReceiver, nativeObserver);
}

static void JNI_RtpReceiver_SetFrameDecryptor(JNIEnv* env, jlong rtpReceiver,
    jlong nativeFrameDecryptor);

JNI_GENERATOR_EXPORT void Java_org_webrtc_RtpReceiver_nativeSetFrameDecryptor(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpReceiver,
    jlong nativeFrameDecryptor) {
  return JNI_RtpReceiver_SetFrameDecryptor(env, rtpReceiver, nativeFrameDecryptor);
}


static std::atomic<jmethodID> g_org_webrtc_RtpReceiver_00024Observer_onFirstPacketReceived(nullptr);
static void Java_Observer_onFirstPacketReceived(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& media_type) {
  jclass clazz = org_webrtc_RtpReceiver_00024Observer_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_RtpReceiver_00024Observer_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onFirstPacketReceived",
          "(Lorg/webrtc/MediaStreamTrack$MediaType;)V",
          &g_org_webrtc_RtpReceiver_00024Observer_onFirstPacketReceived);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, media_type.obj());
}

static std::atomic<jmethodID> g_org_webrtc_RtpReceiver_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_RtpReceiver_Constructor(JNIEnv* env, jlong
    nativeRtpReceiver) {
  jclass clazz = org_webrtc_RtpReceiver_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_RtpReceiver_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(J)V",
          &g_org_webrtc_RtpReceiver_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, nativeRtpReceiver);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_RtpReceiver_dispose(nullptr);
static void Java_RtpReceiver_dispose(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_RtpReceiver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_RtpReceiver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "dispose",
          "()V",
          &g_org_webrtc_RtpReceiver_dispose);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_RtpReceiver_JNI