#ifndef NOTA_HPP
#define NOTA_HPP

#include <iostream>
using namespace std;

class Nota{
protected:
	int *note;
	int nr_note;
public:
	Nota();
	Nota(const int*, int );
	friend ostream& operator<<(ostream&, const Nota&);
	Nota& operator=(const Nota&);
	int getMedie();
	~Nota();
};

#endif


