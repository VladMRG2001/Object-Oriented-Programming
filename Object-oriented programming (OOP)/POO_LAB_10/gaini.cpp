#include"gaini.hpp"

Gaini::Gaini():nume(NULL), nr_gaini(0), mancare_gaini(NULL), cant_mancare_gaini(0){}

Gaini::Gaini(const char* nume, int nr_gaini, const char* mancare_gaini,int cant_mancare_gaini):nr_gaini(nr_gaini), cant_mancare_gaini(cant_mancare_gaini)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->mancare_gaini = new char[strlen(mancare_gaini) + 1];
	strcpy(this->mancare_gaini,mancare_gaini);
	
}

void Gaini::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Numar de gaini: " << nr_gaini << endl;
	cout << "Mancare gaini: " << mancare_gaini << endl;
	cout << "Cantitate de mancare consumata pe zi: " << cant_mancare_gaini << " kg"<< endl << endl;

}

int Gaini::getCantTot()
{
	return cant_mancare_gaini;
}

int Gaini::getCant()
{
	return cant_mancare_gaini;
}

char* Gaini::getMancare()
{
	return mancare_gaini;
}

char* Gaini::getNume()
{
	return nume;
}

Gaini::~Gaini()
{
	delete []nume;
	delete []mancare_gaini;
}

