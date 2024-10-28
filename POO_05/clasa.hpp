#ifndef CLASA_HPP
#define CLASA_HPP

#include "student.hpp"

class Clasa{
	int nr_elevi;
	Student* elevi;  // Adaugă o variabilă pentru a stoca vectorul de studenți
public:
	Clasa(); // Constructor fsara parametri
	Clasa(int); // Constructor care primește doar numărul de elevi
	Clasa(Student*, int);  // Constructor care primește un pointer la studenți și numărul de elevi
	Clasa(const Clasa&);
	Clasa& operator=(const Clasa&);
	~Clasa();
	
	friend ostream& operator<<(ostream&, const Clasa&);
	void sortare();
	void schimbare_diriginte(const char* );
};

#endif

