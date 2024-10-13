#include "tinere.hpp"

Tinere::Tinere():nume(NULL), varsta(0), descriere(NULL), vaccin(0), culoare(0){}

Tinere::Tinere(const char* nume, int varsta, const char* descriere, int vaccin, int culoare):varsta(varsta), vaccin(vaccin), culoare(culoare)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->descriere = new char[strlen(descriere) + 1];
	strcpy(this->descriere,descriere);
}


void Tinere::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Varsta: " << varsta << endl;
	cout << "Descriere: " << descriere << endl;
	cout << "Vaccin (1=da; 0=nu): "<< vaccin << endl;
	cout << "Culoare (0=alb; 1=negru; 2=alta): " << culoare << endl;
	cout << endl;

}

int Tinere::getVaccin()
{
	return vaccin;
}

int Tinere::getVarsta()
{
	return varsta;
}

char* Tinere::getDescriere()
{
	return descriere;
}

char* Tinere::getNume()
{
	return nume;
}

int Tinere::getCuloare()
{
	return culoare;
}

Tinere::~Tinere()
{
	delete []nume;
	delete []descriere;
}

