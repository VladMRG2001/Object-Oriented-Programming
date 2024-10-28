#include "header_lab3.hpp" // includem header-ul in fisierul de cpp

// Acum hai sa implementam toate aceste metode si sa le testam in main().
Fractie::Fractie(int aa, int bb){ // practic pt orice valori ele vor fi 0 automat
    a = aa;
    b = bb;
}

Fractie::Fractie(const Fractie &f){ // un obiect de tip Fractie cu numele f
    a = f.a; // acum poti accesa parametrii obiectului f
    b = f.b;
}

// tipul de date al metodei este Fractie&, la fel cum la alte functii pui void sau int
// apoi urmeaza clasa, apoi numele metodei
Fractie& Fractie::operator = (const Fractie &f){
    a = f.a;
    b = f.b;
    return *this; // return au doar metodele cu tip de data non void
}

Fractie::~Fractie(){
    a = 0;
    b = 0;
}

double Fractie::getValoare(){
    double f;
    if(b != 0){
        f = (double)a/b;
        return f;
    }
    else return 0;
}

Fractie Fractie::getInv(){ // aici am tipul de date Fractie
    Fractie f;
    f.b = this->a;
    f.a = this->b;
    return f;
}

// diferenta intre Fractie(int, int) si setdata este faptul ca primul este un constructor si asta este o functie
void Fractie::setdata(int aa, int bb){ 
    a = aa;
    b = bb;
}

float Fractie::getA(){
    return a;
}

float Fractie::getB(){
    return b;
}

// functiile friend nu apartin clasei (nu au operatorul ::)
Fractie operator + (const Fractie& f1, const Fractie& f2){
    Fractie f;
    f.a = f1.a * f2.b + f1.b * f2.a;
    f.b = f1.b * f2.b;
    return f; // adica fractia rezultata prin adunarea a doua fractii
}

Fractie operator - (const Fractie& f1, const Fractie& f2){
    Fractie f;
    f.a = f1.a * f2.b - f1.b * f2.a;
    f.b = f1.b * f2.b;
    return f;
}

Fractie operator * (const Fractie& f1, const Fractie& f2){
    Fractie f;
    f.a = f1.a * f2.a;
    f.b = f1.b * f2.b;
    return f;
}

Fractie operator / (const Fractie& f1, const Fractie& f2){
    Fractie f;
    f.a = f1.a / f2.a;
    f.b = f1.b / f2.b;
    return f;
}

Fractie operator - (const Fractie& f){
    Fractie fr;
    fr.a = f.a * (-1);
    fr.b = f.b;
    return fr;
}

Fractie& Fractie::operator += (const Fractie& f){
    *this = *this + f;
    return *this;
}

Fractie& Fractie::operator -= (const Fractie& f){
    *this = *this - f;
    return *this;
}

Fractie& Fractie::operator *= (const Fractie& f){
    *this = *this * f;
    return *this;
}

Fractie& Fractie::operator /= (const Fractie& f){
    *this = *this / f;
    return *this;
}

bool Fractie::operator == (const Fractie& f){
    if(((*this).a == f.a) && ((*this).b == f.b))
        return true;
        else return false;
}

bool Fractie::operator != (const Fractie& f){
    if(((*this).a != f.a) && ((*this).b != f.b))
        return true;
        else return false;
}

bool Fractie::operator < (const Fractie& f){
    if(((*this).a < f.a) && ((*this).b < f.b)) 
        return true;
        else return false;
}

bool Fractie::operator <= (const Fractie& f){
    if(((*this).a <= f.a) && ((*this).b <= f.b))
        return true;
        else return false; 
}

bool Fractie::operator > (const Fractie& f){
    if(((*this).a > f.a) && ((*this).b > f.b))
        return true;
        else return false;
}

bool Fractie::operator >= (const Fractie& f){
    if(((*this).a >= f.a) && ((*this).b >=f.b))
        return true;
        else return false;
}