#include "Rectangle.h"
#include <iostream>

void Rectangle::show() {
	this->p.show();
	std::cout << this->height << "x" << this->width << std::endl;
}
