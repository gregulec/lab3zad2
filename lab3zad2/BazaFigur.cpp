#include "BazaFigur.h"

BazaFigur::BazaFigur(){
}

BazaFigur::~BazaFigur(){
}

void BazaFigur::dodaj(BazaFigur* figura){
	figury.push_back(figura);
}

void BazaFigur::wyswietl(){
	for (int i = 0; i < figury.size(); i++){
		cout << figury[i]->area() << " " << figury[i]->circuit() << endl;
	}
}