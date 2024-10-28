#include "Porci.hpp"

Porci::Porci():nume(NULL), nr_porci(0), mancare1_porci(NULL), cant_mancare1_porci(0), mancare2_porci(NULL), cant_mancare2_porci(0){}

Porci::Porci(const char* nume, int nr_porci, const char* mancare1_porci ,int cant_mancare1_porci , const char* mancare2_porci, int cant_mancare2_porci):nr_porci(nr_porci), cant_mancare1_porci(cant_mancare1_porci), cant_mancare2_porci(cant_mancare2_porci)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->mancare1_porci = new char[strlen(mancare1_porci) + 1];
	strcpy(this->mancare1_porci,mancare1_porci);
	
	this->mancare2_porci = new char[strlen(mancare2_porci) + 1];
	strcpy(this->mancare2_porci,mancare2_porci);
	
}


void Porci::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Numar de porci: " << nr_porci << endl;
	cout << "Prima mancare de porci: " << mancare1_porci << endl;
	cout << "Cantitate din prima mancare consumata pe zi: " << cant_mancare1_porci << " kg" << endl;
	cout << "A doua mancare de porci: " << mancare2_porci << endl;
	cout << "Cantitate din a doua mancare consumata pe zi: " << cant_mancare2_porci << " kg" << endl << endl;

}

int Porci::getCantTot()
{
	return cant_mancare1_porci + cant_mancare2_porci;
}

int Porci::getCant()
{
	if(strcmp(mancare1_porci,"Graunte") == 0)
	   return cant_mancare1_porci;
	else
	 if(strcmp(mancare2_porci,"Iarba") == 0)
	   return cant_mancare2_porci;
}

char* Porci::getMancare()
{
	if(strcmp(mancare1_porci,"Graunte") == 0)
	    return mancare1_porci;
	else
	 if(strcmp(mancare2_porci,"Iarba") == 0)
	  return mancare2_porci;
}

char* Porci::getNume()
{
	return nume;
}

Porci::~Porci()
{
	delete []nume;
	delete []mancare1_porci;
	delete []mancare2_porci;
}

