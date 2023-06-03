#include "Circle.h"

#define _USE_MATH_DEFINES
#include <math.h>

Circle::Circle(double radius)
{
	this->_radius = radius;
}

Circle::~Circle() {}

double Circle::calculateArea()
{
	return M_PI * this->_radius * this->_radius;
}

double Circle::calculatePerimeter()
{
	return 2 * M_PI * this->_radius;
}