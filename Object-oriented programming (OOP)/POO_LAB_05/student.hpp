#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "diriginte.hpp"
#include "nota.hpp"
#include "clasa.hpp"

class Student: public Nota, public Diriginte, Clasa{
	char *nume;
public:
	Student();
	Student(const int*,int,const char*, const char [], const char*);
	Student(const Student&);
	Student& operator=(const Student&);
	~Student();
	void interschimbare(Student&);
	
	friend ostream& operator<<(ostream&, const Student&);
};

#endif


