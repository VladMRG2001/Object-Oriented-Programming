#include "fractie.hpp"

fractie::fractie(int aa, int bb)
{
	a = aa; 
	b = bb; 
}

fractie::fractie(const fractie &f)
{
    a = f.a;
    b = f.b;
}

fractie& fractie::operator=(const fractie &f)
{	
	a = f.a;
    b = f.b;
    return *this;
}

double fractie::getValoare() const
{	
	double f;
    if(b != 0)
    	{
    		f=(double)a/b;
        	return f;		
		}
        
    else return 0;
}

bool fractie:: operator <(const fractie& f){
	if((*this).getValoare() < f.getValoare()) return true;
	else return false;
}

ostream& operator<<(ostream& out, const fractie& f)
{
    if(f.b != 0)
        out << f.a << "/" << f.b << " ";
    return out;
}

