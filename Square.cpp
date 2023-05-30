#include "Square.h"
#include <iostream>

void Square::show() {
	this->p.show();
	std::cout << this->width << "x" << this->width << std::endl;
}

double Square::area() {
	return this->width * this->width;
}

double Square::perimeter() {
	return 4.0 * this->width;
}
