#pragma once

// The Vector3 class represents a 3D vector and provides basic vector operations.

class Vector3 {
	public:
		float x;
		float y;
		float z;

		Vector3(float x = 0, float y = 0, float z = 0); // constructor with defuat values

		Vector3 operator+(const Vector3& other) const; //  overloaded + operator add two vectors
		Vector3 operator-(const Vector3& other) const; //  overloaded - operator sub two vectors
		Vector3 operator*(float scalar) const; //  overloaded * operator to scale a vector by a scalar
		Vector3 operator/(float scalar) const; //  overloaded / operator to divide a vector by a scalar


		float operator*(const Vector3& other) const; // dot product

		Vector3 Cross(const Vector3& other) const; // cross product

		Vector3 Normalize() const; // Normaliztion of the vector

		float Length() const;





};
