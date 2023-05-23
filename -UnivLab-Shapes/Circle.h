#pragma once
#include "Shape.h"
#include "Point.h"

class Circle : public Shape {
private:
	Point p;
	double radius;

public:
	Circle(Point _p, double _r) : p(_p), radius(_r) {}

	void show();
	double area();
	double perimeter();
};

