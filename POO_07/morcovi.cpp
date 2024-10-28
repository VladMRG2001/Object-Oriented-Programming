#include "morcovi.hpp"


Morcovi::Morcovi():cantitate(0),pret_100_grame(0){}

Morcovi::Morcovi(int cantitate, int pret_100_grame):cantitate(cantitate),pret_100_grame(pret_100_grame){}

void Morcovi::afisare()
{
	cout << "Morcovi -> " << "Cantitate: " << cantitate << " ->  Pret 100 grame: " << pret_100_grame << " -> Pret total: " << PretTotal() << endl;
}

bool Morcovi::isPortocala()
{
	return false;
}

float Morcovi::PretTotal()
{
	float pret;
	pret = float(cantitate / 100) * pret_100_grame;
	return pret;
}

int Morcovi::OrdineFructe(){
	int ordine = 3;
	return ordine;
}
