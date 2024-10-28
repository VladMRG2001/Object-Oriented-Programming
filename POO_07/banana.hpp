#ifndef BANANA_HPP
#define BANANA_HPP

#include "baza.hpp"

class Banana: public Baza{
	int pret_bucata;
public:
	Banana(); // contructor fara parametri
	Banana(int); // constructor cu parametri
	
	void afisare(); // metoda de afisare
	bool isPortocala(); // metoda pentru a decide daca e portocala
	float PretTotal(); // metoda pentru aflarea pretului total
	int OrdineFructe();
};

#endif

