#include <iostream>
#include "klasa.h"

using namespace std;

prostokat::prostokat(int a1, int b1) {
	a = a1;
	b = b1;
}

prostokat::prostokat() {
	a = 1;
	b = 1;
}

float prostokat::pole() {
	float pol;

	pol = a * b;

	return pol;
}

float prostokat::obowd() {
	float ob;

	ob = (2 * a) + (2 * b);

	return ob;
}

void prostokat::setA(int a2) {
	a = a2;
}

void prostokat::setB(int b2) {
	b = b2;
}