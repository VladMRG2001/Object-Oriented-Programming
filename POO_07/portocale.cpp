#include "portocale.hpp"


Portocale::Portocale():nr_kilograme(0),pret_kg(0){}

Portocale::Portocale(int nr_kilograme, int pret_kg):nr_kilograme(nr_kilograme),pret_kg(pret_kg){}

void Portocale::afisare()
{
	cout << "Portocale -> " << "Nr Kilograme: " << nr_kilograme << " ->  Pret kilogram: " << pret_kg << " -> Pret total: " << Portocale::PretTotal() << endl;
}

bool Portocale::isPortocala()
{
	return true;
}

float Portocale::PretTotal()
{
	int pret;
	pret = nr_kilograme * pret_kg;
	return pret;
}

int Portocale::OrdineFructe(){
	int ordine = 2;
	return ordine;
}

