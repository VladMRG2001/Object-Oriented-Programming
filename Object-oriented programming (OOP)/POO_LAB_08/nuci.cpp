#include "nuci.hpp"


Nuci::Nuci():cantitate(0),pret_100_grame(0){}

Nuci::Nuci(int cantitate, int pret_100_grame):cantitate(cantitate),pret_100_grame(pret_100_grame){}

void Nuci::afisare()
{
	cout << "Nuci : " << "Cantitate: " << cantitate << ".  Pret 100 grame " << pret_100_grame << endl;
}

bool Nuci::isPortocala()
{
	return false;
}

int Nuci::PretTotal()
{
	int pret;
	pret = cantitate / pret_100_grame;
	return pret;
}

