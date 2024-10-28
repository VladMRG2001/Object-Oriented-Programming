#ifndef STICLA_HPP
#define STICLA_HPP

#include "dop.hpp"
// Clasa Sticla este copilul lui Dop
class Sticla: public Dop{
	int pret;
	char *marca;
public:
	Sticla(); // Constructorul fara parametri
	Sticla(int, const char*, int, const char*); // Constructorul cu parametri
	Sticla(const Sticla&); // Constructorul de copiere
	Sticla& operator=(const Sticla&); // Operatorul =
	friend ostream& operator<<(ostream&, const Sticla&); // Operatorul de afisare <<
	friend istream& operator>>(istream&, Sticla&); // Operatorul de populare a vectorului >>
	int getPret(); // Getter pentru pret
	char* getMarca(); // Getter pentru marca
	void interschimbare(Sticla&); // Metoda de interschimbare
	
	~Sticla(); // Destructor
};

#endif
