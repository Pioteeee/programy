#pragma once

class ulamek {
	int licznik, mianownik;
public:
	ulamek();
	ulamek(int lic, int mia);
	int wypisz();
	int dodawanie;

	ulamek operator+(ulamek &obj) {
		ulamek tmp;

		if (mianownik != obj.mianownik) {
			tmp.mianownik = mianownik * obj.mianownik;
			tmp.licznik = (licznik * obj.mianownik) + (obj.licznik * mianownik);
		}
		else if (mianownik == obj.mianownik) {
			tmp.licznik = licznik + obj.licznik;
			tmp.mianownik = obj.mianownik;
		}

		return tmp;
	}

	ulamek operator-(ulamek& obj) {
		ulamek tmp;

		if (mianownik != obj.mianownik) {
			tmp.mianownik = mianownik * obj.mianownik;
			tmp.licznik = (licznik * obj.mianownik) - (obj.licznik * mianownik);
		}
		else if (mianownik == obj.mianownik) {
			tmp.licznik = licznik - obj.licznik;
			tmp.mianownik = obj.mianownik;
		}

		return tmp;
	}

	ulamek operator*(ulamek& obj) {
		ulamek tmp;

		tmp.licznik = licznik * obj.licznik;
		tmp.mianownik = mianownik * obj.mianownik;

		return tmp;
	}

	ulamek operator/(ulamek& obj) {
		ulamek tmp;

		tmp.licznik = licznik / obj.licznik;
		tmp.mianownik = mianownik / obj.mianownik;

		return tmp;
	}

};