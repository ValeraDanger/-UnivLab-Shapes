#include "Circle.h"
#include <iostream>

void Circle::show() {
	this->p.show();
	std::cout << this->radius << std::endl;
}
