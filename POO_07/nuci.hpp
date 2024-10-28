#ifndef NUCI_HPP
#define NUCI_HPP

#include "baza.hpp"

class Nuci: public Baza{
	int cantitate;
	int pret_100_grame;
public:
	Nuci(); // contructor fara parametri
	Nuci(int,int); // constructor cu parametri
	
	void afisare(); // metoda de afisare
	bool isPortocala(); // metoda pentru a decide daca e portocala
	float PretTotal(); // metoda pentru aflarea pretului total
	int OrdineFructe();
	
};

#endif

