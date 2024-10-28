#include "pui.hpp"

Pui::Pui():nume(NULL), varsta(0), descriere(NULL), vaccin(0), culoare(0){}

Pui::Pui(const char* nume, int varsta, const char* descriere, int vaccin, int culoare):varsta(varsta), vaccin(vaccin), culoare(culoare)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->descriere = new char[strlen(descriere) + 1];
	strcpy(this->descriere,descriere);
}


void Pui::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Varsta: " << varsta << endl;
	cout << "Descriere: " << descriere << endl;
	cout << "Vaccin (1=da; 0=nu): "<< vaccin << endl;
	cout << "Culoare (0=alb; 1=negru; 2=alta): " << culoare << endl;
	cout << endl;

}

int Pui::getVaccin()
{
	return vaccin;
}

int Pui::getVarsta()
{
	return varsta;
}

char* Pui::getDescriere()
{
	return descriere;
}

char* Pui::getNume()
{
	return nume;
}

int Pui::getCuloare()
{
	return culoare;
}

Pui::~Pui()
{
	delete []nume;
	delete []descriere;
}

