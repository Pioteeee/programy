#include <iostream>
#include "klasa.h"

using namespace std;

int main()
{
	int wym, wyma, wymb;
	cout << "Podaj wymiar kwadratu" << endl;
	cin >> wym;

	Czworokat *czworokat;

	Kwadrat *obj1;
	obj1 = new Kwadrat(wym);

	czworokat = obj1;

	cout << "Pole kwadratu: " << czworokat->pole << endl;
	cout << "Podaj wymiary prostokata" << endl;
	cin >> wyma;
	cin >> wymb;

	Prostokat *obj2;

	obj2 = new Prostokat(wyma, wymb);

	czworokat = obj2;
	cout << "Pole prostokata: " << czworokat->pole << endl;
	return 0;
}
