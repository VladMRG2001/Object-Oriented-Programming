#ifndef BANANA_HPP
#define BANANA_HPP

#include "baza.hpp"

class Banana: public Baza{
	int pret_bucata;
public:
	Banana();
	Banana(int);
	
	void afisare();
	bool isPortocala();
	int PretTotal();
	
};

#endif

