#include "nota.hpp"

Nota::Nota():note(NULL),nr_note(0){
}
Nota::Nota(const int *note, int nr_note):nr_note(nr_note){
	this->note=new int [nr_note];
	for (int i=0; i<nr_note ; i++)
	{
		this->note[i]=note[i];
	}
}
Nota& Nota::operator=(const Nota& obj){
	if (this->note!= NULL)
		delete []this->note;
	nr_note=obj.nr_note;
	this->note = new int[obj.nr_note];
	for(int i=0;i<nr_note;i++)
		this->note[i]=obj.note[i];
	return *this;
}
ostream& operator<<(ostream& out, const Nota& obj)
{
	out << obj.nr_note << " ";
	for(int i=0; i< obj.nr_note;i++)
		out<<obj.note[i] << " ";
	return out;
}
int Nota::getMedie()
{
	int s=0;
	float medie;
	
	for(int i=0; i<nr_note; i++)
	{
		s=s+note[i];
	}
	medie=(float)s/nr_note;
	return medie;
}
	
Nota::~Nota()
{
	delete []note;	
}
	



