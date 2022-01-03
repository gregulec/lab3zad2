#include "Square.h"
#include "Rectangle.h"


Square::Square(double width) :Rectangle(width,width)
{
}


Square::~Square()
{
}

double Square::area(){
	return width*width;
}

double Square::circuit(){
	return 4 * width;
}