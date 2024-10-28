#ifndef PORCI_HPP
#define PORCI_HPP

#include "ferma.hpp"

class Porci : public Ferma
{
	char *nume;	
	int nr_porci;
	char *mancare1_porci;
	int cant_mancare1_porci;
	char *mancare2_porci;
	int cant_mancare2_porci;

public:
	Porci();
	Porci(const char*, int, const char*, int, const char*, int);
	 
	void afisare();
	
	int getCantTot();
	int getCant();
	char* getMancare();
	char* getNume();

	 ~Porci();
		
};

#endif

