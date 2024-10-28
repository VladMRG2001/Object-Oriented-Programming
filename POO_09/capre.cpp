#include "capre.hpp"

Capre::Capre():nume(NULL), nr_capre(0), mancare_capre(NULL), cant_mancare_capre(0){}

Capre::Capre(const char* nume, int nr_capre, const char* mancare_capre, int cant_mancare_capre):nr_capre(nr_capre), cant_mancare_capre(cant_mancare_capre)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->mancare_capre = new char[strlen(mancare_capre) + 1];
	strcpy(this->mancare_capre,mancare_capre);
}

void Capre::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Numar de capre: " << nr_capre << endl;
	cout << "Mancare capre: " << mancare_capre << endl;
	cout << "Cantitate de mancare consumata pe zi: " << cant_mancare_capre << " kg" << endl << endl;

}

int Capre::getCantTot()
{
	return cant_mancare_capre;
}

int Capre::getCant()
{
	return cant_mancare_capre;
}

char* Capre::getMancare()
{
	return mancare_capre;
}

char* Capre::getNume()
{
	return nume;
}

Capre::~Capre()
{
	delete []nume;
	delete []mancare_capre;
}

