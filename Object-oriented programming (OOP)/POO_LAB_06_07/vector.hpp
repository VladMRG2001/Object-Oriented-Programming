#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include "fractie.hpp"
#include"nr_complex.hpp"
using namespace std;

template <class X >
class vector{
	int dim;
	X *buf;
public:
	vector(int, X*);
	vector& operator=(vector&);
	void afisare();
	void sortare();	
	~vector();
};

#endif
