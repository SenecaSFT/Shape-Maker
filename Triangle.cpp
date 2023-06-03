#include "Triangle.h"

#include <math.h>

Triangle::Triangle(double sideA, double sideB, double sideC)
{
	this->_sideA = sideA;
	this->_sideB = sideB;
	this->_sideC = sideC;
}

Triangle::~Triangle() {}

double Triangle::calculateArea()
{
	double s = (this->_sideA + this->_sideB + this->_sideC) * 2;
	return sqrt(s * (s-this->_sideA) * (s-this->_sideB) * (s-this->_sideC));
}

double Triangle::calculatePerimeter()
{
	return this->_sideA + this->_sideB + this->_sideC;
}