#ifndef DIRIGINTE_HPP
#define DIRIGINTE_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Diriginte {
    protected:
        char* nume;
        char grupa[7];
    public:
        Diriginte();
        Diriginte(const char*, const char[]);
        Diriginte(const Diriginte&);
        ~Diriginte();

        Diriginte& operator = (const Diriginte&);
        friend ostream& operator << (ostream&, const Diriginte&);
        void schimbare_nume(const char*);
};
#endif



