#include "sticla.hpp"
#include "dop.hpp"
#include "sticla.cpp"
#include "dop.cpp"
int main()
{
	Sticla *v;
	
	v = new Sticla[10];
	
	for(int i = 0; i < 5; i++)
		cin >> v[i];
		
	cout << endl << endl;
		
	cout << "Vectorul de sticle sortat dupa pret: "<< endl;
	for ( int i = 0; i < 4; i ++)
		for(int j = i + 1; j < 5; j ++)
			if ( v[i].getPret() < v[j].getPret())
				v[i].interschimbare(v[j]);
	
	for(int i = 0; i < 5; i++)
		cout << v[i];	
		
	cout << endl ;
	
	cout << "Vectorul de preturi sortat: "<< endl;
	for(int i = 0; i < 5; i++)
		cout << v[i].getPret() << " ";
	
	
	cout << endl << endl;
	
	cout << "Sticlele cu diametrul dopului > 5: " << endl;
	int d = 5;	
	for( int i = 0; i < 5; i++)
		if( v[i].getDiametru() > d)
			cout << v[i].getMarca() << endl;
	
	delete []v;
	
	return 0;	
	
}
