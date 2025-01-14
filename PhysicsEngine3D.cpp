
#include "raylib.h"
#include <iostream>
#include "/PhysicsEngine3D/src/Vector3.h"


int main() {

	MyVector3 a(1.0f, 2.0f, 3.0f);

	MyVector3 b(1.0f, 4.0f, 5.0f);

	MyVector3 result = a.Normalize();


	std::cout << "Result (x) : " << result.x << std::endl;

	return 0;
}