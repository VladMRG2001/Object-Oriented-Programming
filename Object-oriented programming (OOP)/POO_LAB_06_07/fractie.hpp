#ifndef FRACTIE_HPP
#define FRACTIE_HPP

#include <iostream>

using namespace std;

class fractie
{
private:
	int a; 
	int b; 

public:
	fractie(int aa=0,int bb=0); 
	fractie(const fractie&);
	fractie & operator=(const fractie&);
	double getValoare() const;
	friend ostream& operator<<(ostream&, const fractie&);
	bool operator <(const fractie&);
	
};

#endif
