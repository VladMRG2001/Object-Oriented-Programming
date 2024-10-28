#include "nuci.hpp"


Nuci::Nuci():cantitate(0),pret_100_grame(0){}

Nuci::Nuci(int cantitate, int pret_100_grame):cantitate(cantitate),pret_100_grame(pret_100_grame){}

void Nuci::afisare()
{
	cout << "Nuci -> " << "Cantitate: " << cantitate << " ->  Pret 100 grame: " << pret_100_grame << " -> Pret total: " << Nuci::PretTotal() << endl;
}

bool Nuci::isPortocala()
{
	return false;
}

float Nuci::PretTotal()
{
	float pret;
	pret = float(cantitate / 100) * pret_100_grame;
	return pret;
}

int Nuci::OrdineFructe(){
	int ordine = 4;
	return ordine;
}

