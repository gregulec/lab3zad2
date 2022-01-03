#include "Triangle.h"
#include <cmath>
#include <iostream>

Triangle::Triangle(double lenght, double height) :lenght(lenght), height(height)
{
}


Triangle::~Triangle()
{
}

double Triangle::area(){
	return 1 / 2 * lenght*height;
}

double Triangle::circuit(){
	return lenght + height + sqrt((lenght*lenght) + (height*height));
}