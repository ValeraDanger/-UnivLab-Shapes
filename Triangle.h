#pragma once
#include "Shape.h"
#include "Point.h"

class Triangle : public Shape {
private:
	Point p1, p2, p3;
public:
	Triangle(Point _p1, Point _p2, Point _p3) : p1(_p1), p2(_p2), p3(_p3) {}

	void show();
	double area();
	double perimeter();
};

