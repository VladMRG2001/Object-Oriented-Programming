#ifndef PORTOCALE_HPP
#define PORTOCALE_HPP

#include "baza.hpp"

class Portocale: public Baza{
	int nr_kilograme;
	int pret_kg;
public:
	Portocale();
	Portocale(int,int);
	
	void afisare();
	bool isPortocala();
	int PretTotal();
	
};

#endif

