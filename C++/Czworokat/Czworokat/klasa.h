#pragma once

class Czworokat {
	int a, b, c, d;
public:
	Czworokat(int aaa,int bbb,int ccc,int ddd);
	void wypisz();
	virtual int pole() = 0;
};

class Prostokat : public Czworokat {
public:
	Prostokat(int aa, int bb);
	virtual int pole() override;
	void wymiary(int w1, int w2);
};

class Kwadrat : public Czworokat {
public:
	Kwadrat(int w);
	virtual int pole() override;
	void wymiar(int w1);
};