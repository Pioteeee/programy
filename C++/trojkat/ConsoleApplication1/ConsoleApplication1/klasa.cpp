#include <iostream>
#include "klasa.h"
using namespace std;
float trojkat::getWysokosc()
{
	return wysokosc;
}

void trojkat::setWysokosc()
{
	float wyso;

	cout << "Podaj wysokosc trojkata: " << endl;
	cin >> wyso;
	wysokosc = wyso;
}

float trojkat::getPodstawa()
{
	return podstawa;
}

void trojkat::setPodstawa()
{
	float pods;

	cout << "\nPodaj podstawe trojkata: " << endl;
	cin >> pods;
	podstawa = pods;
}

float trojkat::pole()
{
	float pole;
	pole = 0.5 * podstawa * wysokosc;
	return pole;
} 

trojkat::trojkat() 
{
	wysokosc = 0;
	podstawa = 0;
}

trojkat::~trojkat()
{

}