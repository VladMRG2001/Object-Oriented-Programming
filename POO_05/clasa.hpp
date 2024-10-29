#ifndef CLASA_HPP
#define CLASA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Clasa {
    protected:
        int nr_elevi;
    public:
        Clasa();
        Clasa(int);
        Clasa(const Clasa&);
        ~Clasa();

        Clasa& operator = (const Clasa&);
        friend ostream& operator<<(ostream&, const Clasa&);
        void setNrelevi(int);
};

#endif

