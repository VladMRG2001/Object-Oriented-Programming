#ifndef REMORCA_HPP
#define REMORCA_HPP

#include "vehicul.hpp"

class Remorca: virtual public Vehicul
{
protected:
	int dimensiuni[3]; 
	int greutate_maxima;
public:
	Remorca();
	Remorca(int* , int, int, const char*);
	Remorca(const Remorca&);
	Remorca& operator=(const Remorca&);

	int getGreutate_max();
	void getDimensiuni();
	void afisare();
};


#endif


