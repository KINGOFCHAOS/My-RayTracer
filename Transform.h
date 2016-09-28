#pragma once
#include "lib\glm\glm\glm.hpp"
#define FLOATOFFSET 0.001
#define RECURSIVE 0
#define NORMALINTERPOLATION 1
using namespace glm;

mat4 Rotate(float degrees, vec3 axis);

mat4 Scale(vec3 v);

mat4 Translate(vec3 dv);

mat4 lookAt(const vec3 &eye, const vec3 &center, const vec3 &up);




float vecLength(vec3 v);

double dvecLength(vec3 v);

struct MyTransform
{
	mat4 trans;
	void AffineTrans(vec3& v); //仿射变换
	void NormalTrans(vec3& v); //对法线变换
	MyTransform(mat4 trans);
	MyTransform();
	MyTransform MyInverse();

};
