#include "Rectangle.h"
#include <iostream>

void Rectangle::show() {
	this->p.show();
	std::cout << this->height << "x" << this->width << std::endl;
}

double Rectangle::area() { return this->width * this->height; }

double Rectangle::perimeter() { return 2.0 * (this->width + this->height); }
