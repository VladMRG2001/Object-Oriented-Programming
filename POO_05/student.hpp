#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "diriginte.hpp"
#include "nota.hpp"
#include "clasa.hpp"

class Student : public Nota, public Diriginte, public Clasa {
    char* nume;
public:
    Student();
    Student(const int*, int, const char*, const char[], int, const char*);
    Student(const Student&);
    ~Student();

    Student& operator = (const Student&);
    friend ostream& operator<<(ostream&, const Student&);
    void interschimbare(Student&);
};

#endif


