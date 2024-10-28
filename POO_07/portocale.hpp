#ifndef PORTOCALE_HPP
#define PORTOCALE_HPP

#include "baza.hpp"

class Portocale: public Baza{
	int nr_kilograme;
	int pret_kg;
public:
	Portocale(); // contructor fara parametri
	Portocale(int,int); // constructor cu parametri
	
	void afisare(); // metoda de afisare
	bool isPortocala(); // metoda pentru a decide daca e portocala
	float PretTotal(); // metoda pentru aflarea pretului total
	int OrdineFructe();
	
};

#endif

