#include "Vector3.h"
#include <stdexcept>
#include <cmath>
#include <limits>


Vector3::Vector3(float x,float y , float z) : x(x) , y(y), z(z) {} //Contructor definition

Vector3 Vector3::operator+(const Vector3& other) const { //this  define the + opertaor 
	return Vector3(x + other.x, y + other.y, z + other.z); // return a new vector3 object that represent the sum
}

Vector3 Vector3::operator-(const Vector3& other) const { //this  define the - opertaor 
	return Vector3(x - other.x, y - other.y, z - other.z); // return a new vector3 object that represent the sub
}

Vector3 Vector3::operator*(float scalar) const { //this  define the * opertaor 
	return Vector3(x * scalar, y * scalar, z * scalar);  // return a new vector3 object that represent the scalar vector
}

Vector3 Vector3::operator/(float scalar) const { 
	if (scalar == 0.0f) {
		throw std::runtime_error("Division by zero error"); // to avoid zero divsion
	}
	return Vector3(x / scalar, y / scalar, z / scalar); 

}


float Vector3::operator*(const Vector3& other) const {       // dot product operator
	return x * other.x + y * other.y +  z * other.z;
}

Vector3 Vector3::Cross(const Vector3& other) const {
	return Vector3(
		y * other.z - z * other.y,							// cross prodcut operator
		z * other.x - x * other.z,
		x * other.y - y * other.x
	);
}

Vector3 Vector3::Normalize() const {
	float magnitude = std::sqrt(x * x + y * y + z * z);
	if (magnitude <std::numeric_limits<float>::epsilon() ) {      //Normaliztion of the vector
		return Vector3(0, 0, 0);
	}
	return *this / magnitude;
}

float Vector3::Length() const {
	return std::sqrt(x * x + y * y + z * z);
}