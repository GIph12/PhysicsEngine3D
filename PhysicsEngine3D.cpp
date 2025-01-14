#include <iostream>
#include "Vector3.h"


int main() {

	Vector3 a(1.0f, 2.0f, 3.0f);
	Vector3 b(1.0f, 4.0f, 5.0f);
	

	Vector3 result = a.Normalize();

	std::cout << "Result (x) : " << result.x << std::endl;




	return 0;
}