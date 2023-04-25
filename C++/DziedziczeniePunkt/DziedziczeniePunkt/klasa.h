#pragma once

class Punkt {
	int x;
public:
	Punkt(int = 0);
	~Punkt();
	int getX();
	void setX(int);
};
class Punkt2D : public Punkt
{

};