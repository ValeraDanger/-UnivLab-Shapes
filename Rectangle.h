#pragma once
#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape {
private:
	Point p;
	double height;
	double width;

public:
	Rectangle(Point _p, double _h, double _w) : p(_p), height(_h), width(_w) {}

	void show();
	double area();
	double perimeter();
};

