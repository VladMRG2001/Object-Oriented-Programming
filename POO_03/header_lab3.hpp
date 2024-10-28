#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class Fractie{
    private:
        int a; // numaratorul fractiei
        int b; // numitorul fractiei

    public:

        Fractie(int aa=0, int bb=0); // constructor cu parametri impliciti
        Fractie(const Fractie&); // constructor de copiere
        Fractie& operator = (const Fractie&); // se intoarce referinta la obiectul modificat
        // pentru a putea face op de genul: int a,b,c,d;
        // a=(b=(c=(d=4))) // asociativitate la dreapta
        ~Fractie(); // destructorul

        double getValoare(); // cat face a/b
        Fractie getInv(); // b/a
        void setdata(int, int); // modifica valorile numaratorului si numitorului
        float getA(); // returneaza numaratorul
        float getB(); // returneaza numitorul

        friend Fractie operator + (const Fractie&, const Fractie&); // supradefinire operator adunare
        friend Fractie operator - (const Fractie&, const Fractie&); // supradefinire operaotr scadere
        friend Fractie operator * (const Fractie&, const Fractie&);
        friend Fractie operator / (const Fractie&, const Fractie&);
        friend Fractie operator - (const Fractie&); // transforma numerele in inversul lor, 8 -> -8
        // operatorul minus a fost supradefinit de 2 ori, dar semnatura e diferita, deoarece in prima avem 2 param si aici doar 1
        
        Fractie& operator += (const Fractie&); // supradefinire operator incrementare cu o valoare
            // *this  = *this + a;
         // se intoarce referinta la Fractie pt a putea face operatii ca: int m; (m+=5)+=3;
        Fractie& operator -= (const Fractie&);
        Fractie& operator *= (const Fractie&);
        Fractie& operator /= (const Fractie&);

        bool operator == (const Fractie&); // supradefinire operator de egalitate
        bool operator != (const Fractie&); // supradefinire operator diferit
        // pot sa folosesc in implementare operatorul == implementat anterior
        // {return(!(*this == x));}
        
        bool operator < (const Fractie&); // supradefinire operator <
        bool operator <= (const Fractie&); // supradefinire operator <=
        bool operator > (const Fractie&); // supradefinire operator >
        bool operator >= (const Fractie&); // supradefinire operator >=
};

#endif
