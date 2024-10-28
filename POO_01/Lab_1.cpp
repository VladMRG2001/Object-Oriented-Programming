#include <iostream>
#include <cstring> // Folosim <cstring> in loc de <string.h> in C++
using namespace std;

// declararea clasei Angajati cu atribute, metode si contructori si getters
class Angajat { 
    int varsta;
    char nume[20];
    char CNP[14];
    int salariu;

public:
    Angajat();
    Angajat(int v, char n[], char C[], int s);
    void afisare(); // afiseaza atributele clasei
    void modif(int v, char n[], char C[], int s); // modifica atributele clasei
    int getVarsta(); // returneaza varsta
    char* getNume(); // returneaza numele
    char* getCNP(); // returneaza CNP-ul
    int getSalariu(); // returneaza salariul
};
// contructor gol
Angajat::Angajat() {
    varsta = 0;
    strcpy(nume, " ");
    strcpy(CNP, " ");
    salariu = 0;
}
// constructor cu parametrii
Angajat::Angajat(int v, char n[], char C[], int s) {
    varsta = v;
    strcpy(nume, n);
    strcpy(CNP, C);
    salariu = s;
}
// metoda de afisare
void Angajat::afisare() {
    cout << "Varsta: " << varsta << endl;
    cout << "Nume: " << nume << endl;
    cout << "CNP: " << CNP << endl;
    cout << "Salariu: " << salariu << endl;
}
// metoda de modificare 
void Angajat::modif(int v, char n[], char C[], int s) {
    varsta = v;
    strcpy(nume, n);
    strcpy(CNP, C);
    salariu = s;
}
// getter de varsta
int Angajat::getVarsta() {
    return varsta;
}
// getter de nume
char* Angajat::getNume() {
    return nume;
}
// getter de CNP
char* Angajat::getCNP() {
    return CNP;
}
// getter de salariu
int Angajat::getSalariu() {
    return salariu;
}

/*
Cerinte:
 1. creati un obiect si apelati metodele (getSalariu, getNume, modif si afisare)
 2. creati un vector de Angajati
 3. sortati vectorul alfabetic dupa campul nume
 4. afisati angajatii cu salariu maxim
*/

int main() {
    // 1. Creare obiect de tip Angajat
    Angajat obiect(25, "Andrei", "11111", 2000);
    obiect.afisare(); // afisarea obiectului creat
    cout << endl;
    cout << obiect.getSalariu() << endl; // testare getSalariu initial
    cout << obiect.getNume() << endl; // testare getNume initial
    cout << obiect.getCNP() << endl; // testare getCNP initial
    cout << endl;
    
    obiect.modif(30, "Maria", "22222", 3000); // schimbarea parametrilor obiectului
    obiect.afisare(); // verificare schimbare
    cout << endl;
    cout << obiect.getSalariu() << endl; // testare getSalariu final
    cout << obiect.getNume() << endl; // testare getNume final
    cout << obiect.getCNP() << endl; // testare getCNP final
    cout << endl;

    // 2. Creare vector de Angajati (5 in acest caz)
    Angajat *a = new Angajat[5];
    
    a[0].modif(25, "Andrei", "11111", 2000); 
    a[1].modif(30, "Maria", "22222", 6000);
    a[2].modif(57, "Ion", "33333", 6000);
    a[3].modif(45, "Alex", "44444", 5000);
    a[4].modif(76, "Diana", "55555", 4500);
    
    // Afisarea obiectelor create
    for (int i = 0; i < 5; i++) {
        a[i].afisare();
    }
    
    cout << endl;

    // 3. Sortarea alfabetica a vectorului dupa campul nume (bubblesort)
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(a[i].getNume(), a[j].getNume()) > 0) {
                Angajat aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
    
    // Afisare in ordine alfabetica
    cout << "Sortare alfabetica:" << endl;
    for (int i = 0; i < 5; i++) {
        a[i].afisare();
    }
    
    // 4. Afisare angajati cu salariu maxim
    // In variabila max salvam salariul maxim 
    int max = a[0].getSalariu();
    for (int i = 1; i < 5; i++) {
        if (max < a[i].getSalariu()) {
            max = a[i].getSalariu();
        }
    }
    
    cout << endl;

    // Afisare angajati cu salariul max
    cout << "Angajati cu salariu maxim:" << endl;
    for (int i = 0; i < 5; i++) {
        if (max == a[i].getSalariu()) {
            cout << a[i].getNume() << endl;
        }
    }
    cout << "Salariul este " << max << endl;
    
    delete[] a;  // Eliberarea memoriei alocate

    return 0;
}
