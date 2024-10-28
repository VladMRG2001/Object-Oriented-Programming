//#include "sticla.hpp"
//#include "dop.hpp"
#include "sticla.cpp"
#include "dop.cpp"

/*
 Cerinte:
 1. Implementati constructorul cu parametri/fara parametri
 2. Implementati constructorul de copiere, operatorul = si destructorul
 3. Creati un vector alocat dinamic in main cu obiecte de tip Sticla
 4. Populati vectorul folosind operatorul >>
 5. Sortati vectorul dupa pret
 6. afisati Sticlele (folosind operatorul <<) care au diametru Dop > 5
*/
// Punctele 1 si 2 au fost implementate la nivelul fiecare clase in parte
// Operatorii <<, >> si = sunt supradefiniti pentru a ii spune compilatorului cum sa se comporte cu elemente de tip definit de utilizator

int main()
{
	// 3. Creati un vector de Sticla alocat dinamic
	Sticla *v;
	
	v = new Sticla[10]; // Cu new se aloca dinamic
	
	cout << "Popularea vectorului:" << endl;

	// 4. Popularea vectorului folosind >>
	for(int i = 0; i < 5; i++)
		cin >> v[i]; // Compilatorul foloseste operatorul definit de noi, nu cel de baza de la cin
		
	cout << endl << endl;
		
	// 5. Sortare dupa pret
	// Aici se face bubblesort pentru a sorta vectorul dupa pret
	cout << "Vectorul de sticle sortat dupa pret: "<< endl;
	for ( int i = 0; i < 4; i ++)
		for(int j = i + 1; j < 5; j ++)
			if ( v[i].getPret() < v[j].getPret())
				v[i].interschimbare(v[j]);
	
	for(int i = 0; i < 5; i++)
		cout << v[i];	
		
	cout << endl ;
	// Afisarea vectorului sortat
	cout << "Vectorul de preturi sortat: "<< endl;
	for(int i = 0; i < 5; i++)
		cout << v[i].getPret() << " ";
	
	
	cout << endl << endl;
	// 6. Afisarea sticlelor cu diamentrul dopului <5 folosind op definit de noi <<
	cout << "Sticlele cu diametrul dopului > 5: " << endl;
	int d = 5;	
	for( int i = 0; i < 5; i++)
		if( v[i].getDiametru() > d)
			cout << "Dopul de la marca "<< v[i].getMarca() << " are diametrul " << v[i].getDiametru() << endl;
	
	delete []v;
	
	return 0;	
	
}
