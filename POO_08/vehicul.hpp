#ifndef VEHICUL_HPP
#define VEHICUL_HPP

#include "baza.hpp"

class Vehicul:public Baza
{
protected:
	char *proprietar;
	int pret;
public:
	Vehicul();
	Vehicul(const char*, int);
	Vehicul(const Vehicul&);
	Vehicul& operator=(const Vehicul&);

	void afisare();
	char* getProprietar();
	int getPret();
	~Vehicul();
};

#endif

