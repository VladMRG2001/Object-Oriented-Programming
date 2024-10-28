#ifndef CAI_HPP
#define CAI_HPP

#include "ferma.hpp"

class Cai : public Ferma
{
	char *nume;	
	int nr_cai;
	char *mancare_cai;
	int cant_mancare_cai;
	
public:
		Cai();
		Cai(const char*, int, const char*, int);
		
		void afisare();
		
		int getCantTot();
		int getCant();
		char* getMancare();
		char* getNume();
		
		~Cai();
};

#endif

