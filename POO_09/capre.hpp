#ifndef CAPRE_HPP
#define CAPRE_HPP

#include "ferma.hpp"

class Capre : public Ferma
{
	char *nume;
	int nr_capre;
	char *mancare_capre;
	int cant_mancare_capre;
	
public:
		Capre();
		Capre(const char*, int, const char*, int);
		
		void afisare();
		
		int getCantTot();
		
		int getCant();
		char* getMancare();
		
		char* getNume();
		
		~Capre();
};

#endif

