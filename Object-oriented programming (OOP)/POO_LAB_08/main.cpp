#include "portocale.cpp"
#include "banana.cpp"
#include "nuci.cpp"
#include "morcovi.cpp"
#include "baza.cpp"

int main()
{
	Baza **v;
	
	v = new Baza*[10];
	Baza *aux;
	v[0] = new Portocale(400,5);
	v[1] = new Portocale(350,8);
	v[2] = new Banana(250);
	v[3] = new Banana(190);
	v[4] = new Nuci(349,9);
	v[5] = new Nuci(470,6);
	v[6] = new Morcovi(700, 9);
	v[7] = new Morcovi(800, 10);
		
	
	for ( int i = 0; i < 8; i++)
		v[i]->afisare();
		

	cout << endl << endl;
	
	for(int i = 0; i < 7; i++)
		for(int j = i + 1; j < 8; j++)
		{
			if(v[i]->PretTotal() < v[j]->PretTotal())
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	
	cout << "Sortare: " << endl << endl;
	for ( int i = 0; i < 8; i++)
		v[i]->afisare();
		
	cout << endl << endl;
		
	cout << "Afisare pret portocale: " << endl << endl;
	for ( int i = 0; i < 8; i++)
		if(v[i]->isPortocala())
			v[i]->PretTotal();
			
	delete []v;
	
	
	return 0;
}
