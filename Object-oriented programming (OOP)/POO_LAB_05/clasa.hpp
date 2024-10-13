#ifndef CLASA_HPP
#define CLASA_HPP

#include "student.hpp"

class Clasa{
	int nr_elevi;
public:
	Clasa();
	Clasa(int);
	Clasa(const Clasa&);
	Clasa& operator=(const Clasa&);
	~Clasa();
	
	//friend ostream& operator<<(ostream&, const Clasa&);
	void sortare();
	void schimbare_diriginte(const char* );
};

#endif

