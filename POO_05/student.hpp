#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "diriginte.hpp"
#include "nota.hpp"

class Student: public Nota, public Diriginte{ // Mosteneste de la Nota si Diriginte
	char *nume;
public:
	Student(); // constructor fara parametri
	Student(const int*,int,const char*, const char [], const char*); // constructor cu parametri
	Student(const Student&); // constructor de copiere
	Student& operator=(const Student&); // constructor de atribuire =
	~Student(); // destructor
	void interschimbare(Student&); // metoda de interschimbare
	
	friend ostream& operator<<(ostream&, const Student&); // constructor de afisare <<
};

#endif


