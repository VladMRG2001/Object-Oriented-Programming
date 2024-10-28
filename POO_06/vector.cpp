#include "vector.hpp"
#include "fractie.hpp"
#include"nr_complex.hpp"

template <class X>
vector<X>::vector(int dim, X *buf)
{
	this->dim = dim;
	this->buf = new X[dim];
	for(int i = 0; i < dim; i++)
	{
		this->buf[i] = buf[i];
	}
}

template <class X>
vector<X>& vector<X>::operator=(vector<X> &obj)
{	
	dim = obj.dim;
    buf = new X[dim];
	for(int i = 0; i < dim; i++)
	{
		buf[i] = obj.buf[i];
	}
    return *this;
}

template <class X>
void vector<X>::afisare()
{
	cout << "Dimensiune: " << dim << endl;
	for(int i = 0; i < dim; i++)
	{
		cout << buf[i] << " ";
	}
	cout<< endl;
}

template <class X>
void vector<X>::sortare()
{
	X temp;
	for (int i = 0; i < dim; i++)
		for(int j = i + 1; j < dim; j++)
			if(buf[i] < buf[j]) 
			{
				temp = buf[i];
				buf[i] = buf[j];
				buf[j] = temp;
			}
}

template <class X>
vector<X>::~vector()
{
	delete []buf;
}

static void test()
{
	int aux1[4] = {56, 86, 43, 35};
	vector<int> v1(4, aux1);
	v1.afisare();
	
	double aux2[4] = {534, 436346, 7536, 9423};
	vector<double> v2(4, aux2);
	v2.afisare();
	
	nr_complex *aux3 = new nr_complex[5];
	aux3[0] = nr_complex(2, 7);
	aux3[1] = nr_complex(1, 6);
	aux3[2] = nr_complex(18,12);
	aux3[3] = nr_complex(9, 1);
	aux3[4] = nr_complex(76, 9);
	vector<nr_complex> comp(5, aux3);
	comp.afisare();
	
	fractie *aux4 = new fractie[5];
	aux4[0] = fractie(6, 3);
	aux4[1] = fractie(5, 8);
	aux4[2] = fractie(11, 8);
	aux4[3] = fractie(9, 4);
	aux4[4] = fractie(18, 17);
	vector<fractie> fr(5,aux4);
	fr.afisare();
	
	v1.sortare();
	v2.sortare();
	comp.sortare();
	fr.sortare();
}

