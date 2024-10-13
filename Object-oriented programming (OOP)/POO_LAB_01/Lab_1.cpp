#include <iostream>
#include<string.h>
using namespace std;

class Angajat{
    int varsta;
	char nume[20];
	char CNP[14];
	int salariu;
public:
	Angajat();
	Angajat(int v, char n[],char C[],int s);
	void afisare(); // afiseaza atributele clasei
	void modif(int v,char n[], char C[], int s); // modifica atributele clasei
	int getVarsta(); // returneaza varsta
	char* getNume(); // returneaza numele
	char* getCNP(); // returneaza CNP-ul
	int getSalariu(); // returneaza salariul
};

	Angajat::Angajat()
	{
		varsta=0;
		strcpy(nume, " ");
		strcpy(CNP, " ");
		salariu=0;
	}
	
	Angajat::Angajat(int v, char n[],char C[],int s)
	{
		varsta=v;
		strcpy(nume, n);
		strcpy(CNP, C);
		salariu=s;
	}
	
	void Angajat::afisare()
	{
		cout<<"Varsta: "<<varsta<<endl;
		cout<<"Nume: "<<nume<<endl;
		cout<<"CNP: "<<CNP<<endl;
		cout<<"Salariu: "<<salariu<<endl;
	}
	
	void Angajat::modif(int v,char n[], char C[], int s)
	{
		varsta=v;
		strcpy(nume, n);
		strcpy(CNP,C);
		salariu=s;
	}
	
	int Angajat::getVarsta()
	{
		return varsta;
	}
	
	char* Angajat::getNume()
	{
		return nume;
	}
	
	char* Angajat::getCNP()
	{
		return CNP;
	}
	
	int Angajat::getSalariu()
	{
		return salariu;
	}
	
int main()
{
	Angajat obiect(25,"Andrei","11111",2000);
	obiect.afisare();
	cout<<endl;
	obiect.modif(30,"Maria", "22222", 3000);
	obiect.afisare();
	cout<<endl;
	cout<<obiect.getNume()<<endl;
	cout<<obiect.getCNP()<<endl;
	cout<<obiect.getSalariu()<<endl;
	
	Angajat *a;
	a=new Angajat[5];
	
	a[0].modif(25,"Andrei","11111",2000);
	a[1].modif(30, "Maria", "22222", 3000);
	a[2].modif(57, "Ion", "33333", 5000);
	a[3].modif(45, "Alex", "44444", 5000);
	a[4].modif(76, "Diana", "55555", 4500);
	
	for(int i=0;i<5;i++)
	{
		a[i].afisare();
	}
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		Angajat aux;
		for(int j=i+1;j<5;j++)
		{
			if ( strcmp(a[i].getNume(),a[j].getNume()) > 0)
				{
				    Angajat aux;
				    aux = a[i];
			     	a[i] = a[j];
					a[j] = aux;
				}
		}
	}
    cout<< "Sortare alfabetica:"<< endl;	
	for(int i=0; i<5; i++)
	{
		a[i].afisare();
	}
	
	int max;
	max=a[0].getSalariu();
	for(int i=0; i<5; i++)
	{
		if(max<a[i].getSalariu())
			max=a[i].getSalariu();
	}
	
	cout<< endl;
	cout<<"Angajati cu salariu maxim:"<< endl;
	for(int i=0; i<5; i++)
	{
		if(max==a[i].getSalariu())
			cout<< a[i].getNume()<< endl;
	}
	
	return 0;
}
	
