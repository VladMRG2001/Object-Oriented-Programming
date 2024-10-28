#ifndef BAZA_HPP
#define BAZA_HPP

#include <iostream>
#include <cstring>
using namespace std;
// Clasa comuna care e amintita la HINT
class Baza{
public:
	virtual void afisare() = 0; // virtual pentru a permite redefinirea in clasele copii
	virtual ~Baza() = 0 ; // destructor
	virtual bool isPortocala() = 0; 
	virtual float PretTotal() = 0;
	virtual int OrdineFructe() = 0;
};

#endif
