#include "vector.cpp"
#include "nr_complex.cpp"
#include "fractie.cpp"

int main()
{
	cout << "Vector de tip int:" << endl;
	int aux1[4] = {56, 86, 43, 35};
	vector<int> v1(4, aux1);
	v1.afisare();
	cout << endl << "Sortare: " << endl; 
	v1.sortare();
	v1.afisare();
	
	cout << endl << "Vector de tip double:" << endl;
	double aux2[4] = {534, 436346, 7536, 9423};
	vector<double> v2(4, aux2);
	v2.afisare();
	cout << endl << "Sortare: " << endl; 
	v2.sortare();
	v2.afisare();
	
	cout << endl << "Vector de nr complex:" << endl;
	nr_complex *aux3 = new nr_complex[5];
	aux3[0] = nr_complex(2, 7);
	aux3[1] = nr_complex(1, 6);
	aux3[2] = nr_complex(18,12);
	aux3[3] = nr_complex(9, 1);
	aux3[4] = nr_complex(76, 9);
	vector<nr_complex> comp(5, aux3);
	comp.afisare();
	cout << endl << "Sortare: " << endl;
	comp.sortare();
	comp.afisare();
	
	cout << endl << "Vector de fractie:" << endl;
	fractie *aux4 = new fractie[5];
	aux4[0] = fractie(6, 3);
	aux4[1] = fractie(5, 8);
	aux4[2] = fractie(11, 8);
	aux4[3] = fractie(9, 4);
	aux4[4] = fractie(18, 17);
	vector<fractie> fr(5,aux4);
	fr.afisare();
	cout << endl << "Sortare: " << endl;
	fr.sortare();
	fr.afisare();
	
	return 0;
}

