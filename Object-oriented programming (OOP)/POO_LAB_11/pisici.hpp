#ifndef PISICI_HPP
#define PISICI_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Pisici
{
public:
		
	virtual void afisare() = 0;
	virtual ~Pisici() = 0 ;
	
	virtual int getVarsta() = 0;
	virtual int getVaccin() = 0;
	virtual char* getDescriere() = 0;
	virtual char* getNume() = 0;
	virtual int getCuloare() = 0;
};

#endif
