#include "Rectangle.h"

Rectangle::Rectangle(double length, double width)
{
	this->_length = length;
	this->_width = width;
}

Rectangle::~Rectangle() {}

double Rectangle::calculateArea()
{
	return this->_length * this->_width;
}

double Rectangle::calculatePerimeter()
{
	return (this->_length + this->_width) * 2;
}