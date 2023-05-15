#include "Shape.h"
#include <iostream>

void Shape::show() {
	std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
}
