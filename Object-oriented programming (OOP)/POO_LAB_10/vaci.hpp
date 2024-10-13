#ifndef VACI_HPP
#define VACI_HPP

#include "ferma.hpp"

class Vaci :public Ferma
{
	char *nume;
	int nr_vaci;
	char *mancare_vaci;
	int cant_mancare_vaci;
	
	
public:
		Vaci();
		Vaci(const char*, int, const char*, int);
		
		void afisare();
		
		int getCantTot();
		int getCant();
		char* getMancare();
		char* getNume();
		
		~Vaci();
		
};

#endif

