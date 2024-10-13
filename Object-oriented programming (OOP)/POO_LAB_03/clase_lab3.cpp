#include "header_lab3.hpp"

Fractie::Fractie(int aa, int bb)
{
	a = aa; //numarator
	b = bb; //numitor
}

Fractie::Fractie(const Fractie &f)
{
    a = f.a;
    b = f.b;
}

Fractie& Fractie::operator=(const Fractie &f)
{	
	a = f.a;
    b = f.b;
    return *this;
}

Fractie::~Fractie()
{
    a = 0;
    b = 0;
}

double Fractie::getValoare() 
{	
	double f;
    if(b != 0)
    	{
    		f=(double)a/b;
        	return f;		
		}
        
    else return 0;
}

Fractie Fractie::getInv() 
{
    Fractie f;
    f.b = this->a;
    f.a = this->b;
    return f;
}

void Fractie::setdata(int aa, int bb)
{
    a = aa;
	b = bb;
}

float Fractie::getA()
{
    return a;
}

float Fractie::getB()
{
    return b;
}

Fractie operator+(const Fractie& f1, const Fractie& f2)
{
    Fractie f;
    f.a = f1.a * f2.b + f1.b * f2.a;
    f.b = f1.b * f2.b;
    return f;
}

Fractie operator-(const Fractie& f1, const Fractie& f2)
{
    Fractie f;
    f.a = f1.a * f2.b - f1.b * f2.a;
    f.b = f1.b * f2.b;
    return f;
}

Fractie operator*(const Fractie& f1, const Fractie& f2)
{
    Fractie f;
    f.a = f1.a * f2.a;
    f.b = f1.b * f2.b;
    return f;
}

Fractie operator/(const Fractie& f1, const Fractie& f2)
{
	Fractie f;
    f.a = f1.a / f2.a;
    f.b = f1.b / f2.b;
    return f;
}

Fractie operator -(const Fractie& f)
{	
	Fractie fr;
	fr.a = f.a*(-1);
	fr.b = f.b;
	return fr;
}

Fractie& Fractie::operator+=(const Fractie& f)
{
    *this = *this + f;
    return *this;
}

Fractie& Fractie::operator-=(const Fractie& f)
{
    *this = *this - f;
    return *this;
}

Fractie& Fractie::operator*=(const Fractie& f)
{
    *this = *this * f;
    return *this;
}

Fractie& Fractie::operator/=(const Fractie& f)
{
    *this = *this/f;
    return *this;
}

bool Fractie:: operator==(const Fractie & f){
	if(((*this).a==f.a)&&((*this).b==f.b)) return true;
	else return false;
}

bool Fractie:: operator!=(const Fractie& f){
	if(((*this).a!=f.a)&&((*this).b!=f.b)) return true;
	else return false;
}

bool Fractie:: operator <(const Fractie& f){
	if(((*this).a<f.a)&&((*this).b<f.b)) return true;
	else return false;
}

bool Fractie:: operator <=(const Fractie& f){
	if(((*this).a<=f.a)&&((*this).b<=f.b)) return true;
	else return false;
}

bool Fractie:: operator >(const Fractie& f){
	if(((*this).a>f.a)&&((*this).b>f.b)) return true;
	else return false;
}

bool Fractie:: operator >=(const Fractie& f){
if(((*this).a>=f.a)&&((*this).b>=f.b)) return true;
	else return false;
}
