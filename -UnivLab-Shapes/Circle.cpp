#include "Circle.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

void Circle::show() {
	this->p.show();
	std::cout << this->radius << std::endl;
}

double Circle::area() { return M_PI * this->radius * this->radius; }

double Circle::perimeter() { return 2.0 * M_PI * this->radius; }
