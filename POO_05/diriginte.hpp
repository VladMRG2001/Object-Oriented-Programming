#ifndef DIRIGINTE_HPP
#define DIRIGINTE_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Diriginte{
protected:
	char *nume;
	char grupa[7];
public:
	Diriginte(); // constructor fara parametri
	Diriginte(const char*, const char []); // constructor cu parametri
	Diriginte(const Diriginte&); // contructor de copiere
	Diriginte& operator=(const Diriginte&); // constructor de atribuire =
	friend ostream& operator<<(ostream&, const Diriginte&); // constructor de afisare <<
	void schimbare_nume(const char*); // metoda de schimbare nume
	
	~Diriginte(); // destructor
	
	
};
#endif



