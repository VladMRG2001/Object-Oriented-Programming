//#include "clasa.hpp"
#include "clasa.cpp"
#include "diriginte.cpp"
//#include "diriginte.hpp"
#include "nota.cpp"
#include "student.cpp"
//#include "studenti.hpp"

/*
 Cerinte:
 1. Implementati toate metodele astfel incat programul sa functioneze corect
 2. Creati in main un vector alocat dinamic de tip Student acesta sa contina minim 10
 studenti(citirea o puteti face cum doriti)
 3. Sortati vectorul de studenti in functie de media notelor Studentului
 4. Schimbati numele dirigintelui de la clasa
 5. Adaugati un nou elev pe pozitia X (adica numarul de elevi din vector va creste cu 1
*/

// 1 a fost implementat in toate clasele
int main()
{
	// 2. Alocarea dinamica a 10 studenti
	Student* v = new Student[10];
	// Declarare note 
	int nota1[2] = {6, 3};
	int nota2[2] = {4, 6};
	int nota3[2] = {10, 9};
	int nota4[2] = {9, 8};
	int nota5[2] = {10, 2};
	int nota6[2] = {5, 9};
	int nota7[2] = {9, 3};
	int nota8[2] = {10, 9};
	int nota9[2] = {10, 7};
	int nota10[2] = {7, 4};
	
	// Popularea vectorului de studenti
	v[0] = Student(nota1,2,"Prof 1","1","Alexandru");
	v[1] = Student(nota2,2,"Prof 2","2","Liviu");
	v[2] = Student(nota3,2,"Prof 3","3","Silviu");
	v[3] = Student(nota4,2,"Prof 4","4","Laurentiu");
	v[4] = Student(nota5,2,"Prof 5","5","Claudiu");
	v[5] = Student(nota6,2,"Prof 6","6","Cornel");
	v[6] = Student(nota7,2,"Prof 7","7","Tavi");
	v[7] = Student(nota8,2,"Prof 8","8","Marius");
	v[8] = Student(nota9,2,"Prof 9","9","Ion");
	v[9] = Student(nota10,2,"Prof 10","10","Andrei");

	
	Clasa clasa(v,10);
	cout << "Elevii Clasei:"<< endl << clasa;
}

	


