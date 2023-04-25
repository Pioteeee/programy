#include <iostream>
#include "klasa.h"

using namespace std;

Macierz::Macierz() {
	int y;
	for (int i = 0; i < 3; i++) {
		for (y = 0; y < 3; y++) {
			this->tab[i][y] = 0;
		}
	}
	rozmiar = 9;
}

Macierz::~Macierz() {
	
}

float Macierz::wczytajDane() {
	int y;

	cout << "podaj liczby";

	for (int i = 0; i < 3; i++) {
		for (y = 0; y < 3; y++) {
			cin >> tab[i][y];
		}
	}
	return 0;
}

float Macierz::wypisz() {
	int y;

	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (y = 0; y < 3; y++) {
			cout << tab[i][y] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	return 0;
}

