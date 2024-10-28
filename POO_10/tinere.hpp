#ifndef TINERE_HPP
#define TINERE_HPP

#include "pisici.hpp"

class Tinere : public Pisici
{
	char *nume;	
	int varsta;
	char *descriere;
	int vaccin;
	int culoare;
	
public:
		Tinere();
		Tinere(const char*, int, const char*, int, int);
		
		void afisare();
		
		char* getNume();
		int getVarsta();
		char* getDescriere();
		int getVaccin();
		int getCuloare();
		
		~Tinere();
};

#endif

