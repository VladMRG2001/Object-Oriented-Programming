#ifndef NOTA_HPP
#define NOTA_HPP

#include <iostream>
using namespace std;

class Nota{
protected:
	int *note;
	int nr_note;
public:
	Nota(); // contructor fara parametri
	Nota(const int*, int ); // constructor cu parametri
	friend ostream& operator<<(ostream&, const Nota&); // constructor <<
	Nota& operator=(const Nota&); // constructor =
	int getMedie(); // metoda getter de medie
	~Nota(); // destructor
};

#endif


