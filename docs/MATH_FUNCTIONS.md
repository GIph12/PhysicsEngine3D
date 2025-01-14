# Math Functions Documentation

This document provides detailed information about the math functions included in the physics engine. These functions are used for 3D vector operations, including addition, subtraction, scaling, dot product etc.

## Table of Contents
- [MyVector3 Class](#myvector3-class)
- [Vector Operations](#vector-operations)
  - [Addition (`+`)](#addition-)
  - [Subtraction (`-`)](#subtraction-)
  - [Scalar Multiplication (`*`)](#scalar-multiplication-)
  - [Scalar Division (`/`)](#scalar-division-)
  - [Dot Product (`*`)](#dot-product-)
  - [Cross Product](#cross-product)
  - [Normalization](#normalization)
  - [Length](#length)

---

## MyVector3 Class
The `MyVector3` class represents a 3D vector with `x`, `y`, and `z` components.

### Constructor
```cpp
MyVector3(float x, float y, float z);
Parameters:

x: The x-component of the vector.

y: The y-component of the vector.

z: The z-component of the vector.

Description: Initializes a new MyVector3 object with the specified components.

Vector Operations
Addition (+)
cpp
Copy
MyVector3 operator+(const MyVector3& other) const;
Parameters:

other: The vector to add.

Return Value: A new MyVector3 object representing the sum of the two vectors.

Example:

cpp
Copy
MyVector3 v1(1, 2, 3);
MyVector3 v2(4, 5, 6);
MyVector3 result = v1 + v2; // result = {5, 7, 9}
Subtraction (-)
cpp
Copy
MyVector3 operator-(const MyVector3& other) const;
Parameters:

other: The vector to subtract.

Return Value: A new MyVector3 object representing the difference between the two vectors.

Example:

cpp
Copy
MyVector3 v1(1, 2, 3);
MyVector3 v2(4, 5, 6);
MyVector3 result = v1 - v2; // result = {-3, -3, -3}
Scalar Multiplication (*)
cpp
Copy
MyVector3 operator*(float scalar) const;
Parameters:

scalar: The scalar value to multiply the vector by.

Return Value: A new MyVector3 object representing the scaled vector.

Example:

cpp
Copy
MyVector3 v(1, 2, 3);
MyVector3 result = v * 2; // result = {2, 4, 6}
Scalar Division (/)
cpp
Copy
MyVector3 operator/(float scalar) const;
Parameters:

scalar: The scalar value to divide the vector by.

Return Value: A new MyVector3 object representing the scaled vector.

Throws: std::runtime_error if scalar is zero.

Example:

cpp
Copy
MyVector3 v(2, 4, 6);
MyVector3 result = v / 2; // result = {1, 2, 3}
Dot Product (*)
cpp
Copy
float operator*(const MyVector3& other) const;
Parameters:

other: The vector to compute the dot product with.

Return Value: A float representing the dot product of the two vectors.

Example:

cpp
Copy
MyVector3 v1(1, 2, 3);
MyVector3 v2(4, 5, 6);
float dot = v1 * v2; // dot = 32
Cross Product
cpp
Copy
MyVector3 Cross(const MyVector3& other) const;
Parameters:

other: The vector to compute the cross product with.

Return Value: A new MyVector3 object representing the cross product of the two vectors.

Example:

cpp
Copy
MyVector3 v1(1, 0, 0);
MyVector3 v2(0, 1, 0);
MyVector3 result = v1.Cross(v2); // result = {0, 0, 1}
Normalization
cpp
Copy
MyVector3 Normalize() const;
Return Value: A new MyVector3 object representing the normalized vector.

Description: Normalizes the vector to have a length of 1. If the vector's length is near zero, returns a zero vector.

Example:

cpp
Copy
MyVector3 v(3, 4, 0);
MyVector3 result = v.Normalize(); // result = {0.6, 0.8, 0}
Length
cpp
Copy
float Length() const;
Return Value: A float representing the length (magnitude) of the vector.

Example:

cpp
Copy
MyVector3 v(3, 4, 0);
float length = v.Length(); // length = 5
Conclusion
For more information about the physics engine, check out the README.
