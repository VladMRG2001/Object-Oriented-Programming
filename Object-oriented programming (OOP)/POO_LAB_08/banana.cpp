#include "banana.hpp"


Banana::Banana():pret_bucata(0){}

Banana::Banana(int pret_bucata):pret_bucata(pret_bucata){}

void Banana::afisare()
{
	cout << "Banana :: " << "Pret bucata: " << pret_bucata << endl;
}

bool Banana::isPortocala()
{
	return false;
}

int Banana::PretTotal()
{
	int pret;
	pret = pret_bucata;
	return pret;
}

