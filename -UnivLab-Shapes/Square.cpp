#include "Square.h"
#include <iostream>

void Square::show() {
	this->p.show();
	std::cout << this->width << "x" << this->width << std::endl;
}
