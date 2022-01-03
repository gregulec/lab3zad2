#pragma once
#include "Rectangle.h"
#include <iostream>
using namespace std;

class Square:public Rectangle{
public:
	Square(double width);
	~Square();
	double area();
	double circuit();
};

