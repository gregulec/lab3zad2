#include "Ellipse.h"
#include <cmath>

Ellipse::Ellipse(double major, double minor) :major(major), minor(minor)
{
}


Ellipse::~Ellipse()
{
}

double Ellipse::area(){
	return 3.14*major*minor;
}

double Ellipse::circuit(){
	return 3.14*(3 / 2 * (major + minor) - (sqrt(major*minor)));
}