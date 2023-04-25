#include <iostream>
#include <string>
#include <list>

using namespace std;

class Person {
public:
	string name, surname;
public:
	Person(string n, string s) : name(n), surname(s) {
	}
	void print() {
		cout << name << " " << surname << " " << endl;
	}
};

int main()
{
	string im, naz;
	list<Person> list;
	cout << "Podaj imie 1 osoby: ";
	cin >> im;
	cout << "\nPodaj nazwisko 1 osoby: ";
	cin >> naz;
	Person os1(im, naz);
	cout << "\nPodaj imie 2 osoby: ";
	cin >> im;
	cout << "\nPodaj nazwisko 2 osoby: ";
	cin >> naz;
	Person os2(im, naz);
	cout << "\nPodaj imie 3 osoby: ";
	cin >> im;
	cout << "\nPodaj nazwisko 3 osoby: ";
	cin >> naz;
	Person os3(im, naz);
	cout << "\nPodaj imie 4 osoby: ";
	cin >> im;
	cout << "\nPodaj nazwisko 4 osoby: ";
	cin >> naz;
	Person os4(im, naz);
	cout << "\nPodaj imie 5 osoby: ";
	cin >> im;
	cout << "\nPodaj nazwisko 5 osoby: ";
	cin >> naz;
	Person os5(im, naz);

	list.push_back(os1);
	list.push_back(os2);
	list.push_back(os3);
	list.push_back(os4);
	list.push_back(os5);

	for (auto it = list.begin(); it != list.end(); ++it)
	{
		 it->print();
	}

	/*
	os1.print();
	os2.print();
	os3.print();
	os4.print();
	os5.print();*/


	return 0;
}