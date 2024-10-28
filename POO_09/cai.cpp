#include "cai.hpp"

Cai::Cai():nume(NULL), nr_cai(0), mancare_cai(NULL), cant_mancare_cai(0){}

Cai::Cai(const char* nume, int nr_cai, const char* mancare_cai, int cant_mancare_cai):nr_cai(nr_cai), cant_mancare_cai(cant_mancare_cai)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->mancare_cai = new char[strlen(mancare_cai) + 1];
	strcpy(this->mancare_cai,mancare_cai);
}


void Cai::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Numar de cai: " << nr_cai << endl;
	cout << "Mancare cai: " << mancare_cai << endl;
	cout << "cantitate de mancare consumata pe zi: "<< cant_mancare_cai << " kg" << endl << endl;

}

int Cai::getCantTot()
{
	return cant_mancare_cai;
}

int Cai::getCant()
{
	return cant_mancare_cai;
}

char* Cai::getMancare()
{
	return mancare_cai;
}

char* Cai::getNume()
{
	return nume;
}

Cai::~Cai()
{
	delete []nume;
	delete []mancare_cai;
}

