#ifndef STICLA_HPP
#define STICLA_HPP

#include "dop.hpp"

class Sticla: public Dop{
	int pret;
	char *marca;
public:
	Sticla();
	Sticla(int, const char*, int, const char*);
	Sticla(const Sticla&);
	Sticla& operator=(const Sticla&);
	friend ostream& operator<<(ostream&, const Sticla&);
	friend istream& operator>>(istream&, Sticla&);
	int getPret();
	char* getMarca();
	void interschimbare(Sticla&);
	
	~Sticla();
};

#endif
