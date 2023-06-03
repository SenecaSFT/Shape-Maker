#pragma once

#include "Shape.h"

class Circle : Shape
{
private:
	double _radius;

public:
	Circle(double radius);
	~Circle();

	double calculateArea() override;
	double calculatePerimeter() override;

};

