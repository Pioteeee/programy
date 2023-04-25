#include <iostream>
#include "klasa.h"

using namespace std;

Punkt::Punkt(int x) {
	cout << "Wypisano konstruktor" << endl;
	this->x = x;
}

Punkt::~Punkt() {
	cout << "Wypisano destruktor" << endl;
}

int Punkt::getX() {
	return this->x;
}

void Punkt::setX(int x) {
	this->x = x;
}