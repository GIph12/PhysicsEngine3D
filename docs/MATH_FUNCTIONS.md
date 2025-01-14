# MyVector3 Class Documentation

## Overview
The `MyVector3` class is designed to represent and perform operations on three-dimensional vectors. It includes various operators and methods for vector arithmetic, scaling, normalization, and calculating vector properties such as length and dot products.

---

# MyVector3 Class Documentation

## Table of Contents
1. [Overview](#overview)
2. [Constructor](#constructor)
3. [Operators](#operators)
   - [Addition Operator (+)](#addition-operator-)
   - [Subtraction Operator (-)](#subtraction-operator-)
   - [Scalar Multiplication Operator (*)](#scalar-multiplication-operator-)
   - [Scalar Division Operator (/)](#scalar-division-operator-)
   - [Dot Product Operator (*)](#dot-product-operator-)
4. [Methods](#methods)
   - [Cross Product](#cross-product)
   - [Normalize](#normalize)
   - [Length](#length)
5. [Example Usage](#example-usage)
6. [Notes](#notes)
7. [References](#references)

---

## Overview
The `MyVector3` class is designed to represent and perform operations on three-dimensional vectors. It includes various operators and methods for vector arithmetic, scaling, normalization, and calculating vector properties such as length and dot products.

---

## Constructor

### MyVector3(float x, float y, float z)
```cpp
MyVector3(float x, float y, float z);
```
- **Description**: Constructs a `MyVector3` object with the specified x, y, and z components.
- **Parameters**:
  - `x` (float): The x-component of the vector.
  - `y` (float): The y-component of the vector.
  - `z` (float): The z-component of the vector.

---

## Operators

### Addition Operator (+)
```cpp
MyVector3 MyVector3::operator+(const MyVector3& other) const;
```
- **Description**: Adds the current vector to another vector.
- **Parameters**:
  - `other` (const MyVector3&): The vector to add.
- **Returns**: A new `MyVector3` representing the sum of the two vectors.

### Subtraction Operator (-)
```cpp
MyVector3 MyVector3::operator-(const MyVector3& other) const;
```
- **Description**: Subtracts another vector from the current vector.
- **Parameters**:
  - `other` (const MyVector3&): The vector to subtract.
- **Returns**: A new `MyVector3` representing the difference between the two vectors.

### Scalar Multiplication Operator (*)
```cpp
MyVector3 MyVector3::operator*(float scalar) const;
```
- **Description**: Scales the vector by a scalar.
- **Parameters**:
  - `scalar` (float): The scalar to multiply by.
- **Returns**: A new `MyVector3` representing the scaled vector.

### Scalar Division Operator (/)
```cpp
MyVector3 MyVector3::operator/(float scalar) const;
```
- **Description**: Scales the vector by the reciprocal of a scalar.
- **Parameters**:
  - `scalar` (float): The scalar to divide by.
- **Throws**: `std::runtime_error` if `scalar` is zero.
- **Returns**: A new `MyVector3` representing the scaled vector.

### Dot Product Operator (*)
```cpp
float MyVector3::operator*(const MyVector3& other) const;
```
- **Description**: Computes the dot product of the current vector and another vector.
- **Parameters**:
  - `other` (const MyVector3&): The vector to compute the dot product with.
- **Returns**: A float representing the dot product of the two vectors.

---

## Methods

### Cross Product
```cpp
MyVector3 MyVector3::Cross(const MyVector3& other) const;
```
- **Description**: Computes the cross product of the current vector and another vector.
- **Parameters**:
  - `other` (const MyVector3&): The vector to compute the cross product with.
- **Returns**: A new `MyVector3` representing the cross product.

### Normalize
```cpp
MyVector3 MyVector3::Normalize() const;
```
- **Description**: Normalizes the vector to unit length.
- **Returns**: A new `MyVector3` representing the normalized vector.
- **Notes**: If the vector has near-zero magnitude, the method returns a zero vector.

### Length
```cpp
float MyVector3::Length() const;
```
- **Description**: Computes the magnitude (length) of the vector.
- **Returns**: A float representing the vector's magnitude.

---

## Example Usage
```cpp
#include <iostream>
#include "MyVector3.h"

int main() {
    MyVector3 v1(1.0f, 2.0f, 3.0f);
    MyVector3 v2(4.0f, 5.0f, 6.0f);

    MyVector3 sum = v1 + v2; // Addition
    MyVector3 difference = v1 - v2; // Subtraction
    MyVector3 scaled = v1 * 2.0f; // Scaling
    MyVector3 normalized = v1.Normalize(); // Normalization
    float dotProduct = v1 * v2; // Dot product
    MyVector3 crossProduct = v1.Cross(v2); // Cross product

    std::cout << "Length of v1: " << v1.Length() << std::endl;

    return 0;
}
```

---

## Notes
- The class assumes that floating-point precision is sufficient for operations.
- Division by zero is explicitly checked and handled to avoid runtime errors.
- Normalization gracefully handles vectors with near-zero magnitude by returning a zero vector.

---


