#include "sticla.hpp"

Sticla::Sticla():pret(0),marca(NULL)
{
	
}

Sticla::Sticla(int diametru, const char* tip, int pret, const char* marca ):Dop(diametru, tip),pret(pret)
{
	this->marca =  new char[strlen(marca) + 1];
	strcpy(this->marca,marca);
}

Sticla::Sticla(const Sticla& obj)
{
	marca = NULL;
	*this = obj;
}

Sticla& Sticla::operator=(const Sticla& obj)
{	
	(Dop&)(*this) = obj;
	
	this->pret = obj.pret;
	if(marca != NULL)
		delete []marca;
		
	this->marca = new char[strlen(obj.marca) + 1];
	strcpy(this->marca,obj.marca);
	
	return *this;
}

ostream& operator<<(ostream& out, const Sticla& obj)
{
	out << (Dop&)obj;
	out << "Pret: " << obj.pret << endl;
	out << "Marca: ";
		if(obj.marca != NULL)
		out << obj.marca << endl << endl;
	
	return out;
}

istream& operator>>(istream& in, Sticla& obj)
{
	in >> (Dop&)obj;
	cout << "Pret :";
		in >> obj.pret;
	char buffer[100];
	cout << "Marca :";
	in >> buffer;
	if (obj.marca != NULL)
		delete []obj.marca;
	obj.marca = new char[strlen(buffer) + 1];
	strcpy(obj.marca,buffer);
	
	return in;
}

int Sticla::getPret()
{
	return pret;
}

char* Sticla::getMarca()
{
	return marca;
}

void Sticla::interschimbare(Sticla& v)
{
	Sticla aux(*this);
	*this = v;
	v = aux;
}

Sticla::~Sticla()
{
	delete []marca;
}
