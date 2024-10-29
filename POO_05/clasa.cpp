#include "clasa.hpp"

Clasa::Clasa() : nr_elevi(1) {}

Clasa::Clasa(int nr_elevi) : nr_elevi(nr_elevi) {}

Clasa::Clasa(const Clasa& obj) : nr_elevi(obj.nr_elevi){}

Clasa::~Clasa() {}

Clasa& Clasa::operator = (const Clasa& obj) {
    nr_elevi = obj.nr_elevi;
    return *this;
}

ostream& operator<<(ostream& out, const Clasa& obj) {
    out << "Nr elevi: " << obj.nr_elevi; //la int e usor
    return out;
}

void Clasa::setNrelevi(int nr) {
    nr_elevi = nr;
}
