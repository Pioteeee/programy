#include <iostream>
#include "klasa.h"

using namespace std;

int ulamek::wypisz()
{
	int licz = licznik;
	int mian = mianownik;

	cout << endl << licz << "/" << mian << endl;
	return licz, mian;
}


ulamek::ulamek() {

}

ulamek::ulamek(int lic, int mia)
{
	licznik = lic;
	mianownik = mia;
}
