#pragma once
#include "BazaFigur.h"
#include <iostream>
using namespace std;

class Ellipse:public BazaFigur{
protected:
	double major;
	double minor;
public:
	Ellipse(double major,double minor);
	~Ellipse();
	virtual double area();
	virtual double circuit();
};

