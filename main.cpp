#include "Shape.h"
#include "Point.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include <iostream>
#include "Image.h"

#include <locale>

//image, положить, напечать

void ShowShapes(Shape* shapes[], size_t arr_szie) {
	for (size_t i = 0; i < arr_szie; i++) {
		std::cout << "Shape " << i << ":" << std::endl;
		shapes[i]->show();
		std::cout << std::endl;
	}
}

int main() {
  setlocale(LC_ALL, "Ru");
	Point p1(1, 3);
	Triangle t(p1, Point(2, 5), Point(-6, 0));
	Rectangle r(Point(), 3, 5.6);
	Square s(Point(-3.44, -10), 5);
	Circle c(p1, 15);
	
	Image img;

	img.append(&p1);
  img.append(&s);
  img.append(&r);

	std::cout << "Площадь треугольника: "<< t.area() << std::endl;
  std::cout << "Периметр круга: " << c.perimeter() << std::endl;
  img.show();
}