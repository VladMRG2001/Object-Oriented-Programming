#include "portocale.hpp"


Portocale::Portocale():nr_kilograme(0),pret_kg(0){}

Portocale::Portocale(int nr_kilograme, int pret_kg):nr_kilograme(nr_kilograme),pret_kg(pret_kg){}

void Portocale::afisare()
{
	cout << "Portocale :: " << "Nr Kilograme: " << nr_kilograme << ".  Pret kilogram " << pret_kg << endl;
}

bool Portocale::isPortocala()
{
	return true;
}

int Portocale::PretTotal()
{
	int pret;
	pret = nr_kilograme / pret_kg;
	return pret;
}

