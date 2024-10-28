#include "clasa.hpp"

Clasa::Clasa() : nr_elevi(0), elevi(nullptr) {
}

Clasa::Clasa(int nr_elevi) : nr_elevi(nr_elevi) {
    elevi = new Student[nr_elevi];
}

Clasa::Clasa(Student* elevi, int nr_elevi) : nr_elevi(nr_elevi) {
    this->elevi = new Student[nr_elevi]; // Alocă memorie pentru elevi
    for (int i = 0; i < nr_elevi; ++i) {
        this->elevi[i] = elevi[i]; // Copiază elevii
    }
}

Clasa::Clasa(const Clasa& obj) : nr_elevi(obj.nr_elevi) {
    elevi = new Student[nr_elevi];
    for (int i = 0; i < nr_elevi; ++i) {
        elevi[i] = obj.elevi[i];
    }
}

Clasa& Clasa::operator=(const Clasa& obj) {
    if (this != &obj) {
        delete[] elevi;
        nr_elevi = obj.nr_elevi;
        elevi = new Student[nr_elevi];
        for (int i = 0; i < nr_elevi; ++i) {
            elevi[i] = obj.elevi[i];
        }
    }
    return *this;
}

Clasa::~Clasa() {
    delete[] elevi;
}

ostream& operator<<(ostream& out, const Clasa& obj) {
    out << "Numar elevi: " << obj.nr_elevi << endl;
    for (int i = 0; i < obj.nr_elevi; ++i) {
        out << obj.elevi[i] << endl;
    }
    return out;
}




