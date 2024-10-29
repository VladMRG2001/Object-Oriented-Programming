#include "diriginte.hpp"

Diriginte::Diriginte() : nume(NULL) { // pt char* NULL, pt char[] definit jos
    strcpy(this->grupa, " ");
}

Diriginte::Diriginte(const char* nume, const char grupa[]) {
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    strcpy(this->grupa, grupa);
}

Diriginte::Diriginte(const Diriginte& obj) {
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
    strcpy(this->grupa, obj.grupa);
}

Diriginte& Diriginte::operator = (const Diriginte& obj) {
    if (nume != NULL) {
		delete[] nume;
    }
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume,obj.nume);
	strcpy(this->grupa,obj.grupa);
	return *this;
}

ostream& operator << (ostream& out, const Diriginte& obj) {
    if(obj.nume != NULL) {
		out << "Numele dirigintelui: " << obj.nume; // asa pt char*
    } else {
		out << "Numele dirigintelui: " << "no name found x_x";
    }
	
	out << "\nGrupa: " << obj.grupa<< " "; // asa pt char[]
    out << '\n';
	return out;
}

void Diriginte::schimbare_nume(const char* n) {
    this->nume = new char[strlen(n) + 1];
	strcpy(this->nume, n);
}

Diriginte::~Diriginte() {
    delete[] nume;
}



