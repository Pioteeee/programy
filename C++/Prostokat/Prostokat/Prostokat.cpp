#include <iostream>
#include "klasa.h"

using namespace std;

int main()
{
	int a, b;
	prostokat obiekt1(4, 5);
	prostokat obiekt2;

	cout << "Obwod: " << obiekt1.obowd() << endl;
	cout << "Pole: " << obiekt1.pole() << endl;

	cout << "Podaj dlugosc boku a: ";
	cin >> a;
	cout << "\nPodaj dlugosc boku b: ";
	cin >> b;
	
	obiekt2.setA(a);
	obiekt2.setB(b);

	cout << "Obwod: " << obiekt2.obowd() << endl;
	cout << "Pole: " << obiekt2.pole() << endl;

	obiekt2.setA(10);
	obiekt2.setB(20);

	cout << "Obwod: " << obiekt2.obowd() << endl;
	cout << "Pole: " << obiekt2.pole() << endl;

	return 0;
}
