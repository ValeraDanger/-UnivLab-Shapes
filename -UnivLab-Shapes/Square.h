#pragma once
#include "Shape.h"
#include "Point.h"

class Square : public Shape {
private:
	Point p;
	double width;

public:
	Square(Point _p, double _w) : p(_p), width(_w) {}

	void show();
	double area();
	double perimeter();
};

