#include "masina_cu_remorca.cpp"
#include "masina.cpp"
#include "remorca.cpp"
#include "baza.cpp"
#include "vehicul.cpp"

/*
Cerinte:
 1. Implementati toate metodele astfel incat programul sa functioneze corect
 2. In main initializati un vector de elemente neomogene, adica un vector care sa contina
 obiecte de tip Vehicul, Remorca si Masina si Masina_cu_remorca. Minim cate un obiect
 din fiecare.
 3. Sortati vectorul in functie de pret si afisati vectorul.
 4. Implementati operatorul +, -, <, > pentru clasa Masina_cu_remorca si folositi operatorii
 intr-un exemplu in main.
 */
// 1 a fost facut pentru fiecare clasa in parte
int main()
{
	// 2. Creare vector de elemente neomogene (cate doua din fiecare)
	Baza **v;
	
	v = new Baza*[10];
	Baza *aux;
	int dim_remorca1[3] = {6,2,7};
	int dim_remorca2[3] = {9,2,8};
	int dim_masina1[3] = {7,8,2};
	int dim_masina2[3] = {2,8,8};

	v[0] = new Vehicul("Ion", 5600);
	v[1] = new Vehicul("Maria", 8700);
	v[2] = new Remorca(dim_remorca1,350,7540,"Iancu");
	v[3] = new Remorca(dim_remorca2,950,1500,"Andrei");
	v[4] = new Masina(dim_masina1,"BMW", "Cosmin", 8500);
	v[5] = new Masina(dim_masina2,"Dacia", "Rares", 5700);
	v[6] = new Masina_cu_remorca(3000, dim_remorca1, 500, dim_masina1, "Audi", "Andreea", 9700 );
	v[7] = new Masina_cu_remorca(3500, dim_remorca2, 820, dim_masina2, "Renault", "Iulia", 3800 );
	
	// Afisarea vectorului
	cout << "\nAfisare vector de elemente: " << endl << endl;
	for ( int i = 0; i < 8; i++)
		v[i]->afisare();
		
	cout << endl << endl;
	
	// 3. Bubblesort pentru sortare in functie de pret
	for(int i = 0; i < 7; i++)
		for(int j = i + 1; j < 8; j++)
		{
			if(v[i]->getPret() < v[j]->getPret())
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
		 
	cout << "Vector sortat in functie de pret: " << endl << endl;
	for ( int i = 0; i < 8; i++)
		v[i]->afisare();
		
	cout << endl;
	

	Masina_cu_remorca obj1 (2600, dim_remorca1, 980, dim_masina1, "Lada", "Ioana", 3500 );
	Masina_cu_remorca obj2 (2100, dim_remorca2, 270, dim_masina2, "Dacia", "Catalin", 8400 );
	// 4. Operatorii +-<>
	cout << "Operatorii + - < > : " << endl << endl;
	obj1.afisare();
	obj2.afisare();
	
	cout << endl;
	
	cout << "Operatorul + : " << operator+(obj1,obj2) << endl;
	cout << "Operatorul - : " << operator-(obj1,obj2) << endl;
	cout << "Operatorul < : " << obj1.operator<(obj2) << endl;
	cout << "Operatorul > : " << obj1.operator>(obj2) << endl;
	
	for(int i=0; i < 8; i++)
	{
		delete v[i];
	}
	
	delete []v;
	
	return 0;
	
}


