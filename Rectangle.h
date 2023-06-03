#pragma once

#include"Shape.h"

class Rectangle : Shape
{
private:
	double _length;
	double _width;

public:
	Rectangle(double length, double width);
	~Rectangle();

	double calculateArea() override;
	double calculatePerimeter() override;

};

