#ifndef MORCOVI_HPP
#define MORCOVI_HPP

#include "baza.hpp"

class Morcovi: public Baza{
	int cantitate;
	int pret_100_grame;
public:
	Morcovi(); // contructor fara parametri
	Morcovi(int,int); // constructor cu parametri
	
	void afisare(); // metoda de afisare
	bool isPortocala(); // metoda pentru a decide daca e portocala
	float PretTotal(); // metoda pentru aflarea pretului total
	int OrdineFructe();
	
};

#endif

