#include "Rectangle.h"

Rectangle::Rectangle(double width, double height):width(width),height(height){
}


Rectangle::~Rectangle(){
}

double Rectangle:: area(){
	return width*height;
}

double Rectangle:: circuit(){
	return (2 * width) + (2 * height);
}