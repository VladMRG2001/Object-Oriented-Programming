#ifndef MASINA_HPP
#define MASINA_HPP

#include "vehicul.hpp"

class Masina: virtual public Vehicul
{
protected:
	int dimensiuni[3]; 
	char *marca;
public:
	Masina();
	Masina(int *, const char*, const char*, int);
	Masina(const Masina&);
	Masina& operator=(const Masina&);

	void getDim();
	char* getMarca();
	void afisare();
	~Masina();
};


#endif


