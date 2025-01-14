#pragma once

// The MyVector3 class represents a 3D vector and provides basic vector operations.

class MyVector3 {
public:
    float x;
    float y;
    float z;

    MyVector3(float x = 0, float y = 0, float z = 0); // constructor with default values

    MyVector3 operator+(const MyVector3& other) const; // overloaded + operator to add two vectors
    MyVector3 operator-(const MyVector3& other) const; // overloaded - operator to subtract two vectors
    MyVector3 operator*(float scalar) const; // overloaded * operator to scale a vector by a scalar
    MyVector3 operator/(float scalar) const; // overloaded / operator to divide a vector by a scalar

    float operator*(const MyVector3& other) const; // dot product

    MyVector3 Cross(const MyVector3& other) const; // cross product

    MyVector3 Normalize() const; // Normalization of the vector

    float Length() const;
};
