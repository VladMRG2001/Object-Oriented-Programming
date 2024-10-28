#ifndef FERMA_HPP
#define FERMA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Ferma
{
public:
		
	virtual void afisare() = 0;
	virtual ~Ferma() = 0 ;
	
	virtual int getCantTot() = 0;
	virtual int getCant() = 0;
	virtual char* getMancare() = 0;
	virtual char* getNume() = 0;
};

#endif

