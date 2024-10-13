#include"nr_complex.hpp"
#include<math.h>

nr_complex::nr_complex(double a , double b )
{
    imaginar = b;
    real = a;
}

nr_complex::nr_complex(const nr_complex &c)
{
    imaginar = c.imaginar;
    real = c.real;
}

nr_complex& nr_complex::operator=(const nr_complex &c)
{
    real = c.real;
    imaginar = c.imaginar;
    return *this;
}

ostream& operator<<(ostream& out, nr_complex& c)
{
    out << c.real << "+" << c.imaginar << "j" << " ";
    return out;
}

double nr_complex::getValoare() const
{
	double r;
	r = sqrt((this->real)*(this->real) + (this->imaginar)*(this->imaginar));
	return r;
}

bool nr_complex:: operator <(const nr_complex& c)
{
	if((*this).getValoare() < c.getValoare()) return true;
	else return false;
}
