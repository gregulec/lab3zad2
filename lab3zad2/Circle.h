#pragma once
#include "Ellipse.h"
#include <iostream>
using namespace std;

class Circle:public Ellipse{
public:
	Circle(double radius);
	~Circle();
	double area();
	double circuit();
};

