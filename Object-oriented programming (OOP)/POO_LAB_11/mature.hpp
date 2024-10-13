#ifndef MATURE_HPP
#define MATURE_HPP

#include "pisici.hpp"

class Mature : public Pisici
{
	char *nume;	
	int varsta;
	char *descriere;
	int vaccin;
	int culoare;
	
public:
		Mature();
		Mature(const char*, int, const char*, int, int);
		
		void afisare();
		
		char* getNume();
		int getVarsta();
		char* getDescriere();
		int getVaccin();
		int getCuloare();
		
		~Mature();
};

#endif

