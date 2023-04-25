#include <iostream>
#include "klasa.h"

using namespace std;

int main()
{
	int licz1, licz2, mia1, mia2;

	cout << "Podaj Licznik pierwszego ułamka: ";
	cin >> licz1;
	cout << "\nPodaj mianownik pierwszego ułamka: ";
	cin >> mia1;
	cout << "Podaj Licznik drugiego ułamka: ";
	cin >> licz2;
	cout << "Podaj mianownik drugiego ułamka: ";
	cin >> mia2;
	
	ulamek u1(licz1, mia1);
	ulamek u2(licz2, mia2);
	ulamek dodawanie;
	ulamek odejmowanie;
	ulamek mnozenie;
	ulamek dzielenie;

	u1.wypisz();
	u2.wypisz();

	dodawanie = u1 + u2;
	odejmowanie = u1 - u2;
	mnozenie = u1 * u2;
	dzielenie = u1 / u2;

	cout << "dodawanie: " << dodawanie.wypisz();
	cout << "odejmowanie: " << odejmowanie.wypisz();
	cout << "mnozenie: " << mnozenie.wypisz();
	cout << "dzielenie: " << dzielenie.wypisz();

	return 0;
}