#include "student.hpp"

Student::Student(): nume(NULL) {}

Student::Student(const int* note, int nr_note, const char* nume_diriginte, const char grupa[], int nr_elevi, const char* nume): Nota(note, nr_note), Diriginte(nume_diriginte, grupa), Clasa(nr_elevi) {
    this->nume = new char[strlen(nume) + 1]; // doar param din Student aici
    strcpy(this->nume, nume);
}

Student::Student(const Student& obj) {
    nume = NULL;
    *this = obj;
}

ostream& operator << (ostream& out, const Student& obj) {
    out << (const Nota&) obj;
	out << (const Diriginte&) obj;
	out << (const Clasa&) obj;
    if(obj.nume != NULL) {
        out << "\nNume: " << obj.nume <<'\n' << '\n' ;
    }
	return out;
}

Student& Student::operator = (const Student& obj) {
    Nota::operator = (obj);
    Diriginte::operator = (obj);
    Clasa::operator = (obj);
    if (nume != NULL) {
        delete[] nume;
    }
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
    return *this;
}

void Student::interschimbare(Student& obj) {
    Student aux(*this);
    *this = obj;
    obj = aux;
}

Student::~Student() {
    delete[] nume;
}



