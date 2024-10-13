#ifndef MORCOVI_HPP
#define MORCOVI_HPP

#include "baza.hpp"

class Morcovi: public Baza{
	int cantitate;
	int pret_100_grame;
public:
	Morcovi();
	Morcovi(int,int);
	
	void afisare();
	bool isPortocala();
	int PretTotal();
	
};

#endif

