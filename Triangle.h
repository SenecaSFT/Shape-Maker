#pragma once

#include "Shape.h"

class Triangle : Shape
{
private:
	double _sideA;
	double _sideB;
	double _sideC;

public:
	Triangle(double sideA, double sideB, double sideC);
	~Triangle();

	double calculateArea() override;
	double calculatePerimeter() override;
};

