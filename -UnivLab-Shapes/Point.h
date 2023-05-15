#pragma once
#include "Shape.h"

class Point : public Shape {
private:
	double x, y;
public:
	Point(double _x, double _y) : x(_x), y(_y) {}
	Point() : Point(0, 0) {}

	void show();
};
