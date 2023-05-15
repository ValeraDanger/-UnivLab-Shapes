#include "Shape.h"
#include "Point.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include <iostream>

void ShowShapes(Shape* shapes[], size_t arr_szie) {
	for (size_t i = 0; i < arr_szie; i++) {
		std::cout << "Shape " << i << ":" << std::endl;
		shapes[i]->show();
		std::cout << std::endl;
	}
}

int main() {
	Point p1(1, 3);
	Triangle t(p1, Point(2, 5), Point(-6, 0));
	Rectangle r(Point(), 3, 5.6);
	Square s(Point(-3.44, -10), 5);
	Circle c(p1, 15);
	
	Shape* shapes[5] = { &p1, &t, &r, &s, &c };

	ShowShapes(shapes, sizeof(shapes) / sizeof(Shape*));
}