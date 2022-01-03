#include "Circle.h"
#include "Ellipse.h"

Circle::Circle(double major) :Ellipse(major,major)
{
}


Circle::~Circle()
{
}

double Circle::area(){
	return 3.14*major*major;
}

double Circle::circuit(){
	return 2 * 3.14 * major;
}