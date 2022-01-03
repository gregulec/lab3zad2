#include "BazaFigur.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include <iostream>
using namespace std;

int main(){
	Rectangle rectangle(2.0,3.0);
	Square square(2.0);
	Ellipse ellipse(2.0, 3.0);
	Circle circle(2.0);
	Triangle triangle(3.0, 4.0);
	BazaFigur *r = &rectangle, *s = &square, *e = &ellipse, *c = &circle, *t = &triangle;
	r->dodaj(&rectangle);
	r->wyswietl();
	s->dodaj(&square);
	s->wyswietl();
	e->dodaj(&ellipse);
	e->wyswietl();
	c->dodaj(&circle);
	c->wyswietl();
	t->dodaj(&triangle);
	t->wyswietl();
}