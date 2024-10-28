#include "portocale.cpp"
#include "banana.cpp"
#include "nuci.cpp"
#include "morcovi.cpp"
#include "baza.cpp"

/*
Cerinte:
 1. Implementati toate metodele astfel incat programul sa functioneze corect
 2. In main creati un vector de 10 elemente care sa contina Portocale, Banana, Nuci,
 Morcovi si sa il afisati de forma: Nume clasa -> pret total, exemplu: Morcovi -> 130 lei etc
 3. Calculati si afisati pretul total al alimentelor din vector(adica faceti suma preturilor finale)
 4. Sortati si afisati vectorul astfel incat sa aveti alimentele in ordinea: Banana, Portocale,
 Morcovi, Nuci (adica bananele se fie primele din vector dupa portocalele etc)
 5. Afisati costul total al tuturor Portocalelor(adica suma la pretul final de la toate elementele
 de tip Portocale)
 Hint: Trebuie sa aveti o clasa comuna!
 */
// 1 a fost facut in fiecare clasa in parte
// Clasa Baza este clasa comuna despre care se vorbeste in hint

int main()
{
	// 2. Vectorul de fructe de tip Baza
	Baza **v;

	v = new Baza*[10];
	Baza *aux;
	v[0] = new Portocale(400,5);
	v[1] = new Portocale(350,8);
	v[2] = new Banana(250);
	v[3] = new Banana(190);
	v[4] = new Nuci(300,9);
	v[5] = new Nuci(600,6);
	v[6] = new Morcovi(700, 9);
	v[7] = new Morcovi(800, 10);
		
	// Afisare fructe
	cout << "\nLista initiala cu fructele: " << endl;
	for ( int i = 0; i < 8; i++)
		v[i]->afisare();	
	cout << endl;
	
	// 3. Afisam pretul total
	int total = 0;
	for ( int i = 0; i < 8; i++)
			total = total + v[i]->PretTotal();

	cout << "Suma totala este: " << total << endl << endl;

	// 4. Bublesort pentru afisarea in functie de pret (nu asta era in cerinta cred)
	for(int i = 0; i < 7; i++)
		for(int j = i + 1; j < 8; j++)
		{
			if(v[i]->OrdineFructe() > v[j]->OrdineFructe())
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	
	// Afisare fructe sortate
	cout << "Lista sortata in noua ordine: " << endl;
	for ( int i = 0; i < 8; i++)
		v[i]->afisare();
		
	cout << endl;
		
	// 5. Costul tuturor portocalelor
	cout << "Afisare pret portocale: " << endl;
	int sum = 0;
	for ( int i = 0; i < 8; i++)
		if(v[i]->isPortocala())
			sum = sum + v[i]->PretTotal();

	cout << "Suma pretului pentru portocale este: " << sum << endl;
		
	delete[] v;
	
	return 0;
}
