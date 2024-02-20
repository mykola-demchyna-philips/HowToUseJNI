#include "org_example_MathLib.h"
#include "MathLib.cpp"

JNIEXPORT jint JNICALL Java_org_example_MathLib_plus
(JNIEnv *env, jclass jc, jint a, jint b)
{
	return (jint) plus(a, b);
}

JNIEXPORT jint JNICALL Java_org_example_MathLib_minus
(JNIEnv *env, jclass jc, jint a, jint b)
{
	return (jint) minus(a, b);
}

JNIEXPORT jdouble JNICALL Java_org_example_MathLib_div
(JNIEnv *env, jclass jc , jint a, jint b) {

	return (jdouble) div(a, b);

}

JNIEXPORT jint JNICALL Java_org_example_MathLib_multi
(JNIEnv *env, jclass jc, jint a, jint b)
{
	return (jint) multi(a, b);
}
