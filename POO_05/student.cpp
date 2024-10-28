#include "student.hpp"

Student::Student():Nota(),Diriginte(),nume(NULL)
{
}

Student::Student(const int* note, int nr_note, const char* nume_d, const char grupa[], const char* nume):Nota(note,nr_note),Diriginte(nume_d,grupa)
{

	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);

}

Student::Student(const Student& obj)
{
	nume = NULL;
	*this = obj;
}

Student& Student::operator=(const Student& obj)
{
	Diriginte::operator=(obj);
	Nota::operator=(obj);
	if (nume != NULL)
		delete []nume;
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume,obj.nume);
	
	return *this;
}

ostream& operator<<(ostream& out, const Student& obj)
{
	out << (Diriginte&)obj;
	out << (Nota&)obj;
	if(obj.nume != NULL)
		out << obj.nume;
	else
		out << "fara nume";
	out << " ";
	
	return out;
}

void Student::interschimbare(Student& obj)
{
	Student aux(*this);
	*this = obj;
	obj = aux;
}

Student::~Student()
{
	delete []nume;
}



