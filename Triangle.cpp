#include "Triangle.h"
#include <cmath>

void Triangle::show() {
	this->p1.show();
	this->p2.show();
	this->p3.show();
}

double Triangle::area() {
  return abs((p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y))) / 2;
}

double Triangle::perimeter() {
  return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)) +
         sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2)) +
         sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
}
