#include "remorca.hpp"

Remorca::Remorca():Vehicul(), greutate_maxima(0)
{
	for(int i=0; i < 3; i++)
		dimensiuni[i] = 0;
}

Remorca::Remorca(int dimensiuni[], int greutate_maxima, int pret, const char *proprietar):greutate_maxima(greutate_maxima), Vehicul(proprietar, pret)
{
	for(int i=0; i < 3; i++)
		this->dimensiuni[i] = dimensiuni[i];
}

Remorca::Remorca(const Remorca& obj)
{
	*this = obj;
}

Remorca& Remorca::operator=(const Remorca& obj)
{
	Vehicul::operator = (obj);
	this->greutate_maxima = obj.greutate_maxima;
	
	for(int i = 0; i < 3; i++)
	{
		this->dimensiuni[i]=obj.dimensiuni[i];
	}
	
	return *this;
}

int Remorca::getGreutate_max(){
	return greutate_maxima;
}

void Remorca::getDimensiuni(){
	for(int i=0; i<3; i++){
		cout << dimensiuni[i] << " ";
	}
}


void Remorca::afisare()
{
	cout << "   Remorca   " << endl ;
	cout << " Proprietar: " << Vehicul::getProprietar();
	cout << " Pret: " << Vehicul::getPret();
	cout << " Dimensiuni remorca(lungime, latime si inaltime): " ;

	for(int i = 0; i < 3; i++)
	
		cout << dimensiuni[i] << " ";
	
	cout <<" Greutate maxima(kg): " << Remorca::getGreutate_max() << endl << endl;
	
}
