#include "vaci.hpp"

Vaci::Vaci():nume(NULL), nr_vaci(0), mancare_vaci(NULL), cant_mancare_vaci(0){}

Vaci::Vaci(const char* nume, int nr_vaci , const char* mancare_vaci, int cant_mancare_vaci):cant_mancare_vaci(cant_mancare_vaci),nr_vaci(nr_vaci)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->mancare_vaci = new char[strlen(mancare_vaci) + 1];
	strcpy(this->mancare_vaci,mancare_vaci);
}

void Vaci::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Numar de vaci: " << nr_vaci << endl;
	cout << "Mancare vaci: " << mancare_vaci <<endl;
	cout << "Cantitate de mancare consumata pe zi: " << cant_mancare_vaci << " kg"<< endl << endl;

}

int Vaci::getCantTot()
{
	return cant_mancare_vaci;
}

int Vaci::getCant()
{
	return cant_mancare_vaci;
}

char* Vaci::getMancare()
{
	return mancare_vaci;
}


char* Vaci::getNume()
{
	return nume;
}

Vaci::~Vaci()
{
	delete []nume;
	delete []mancare_vaci;
}

