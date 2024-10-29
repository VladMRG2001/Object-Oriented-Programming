#include "clasa.cpp"
#include "diriginte.cpp"
#include "nota.cpp"
#include "student.cpp"

/*
 Cerinte:
 1. Implementati toate metodele astfel incat programul sa functioneze corect
 2. Creati in main un vector alocat dinamic de tip Student acesta sa contina minim 10
 studenti(citirea o puteti face cum doriti)
 3. Sortati vectorul de studenti in functie de media notelor Studentului
 4. Schimbati numele dirigintelui de la clasa
 5. Adaugati un nou elev pe pozitia X (adica numarul de elevi din vector va creste cu 1
*/

int main()
{
	// 1. Declaram un vector de obiecte tip Student
    Student *s=new Student[5];

    // 2. Alocam datele
    int nota1[4] = { 10, 3, 6, 7 };
    int nota2[4] = { 7, 2, 6, 8 };
    int nota3[3] = { 10, 10, 4 };
    int nota4[4] = { 10, 5, 8, 7 };
    int nota5[4] = { 6, 8, 5, 6};

    s[0] = Student(nota1, 4, "Dna Cosmina", "323AB",4, "Marius");
    s[1] = Student(nota2, 4, "Dna Andrada", "312AB",4, "Vasile");
    s[2] = Student(nota3, 3, "Dnul Ghiu", "323AB",4, "Ruxi");
    s[3] = Student(nota4, 4, "Dna Maria", "324AB",4, "Ana");

    cout << "Studentii in oridnea initiala sunt: " << endl;;
    for(int i = 0 ; i < 4 ; i ++)
	    cout << s[i]<< endl;

    // 3. Sortam dupa medie
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 4; j++) {
            if( s[i].getMedie() >= s[j].getMedie() ) {
                s[i].interschimbare(s[j]);
            } 
        }
    }

    cout << "Studentii sortati crescator dupa medie sunt: " << endl;
    for (int j = 0; j < 4 ; j++) {
        std::cout << s[j] << endl;
    }
    
    // 4. Schimbam numele dirigintelui 2
    s[2].schimbare_nume("Dirig Nou");
    
    // 5. Adaugam un elev pe pozitia X
    std::cout << "Introduceti pozitia pe care adaugam un student nou [0-4]: ";
    int poz;
    std::cin >> poz;
    Student *arr = new Student[5];

    for (int i = 0; i < poz; i++) {
        arr[i] = s[i];
    }

    for (int i = poz+1; i < 5; i++) {
        arr[i] = s[i-1];
    }

    arr[poz] = Student(nota5, 4, "Vidican x_x", "354AB",4, "Alexandra");

    for (int j = 0; j < 5; j++) {
    arr[j].setNrelevi(5); // Setați numărul corect de elevi
    }

    cout << "Noua lista de studenti: " << endl;
    for (int j = 0; j < 5 ; j++) {
        std::cout << arr[j] << endl;
    }

    delete[] s;
    delete[] arr;

    return 0;
}

	


