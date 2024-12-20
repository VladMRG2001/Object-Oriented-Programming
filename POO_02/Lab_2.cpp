#include <iostream>
#include <cstring>
using namespace std;

class Biblioteca{
	int an_construire;
	char adresa[20];
	char *nume;
	char *bibliotecar;
public:
	Biblioteca(); //constructor fara parametri
	Biblioteca( int, char[], char*, char* ); //constructor cu parametri
	Biblioteca(const Biblioteca&); //constructor de copiere
	~Biblioteca(); //destructorul
	
	void afisare() const; //afiseaza atributele clasei
	void modif( int, char[], char*, char* ); //modifica atributele clasei
	char* getBibliotecar() const;
	friend int getAn(const Biblioteca&); //returneaza vechimea obiectului apelat
	friend void interschimbare(Biblioteca&, Biblioteca&); //interschimba valorile dintre 2 obiecte de tip Biblioteca
};

Biblioteca::Biblioteca()
{
	an_construire = 0;
	strcpy(adresa," ");
	nume = NULL;
	bibliotecar = NULL;
}

Biblioteca::Biblioteca( int an, char a[], char* n, char* b )
{
	an_construire = an;
	strcpy(adresa,a);
	nume = new char[strlen(n) + 1];
	strcpy(nume, n);
	bibliotecar = new char[strlen(n) + 1];
	strcpy(bibliotecar,b);
}

Biblioteca::Biblioteca(const Biblioteca&obj)
{
	an_construire = obj.an_construire;
	strcpy(adresa,obj.adresa);
	nume = new char[strlen(obj.nume) + 1];
	strcpy(nume, obj.nume);
	bibliotecar = new char[strlen(obj.nume) + 1];
	strcpy(bibliotecar, obj.bibliotecar);
}

Biblioteca::~Biblioteca()
{
	delete[] nume;
	delete[] bibliotecar;
}

void Biblioteca::afisare() const
{
	cout << "An Construire: " << an_construire << endl;
	cout << "Adresa: " << adresa << endl;
	cout << "Nume: " << nume << endl;
	cout << "Bibliotecar: " << bibliotecar << endl;
	cout << "-----------------------------\n";
}

void Biblioteca::modif( int an, char a[], char* n, char* b )
{
	if(nume != NULL)
		delete[] nume;
	nume = new char[strlen(n) + 1];
	strcpy(nume, n);
	if(bibliotecar != NULL)
		delete[] bibliotecar;
	bibliotecar = new char[strlen(b) + 1];
	strcpy(bibliotecar, b);
	strcpy(adresa,a);
	an_construire = an;
}

char* Biblioteca::getBibliotecar() const
{
	return bibliotecar;
}

int getAn(const Biblioteca& obj)
{
	return obj.an_construire;
}

void interschimbare(Biblioteca& obj1, Biblioteca& obj2)
{
	Biblioteca aux;
			
	if ( strcmp(obj1.nume, obj2.nume) > 0)
	{
		aux.modif(obj1.an_construire, obj1.adresa, obj1.nume, obj1.bibliotecar);
		obj1.modif(obj2.an_construire, obj2.adresa, obj2.nume, obj2.bibliotecar);
		obj2.modif(aux.an_construire, aux.adresa, aux.nume, aux.bibliotecar);
				
	}
}

/*
 Cerinte:
 1. Creati un obiect de tip Biblioteca si testati metodele.
 2. Creati un vector alocat dinamic de tip Biblioteca.
 3. Sortati vectorul in functie de nume
 4. Afisati cele mai vechi biblioteci
 5. Eliberati memoria de unde este nevoi
*/

int main()
{
	// 1. Creare obiect de tip Biblioteca
	Biblioteca obj(1800, "Bucuresti","Biblioteca Nationala","Iulian");
	obj.afisare(); // Metoda de afisare
	
	// Acum se modifica parametri obiectului creat
	obj.modif(1860, "Iasi","Bibloteca Moldovei","Andrei");
	obj.afisare(); // Se afiseaza noile atribute ale obiectului creat
	
	cout<<getAn(obj)<<endl; // metoda getAn
	cout<<obj.getBibliotecar()<<endl; // metoda getBibliotecar
	cout<< endl;
	
	// 2. Creare vector alocat dinamic de tip Biblioteca
	Biblioteca *v;
	v = new Biblioteca[4];
	
	v[0].modif(1870, "Cluj","Biblioteca Ardealului","Ionel");
	v[1].modif(1794, "Pitesti","Biblioteca Argeseana","Vlad");
	v[2].modif(1897, "Constanta","Biblioteca Dobrogei","Alexandru");
	v[3].modif(1894, "Timisoara","Biblioteca Banatului","Matei");

	// 3. Sortarea vectorului in functie de nume
	// Un fel de bubblesort, dar avem o funtie de interschimbare
	for(int i=0; i<4; i++)
		for(int j=i+1; j<4; j++)
		{
			interschimbare(v[i],v[j]); 
		}

	// Afisarea bibliotecilor dupa nume
	cout<< "Afisare in functie de nume :"<< endl;
	cout<< endl;
	
	for(int i=0; i<4; i++)
	{
		v[i].afisare();
	}
		
	// 4. Afisarea celor mai vechi biblioteci
	// Calcululul celui mai mic an
	int max= getAn(v[0]);
	for(int i=0; i<4; i++)
	{
		if(max > getAn(v[i]))
			{
				max=getAn(v[i]);
				cout<<"Anul in care a fost deschisa cea mai veche biblioteca: "<< max << endl;	
			}
	}
	cout<< endl;
	// Afisarea bibliotecilor deschise in cel mai mic an
	cout<< "Afisare cele mai vechi biblioteci :" << endl;
	cout<< endl;
	
	for(int i=0; i<4; i++)
	{
		if(max==getAn(v[i]))
			v[i].afisare();
	}
	
	// 5. Eliberare memorie 
	delete []v;		
	
	return 0;
}
