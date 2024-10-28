#ifndef GAINI_HPP
#define GAINI_HPP

#include"ferma.hpp"

class Gaini : public Ferma
{
	char *nume;
	int nr_gaini;
	char *mancare_gaini;
	int cant_mancare_gaini;
	
public:
		Gaini();
		Gaini(const char*, int, const char*, int);
		
		void afisare();
		
		int getCantTot();
		int getCant();
		char* getMancare();
		char* getNume();

		~Gaini();
};

#endif

