#include <iostream>
#include "klasa.h"

using namespace std;

void dodajMacierze(Macierz mac1, Macierz mac2);

int main()
{
    Macierz* macierz1;
	macierz1 = new Macierz();
    Macierz* macierz2;
	macierz2 = new Macierz();

    macierz1->wczytajDane();
    macierz2->wczytajDane();

    macierz1->wypisz();
    macierz2->wypisz();

    dodajMacierze(*macierz1, *macierz2);
}

void dodajMacierze(Macierz *mac1, Macierz *mac2)
{
	Macierz macierzDod;

	for (int i = 0; i < 3; i++)
	{
		for (int y = 0; y < 3; y++)
		{
			macierzDod.tab[i][y] = mac1->tab[i][y] + mac2->tab[i][y];
		}
	}

	macierzDod.wypisz();
}