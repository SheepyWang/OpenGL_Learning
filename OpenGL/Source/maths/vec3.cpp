#include "vec3.h"

vec3::vec3() :x(0), y(0),z(0) {
}

vec3::vec3(float _x, float _y,float _z) : x(_x), y(_y),z(_z) {
}


vec3 vec3::add(const vec3 & v3) {
	x += v3.x;
	y += v3.y;
	z += v3.z;
	return *this;
}

vec3 vec3::subtract(const vec3 & v3) {
	x -= v3.x;
	y -= v3.x;
	z -= v3.z;
	return *this;
}

vec3 vec3::multiply(const vec3 & v3) {
	x *= v3.x;
	y *= v3.y;
	z *= v3.z;
	return *this;
}

vec3 vec3::divide(const vec3 & v3) {
	x /= v3.x;
	y /= v3.y;
	z /= v3.z;
	return *this;
}

vec3 operator+(vec3 left, const vec3 & right) {
	return left.add(right);
}

vec3 operator-(vec3 left, const vec3 & right) {
	return left.subtract(right);
}

vec3 operator*(vec3 left, const vec3 & right) {
	return left.multiply(right);
}

vec3 operator/(vec3 left, const vec3 & right) {
	return left.divide(right);
}

vec3 vec3::operator+=(const vec3 & v3) {
	return this->add(v3);
}

vec3 vec3::operator-=(const vec3 & v3) {
	return this->subtract(v3);
}

vec3 vec3::operator*=(const vec3 & v3) {
	return this->multiply(v3);
}

vec3 vec3::operator/=(const vec3 & v3) {
	return this->divide(v3);
}

bool vec3::operator==(const vec3 & v3) {
	if (x != v3.x || y != v3.y || z != v3.z)
		return false;
	return true;
}

bool vec3::operator!=(const vec3 & v3) {
	if (x != v3.x || y != v3.y || z != v3.z)
		return true;
	return false;
}

std::ostream & operator << (std::ostream & out, const vec3 & v3) {
	out << "vec3 = (" << v3.x << ", " << v3.y << ", " << v3.z << ")\n";
	return out;
}
