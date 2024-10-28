#ifndef DOP_HPP
#define DOP_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Dop{
protected:
	int diametru;
	char *tip;
	
public:
	Dop(); // Constructorul fara parametri
	Dop(int, const char*); // Constructorul cu parametri
	Dop(const Dop&); // Constructorul de copiere
	Dop& operator=(const Dop&); // Operatorul =
	friend ostream& operator<<(ostream&, const Dop&); // Operatorul de afisare <<
	friend istream& operator>>(istream&, Dop&); // Operatorul de populare a vectorului >>
	int getDiametru(); // Getter pentru diametru
	char* getTip(); // Getter pentru tip
	void interschimbare(Dop&); // Metoda de interschimbare
	
	~Dop(); // Destructor
};

#endif
