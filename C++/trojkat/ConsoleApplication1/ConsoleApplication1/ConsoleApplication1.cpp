#include <iostream>
#include "klasa.h"

using namespace std;

void pola(trojkat troj1, trojkat troj2)
{
	float pol1, pol2, pol = 0;

	pol1 = troj1.pole();
	pol2 = troj2.pole();

	if (pol1 > pol2) pol = pol1, cout << "\nPierwszy trojkat ma wieksze pole" << endl << "Wysokosc pierwszego trojkata wynosi: " << troj1.getWysokosc() << endl << "Podstawa pierwszego wynosi: " << troj1.getPodstawa() << endl << "Pole pierwszego wynosi: " << pol << endl;
	if (pol2 > pol1) pol = pol2, cout << "\nDrugi trojkat ma wieksze pole" << endl << "Wysokosc drugiego trojkata wynosi: " << troj2.getWysokosc() << endl << "Podstawa drugiego wynosi: " << troj2.getPodstawa() << endl << "Pole drugiego wynosi: " << pol << endl;

}

int main()
{
	float wyso1, pods1, wyso2, pods2;

	trojkat troj1;
	trojkat troj2;

	troj1.setPodstawa();
	troj1.setWysokosc();
	troj2.setPodstawa();
	troj2.setWysokosc();

	pola(troj1, troj2);

	return 0;
}
