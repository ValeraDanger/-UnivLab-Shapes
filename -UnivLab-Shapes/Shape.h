#pragma once
class Shape {
public:
	virtual void show() = 0;
	//площадь периметр
	virtual double area() {
		return 0.0;
	}

	virtual double perimeter() {
		return 0.0;
	}
};

