#include "/PhysicsEngine3D/src/Vector3.h"
#include <stdexcept>
#include <cmath>
#include <limits>

MyVector3::MyVector3(float x, float y, float z) : x(x), y(y), z(z) {} // Constructor definition

MyVector3 MyVector3::operator+(const MyVector3& other) const { // This defines the + operator 
    return MyVector3(x + other.x, y + other.y, z + other.z); // Return a new MyVector3 object that represents the sum
}

MyVector3 MyVector3::operator-(const MyVector3& other) const { // This defines the - operator 
    return MyVector3(x - other.x, y - other.y, z - other.z); // Return a new MyVector3 object that represents the subtraction
}

MyVector3 MyVector3::operator*(float scalar) const { // This defines the * operator 
    return MyVector3(x * scalar, y * scalar, z * scalar);  // Return a new MyVector3 object that represents the scaled vector
}

MyVector3 MyVector3::operator/(float scalar) const {
    if (scalar == 0.0f) {
        throw std::runtime_error("Division by zero error"); // To avoid division by zero
    }
    return MyVector3(x / scalar, y / scalar, z / scalar);
}

float MyVector3::operator*(const MyVector3& other) const { // Dot product operator
    return x * other.x + y * other.y + z * other.z;
}

MyVector3 MyVector3::Cross(const MyVector3& other) const { // Cross product operator
    return MyVector3(
        y * other.z - z * other.y, // Cross product calculation
        z * other.x - x * other.z,
        x * other.y - y * other.x
    );
}

MyVector3 MyVector3::Normalize() const { // Normalization of the vector
    float magnitude = std::sqrt(x * x + y * y + z * z);
    if (magnitude < std::numeric_limits<float>::epsilon()) { // Check for near-zero magnitude
        return MyVector3(0, 0, 0);
    }
    return *this / magnitude;
}

float MyVector3::Length() const { // Length of the vector
    return std::sqrt(x * x + y * y + z * z);
}
