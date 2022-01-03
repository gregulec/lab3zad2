#pragma once
#include "BazaFigur.h"
#include <iostream>
using namespace std;

class Rectangle:public BazaFigur{
protected:
	double width;
	double height;
public:
	Rectangle(double width,double height);
	~Rectangle();
	virtual double area();
	virtual double circuit();
};

