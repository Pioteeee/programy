class Macierz {
	float tab[3][3];
	int rozmiar;
public:
	Macierz();
	~Macierz();
	float wczytajDane();
	float wypisz();
	
	friend void dodajMacierze(Macierz *mac1, Macierz *mac2);
};
