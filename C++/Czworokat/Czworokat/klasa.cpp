#include <iostream>
#include "klasa.h"

using namespace std;

Czworokat::Czworokat(int aaa, int bbb, int ccc, int ddd) {
	a = aaa;
	b = bbb;
	c = ccc;
	d = ddd;
}

Prostokat::Prostokat(int aa, int bb) : Czworokat(a, b, c, d)
{
	a = aa;
	c = aa;
	b = bb;
	d = bb;
}

Kwadrat::Kwadrat(int w) : Czworokat(a, b, c, d) {
	a = w;
	b = w;
	c = w;
	d = w;
}

void Kwadrat::wymiar(int w1) {
	a = w1;
	b = w1;
	c = w1;
	d = w1;
}

void Prostokat::wymiary(int w1, int w2) {
	a = w1;
	c = w1;
	b = w2;
	d = w2;
}

virtual int Kwadrat::pole() {
	int p;
	p = a * a;
	return p;
}

virtual int Prostokat::pole() {
	int p;
	p = a * a;
	return p;
}

void Czworokat::wypisz() {
	int aa, bb, cc, dd;

	aa = a;
	bb = b;
	cc = c;
	dd = d;

	cout << "Dlugosci bokow:" << endl;
	cout << "a: " << aa;
	cout << "b: " << bb;
	cout << "c: " << cc;
	cout << "d: " << dd;

}