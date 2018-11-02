#pragma once

#ifndef _VEC3_H_
#define _VEC3_H_

#include <iostream>

struct vec3 {
	float x;
	float y;
	float z;

	vec3();
	vec3(float _x, float _y, float _z);

	vec3 add(const vec3 & v3);
	vec3 subtract(const vec3 & v3);
	vec3 multiply(const vec3 & v3);
	vec3 divide(const vec3 & v3);

	friend vec3 operator+(vec3 left, const vec3 & right);
	friend vec3 operator-(vec3 left, const vec3 & right);
	friend vec3 operator*(vec3 left, const vec3 & right);
	friend vec3 operator/(vec3 left, const vec3 & right);

	vec3 operator+=(const vec3 & v3);
	vec3 operator-=(const vec3 & v3);
	vec3 operator*=(const vec3 & v3);
	vec3 operator/=(const vec3 & v3);
	bool operator==(const vec3 & v3);
	bool operator!=(const vec3 & v3);

	friend std::ostream & operator << (std::ostream & out, const vec3 & v3);
};

#endif 