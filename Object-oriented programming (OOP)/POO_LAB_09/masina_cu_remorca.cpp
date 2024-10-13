#include "masina_cu_remorca.hpp"

Masina_cu_remorca::Masina_cu_remorca():Remorca(), Masina(), masa_totala(0),Vehicul(){}


Masina_cu_remorca::Masina_cu_remorca(int masa_totala, int dimensiuni[], int greutate_maxima, int dim[], const char *marca, const char *proprietar, int pret):
 Remorca(dimensiuni, greutate_maxima, pret, proprietar), masa_totala(masa_totala), Masina(dim, marca, proprietar, pret), Vehicul(proprietar, pret){}

Masina_cu_remorca::Masina_cu_remorca( const Masina_cu_remorca &obj )
{
	*this = obj;
}

Masina_cu_remorca& Masina_cu_remorca::operator=(const Masina_cu_remorca& obj)
{
    Vehicul::operator=(obj); 
    Remorca::operator=(obj); 
    this->masa_totala=obj.masa_totala;

    return *this;
}

int Masina_cu_remorca::getMasa_totala() const
{
	return masa_totala;
}

void Masina_cu_remorca::afisare()
{
	cout << "   Masina_cu_remorca   " << endl;
	cout << " Proprietar: " << Vehicul::getProprietar();
	cout << " Pret: " << Vehicul::getPret();
	cout << " Marca: " << Masina::getMarca();
	cout << " Dimensiuni masina(lungime, latime si inaltime): " ;
	Masina::getDim();

	cout << " Dimensiuni remorca(lungime, latime si inaltime): " ;
	Remorca::getDimensiuni();
		
	cout << " Greutate maxima(kg): " << Remorca::getGreutate_max();
	cout << " Masa totala(kg): " << Masina_cu_remorca::getMasa_totala() << endl;
	
}

int operator+(const Masina_cu_remorca& obj1, const Masina_cu_remorca& obj2)
{
	Masina_cu_remorca obj;
	obj.masa_totala = obj1.masa_totala + obj2.masa_totala;
	return obj.masa_totala;
	
}

int operator-(const Masina_cu_remorca& obj1, const Masina_cu_remorca& obj2)
{
	Masina_cu_remorca obj;
	obj.masa_totala = obj1.masa_totala - obj2.masa_totala;
	return obj.masa_totala;
	
}

bool Masina_cu_remorca::operator <(const Masina_cu_remorca& obj)
{
	if(this->getMasa_totala() < obj.getMasa_totala()) return true;
	else return false;
}

bool Masina_cu_remorca::operator >(const Masina_cu_remorca& obj)
{
	if(this->getMasa_totala() > obj.getMasa_totala()) return true;
	else return false;

}

