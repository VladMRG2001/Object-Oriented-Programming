#include "nota.hpp"

Nota::Nota() : note(NULL), nr_note(0) {} // pt int 0 si pt int* NULL

Nota::Nota(const int* note, int nr_note) : nr_note(nr_note) {
    this->note = new int[nr_note];
    for (int i = 0; i < nr_note; i++) {
        this->note[i] = note[i];
    }
}

Nota::Nota(const Nota& obj) : nr_note(obj.nr_note) {
    this->note = new int[obj.nr_note];
    for (int i = 0; i < obj.nr_note; i++) {
        this->note[i] = obj.note[i];
    }
}

Nota& Nota::operator = (const Nota& obj) {
    if(note != NULL) {
        delete[] note;
    }
    nr_note = obj.nr_note;
    this->note = new int[obj.nr_note];
    for(int i = 0; i < nr_note; i++) {
		this->note[i] = obj.note[i];
    }
	return *this;
}

ostream& operator << (ostream& out, const Nota& obj) {
    out << "Nr de note: " << obj.nr_note << endl;
    out << "Notele: ";
    for (int i = 0; i < obj.nr_note; i++) {
        out << obj.note[i] << " ";
    }
    out << "\nMedia: " << obj.getMedie() << '\n'; // Afișează media
    return out;
}

float Nota::getMedie() const{
    float sum = 0;
    for(int i = 0; i < nr_note; i++) {
        sum = sum + note[i];
    }
    float media;
    media = sum / nr_note;
    return media;
}

Nota::~Nota() {
    delete[] note;
}
	



