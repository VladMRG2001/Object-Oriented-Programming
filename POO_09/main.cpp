#include "ferma.cpp"
#include "vaci.cpp"
#include "gaini.cpp"
#include "cai.cpp"
#include "porci.cpp"
#include "capre.cpp"

/*
Realizati un program de management pentru o ferma.

Ferma contine un depozit cu mancare, cu o capacitate de 2000 kg si mai multe hambare pentru animale. 
Stiind datele despre cat mananca fiecare animal pe zi, realizati o estimare pentru urmatoarele 365 de zile.
 
La ferma se gasesc:
 	- 10 vaci care mananca 30 kg nutreț pe zi
	- 100 de gaini care mananca 5 kg de grăunțe pe zi
 	- 2 cai care mananca 8 kg de nutreț pe zi
 	- 8 porci care mananca 4 kg de graunțe si 5 kg de iarba pe zi
 	- 4 capre care mananca 4 kg de nutreț pe zi

In estimarea pentru urmatoarele 365 de zile calculati:
	- ce cantitate din fiecare mancare trebuie stocata in depozit astfel incat aceasta sa ajunga cat mai multe zile
 	- de cate ori trebuie sa fie reumplut depozitul
 	- afisati cata mancare va ramane la finalul anului (in total si pe fiecare categorie)
 	- cata mancare se consuma pe zi(in total si pe fiecare categorie)
 	- top 3 consumatori de mancare (ca si cantitate in kg, nu conteaza tipul mancarii)

 Afisati detaliile despre fiecare animal(nume, numar de animale, cat mananca si ce mananca).
 */

int main() 
{
	Ferma **v;
	Ferma *aux;
	
	v = new Ferma*[5];
	
	v[0] = new Vaci ("Vaci", 10, "Nutret", 30);
	v[1] = new Gaini("Gaini", 100, "Graunte", 5);
	v[2] = new Cai("Cai", 2, "Nutret", 8);
	v[3] = new Porci("Porci", 8, "Graunte", 4, "Iarba", 5);
	v[4] = new Capre("Capre", 4, "Nutret" , 4);
	
	cout << "Situatia de la ferma este: " << endl << endl;
	
	for(int i = 0 ; i < 5 ; i ++)
	 v[i]->afisare();
	 
	float cant_t = 0;
	
	for(int i = 0 ; i < 5 ; i ++)
	{
		cant_t = cant_t + v[i]->getCantTot();
	}
	
	float cant_nutret = 0, cant_graunte = 0, cant_iarba;
	
	for(int i = 0 ; i < 5 ; i ++)
	{
		if(strcmp(v[i]->getMancare(),"Nutret") == 0)
		{
			cant_nutret = cant_nutret + v[i]->getCant();
		}
		
		else 
		{
			if(strcmp(v[i]->getMancare(),"Graunte") == 0)
			{
		 		cant_graunte = cant_graunte + v[i]->getCant();
			}
		}
		
	}
	
	cant_iarba = cant_t - (cant_nutret + cant_graunte);

	float nutret, graunte, iarba, cap_hambar;
	cap_hambar = 2000;

	nutret = (cant_nutret / cant_t) * cap_hambar ;
	graunte = (cant_graunte / cant_t) * cap_hambar;
	iarba =  (cant_iarba / cant_t) * cap_hambar ;
	 
	cout << "Cantitatea stocata in hambar pt a ajunge cat mai multe zile: " << endl << endl;
	cout << "Nutret: " << nutret << endl;
	cout << "Graunte: " << graunte << endl;
	cout << "Iarba: " << iarba << endl;
	
	int gol, reumpleri;
	gol = cap_hambar / cant_t;
	reumpleri = 365/gol +1;
	cout << endl << "Hambarul trebuie reumplut de " << reumpleri << " ori" << endl;

	float ramas_t, ramas_nutret, ramas_graunte, ramas_iarba;
	ramas_t = (reumpleri* cap_hambar) - (cant_t * 365);
	cout << endl << "Mancare ramasa la final de an in total: " << ramas_t << endl;

	ramas_nutret = (cant_nutret/ cant_t) * ramas_t;
	ramas_graunte = (cant_graunte/ cant_t) * ramas_t;
	ramas_iarba = (cant_iarba/ cant_t) * ramas_t;
	
	cout << endl << "Nutret ramas la final de an: " << ramas_nutret << endl;
	cout << endl << "Graunte ramase la final de an: " << ramas_graunte << endl;
	cout << endl << "Iarba ramasa la final de an: " << ramas_iarba << endl;
	
	cout << endl << "Se consuma pe zi :" << endl << endl;
	cout << "In total: " << cant_t << endl;
	cout << "Nutret: " << cant_nutret << endl;
	cout << "Graunte: " << cant_graunte << endl;
	cout << "Iarba: " << cant_iarba << endl;

	for(int i = 0; i < 5; i++)
		for(int j = i; j <4; j++)
			if(v[i]->getCantTot()<v[j]->getCantTot())
			{
				aux = v[i];
				v[i] = v[j];
				v [j] = aux;
			}
			
	cout <<	endl << "Top 3 consumatori: " << endl << endl;
	for(int i = 0; i < 3; i++)
		cout << v[i]->getNume() << endl;
			
	return 0;
}
