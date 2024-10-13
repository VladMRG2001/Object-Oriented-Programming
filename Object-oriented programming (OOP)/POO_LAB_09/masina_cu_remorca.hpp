#ifndef MASINA_CU_REMORCA_HPP
#define MASINA_CU_REMORCA_HPP

#include "masina.hpp"
#include "remorca.hpp"

class Masina_cu_remorca: public Remorca, public Masina
{
protected:
	int masa_totala; 
public:
	Masina_cu_remorca();
	Masina_cu_remorca(int, int [], int, int [], const char*, const char *, int);
	Masina_cu_remorca(const Masina_cu_remorca&);
	
	Masina_cu_remorca& operator=(const Masina_cu_remorca&);

	int getMasa_totala() const;
	void afisare();
	bool operator >(const Masina_cu_remorca&);
	bool operator <(const Masina_cu_remorca&);
	friend int operator+(const Masina_cu_remorca&, const Masina_cu_remorca&);
	friend int operator-(const Masina_cu_remorca&, const Masina_cu_remorca&);

};


#endif


