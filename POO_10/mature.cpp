#include "mature.hpp"

Mature::Mature():nume(NULL), varsta(0), descriere(NULL), vaccin(0), culoare(0){}

Mature::Mature(const char* nume, int varsta, const char* descriere, int vaccin, int culoare):varsta(varsta), vaccin(vaccin), culoare(culoare)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->descriere = new char[strlen(descriere) + 1];
	strcpy(this->descriere,descriere);
}


void Mature::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Varsta: " << varsta << endl;
	cout << "Descriere: " << descriere << endl;
	cout << "Vaccin (1=da; 0=nu): "<< vaccin << endl;
	cout << "Culoare (0=alb; 1=negru; 2=alta): " << culoare << endl;
	cout << endl;

}

int Mature::getVaccin()
{
	return vaccin;
}

int Mature::getVarsta()
{
	return varsta;
}

char* Mature::getDescriere()
{
	return descriere;
}

char* Mature::getNume()
{
	return nume;
}

int Mature::getCuloare()
{
	return culoare;
}

Mature::~Mature()
{
	delete []nume;
	delete []descriere;
}

