#ifndef PUI_HPP
#define PUI_HPP

#include "pisici.hpp"

class Pui : public Pisici
{
	char *nume;	
	int varsta;
	char *descriere;
	int vaccin;
	int culoare;
	
public:
		Pui();
		Pui(const char*, int, const char*, int, int);
		
		void afisare();
		
		char* getNume();
		int getVarsta();
		char* getDescriere();
		int getVaccin();
		int getCuloare();
		
		~Pui();
};

#endif

