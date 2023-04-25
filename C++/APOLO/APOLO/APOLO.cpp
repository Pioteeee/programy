#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string linia, litera, linie;
	char znak;
	int max = 0, count = 0;

	fstream plik("plik.txt", ios::in);

	while (getline(plik, linie)) {
		litera = litera + linie;
		linia = linia + linie;
	}

	for (int i = 0; i < litera.length(); i++) {
		count = 0;
		for (int y = 0; y < linia.length(); y++) {
			if (litera[i] == linia[y]) {
				count++;
				
			}
		}
		if (max < count) {
			max = count;
			znak = litera[i];
		}
		cout << litera[i];
	}

	cout << max << "                " << znak;
	plik.close();

	return 0;
}
