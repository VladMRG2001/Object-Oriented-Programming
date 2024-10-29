#ifndef NOTA_HPP
#define NOTA_HPP

#include <iostream>
using namespace std;

class Nota {
    protected:
        int *note;
        int nr_note;
    
    public:
        Nota(); // constructor fara parametri
        Nota(const int*, int); // constructor cu parametri
        Nota(const Nota&); // constructor de copiere
        ~Nota(); // destructor

        Nota& operator = (const Nota&); // operatorul de atribuire
        friend ostream& operator << (ostream&, const Nota&);
        float getMedie() const;
};

#endif


