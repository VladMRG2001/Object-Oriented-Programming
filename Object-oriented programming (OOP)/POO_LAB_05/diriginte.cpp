#include "diriginte.hpp"

Diriginte::Diriginte():nume(NULL)
{
	strcpy(this->grupa," ");
}

Diriginte::Diriginte(const char* nume, const char grupa[])
{
	this->nume = new char[strlen(nume)+1];
	strcpy(this->nume,nume);
	strcpy(this->grupa,grupa);
}

Diriginte::Diriginte(const Diriginte& obj){
	nume = NULL;
	*this = obj;
}

Diriginte& Diriginte::operator=(const Diriginte& obj){
	if (nume != NULL)
		delete []nume;

	nume = new char[strlen(obj.nume) + 1];
	strcpy(nume,obj.nume);
	strcpy(grupa,obj.grupa);
	return *this;
}

ostream& operator<<(ostream& out, const Diriginte& obj)
{
	if(obj.nume != NULL)
		out << obj.nume;
	else
		out << "fara nume";
	out << " ";
	out << obj.grupa<< " ";
	
	return out;
}

void Diriginte::schimbare_nume(const char* n)
{
	this->nume=new char[strlen(n) + 1];
	strcpy(this->nume,n);
}

Diriginte::~Diriginte()
{
	delete []nume;
}



