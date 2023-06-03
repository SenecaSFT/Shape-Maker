#include <iostream>
#include <vector>

#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using std::cout;
using std::cin;
using std::vector;

Circle makeCircle(double radius);
Rectangle makeRectangle(double length, double width);
Triangle makeTriangle(double sideA, double sideB, double sideC);

int main()
{
    cout << "Hello World!\n";

    vector<Circle> circles;
    vector<Rectangle> rectangles;
    vector<Triangle> triangles;

    int counter = 1;

    for (size_t i = 0; i < 6; i++)
    {
        circles.push_back(makeCircle(i + 1));
        rectangles.push_back(makeRectangle(i + 1, (i+1) * 2));
        triangles.push_back(makeTriangle(i + 1, i + 3, i + 5));
    }

    for (Circle circle : circles) 
        cout << "\nCircle " << counter << " Area: " << circle.calculateArea() << " Perimeter: " << circle.calculatePerimeter();

    counter = 1;

    for (Rectangle rectangle : rectangles) 
        cout << "\nRectangle " << counter << " Area: " << rectangle.calculateArea() << " Perimeter: " << rectangle.calculatePerimeter();

    counter = 1;

    for (Triangle triangle : triangles)
        cout << "\nTriangle " << counter << " Area: " << triangle.calculateArea() << " Perimeter: " << triangle.calculatePerimeter();
}

Circle makeCircle(double radius)
{
   return Circle(radius);
}

Rectangle makeRectangle(double length, double width)
{
    return Rectangle(length, width);
}

Triangle makeTriangle(double sideA, double sideB, double sideC)
{
    return Triangle(sideA, sideB, sideC);
}