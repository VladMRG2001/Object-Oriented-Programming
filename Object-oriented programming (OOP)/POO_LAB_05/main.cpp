//#include "clasa.hpp"
#include "clasa.cpp"
#include "diriginte.cpp"
//#include "diriginte.hpp"
#include "nota.cpp"
#include "student.cpp"
//#include "studenti.hpp"

int main()
{
	Student* v = new Student[10];
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
	cout << " Clasa"<< endl << clasa;
}

	


