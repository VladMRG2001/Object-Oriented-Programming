//#include "header_lab3.hpp" // includem fisierul de header
#include "clase_lab3.cpp" // includem fisierul de cpp

int main(){

    // Testam constructorii
    Fractie f1(3, 4);          // Fractia 3/4
    Fractie f2(2, 5);          // Fractia 2/5
    Fractie f3 = f1;           // Constructor de copiere
    Fractie f4;                // Constructor implicit (0/0)

    // Test metode getter
    std::cout << "f1 numarator: " << f1.getA() << ", numitor: " << f1.getB() << std::endl;
    std::cout << "f2 numarator: " << f2.getA() << ", numitor: " << f2.getB() << std::endl;
    std::cout << "f3 (copia lui f1) numirator: " << f3.getA() << ", numarator: " << f3.getB() << std::endl;

    // Test getValoare()
    std::cout << "Value of f1 (3/4): " << f1.getValoare() << std::endl;
    std::cout << "Value of f2 (2/5): " << f2.getValoare() << std::endl;

    // Test getInv() - inverse fraction
    Fractie f1Inv = f1.getInv();
    std::cout << "Inversa lui f1: " << f1Inv.getA() << "/" << f1Inv.getB() << std::endl;

    // Test adunare si scadere
    Fractie suma = f1 + f2;  // (3/4) + (2/5)
    std::cout << "f1 + f2: " << suma.getA() << "/" << suma.getB() << std::endl;

    Fractie diferenta = f1 - f2; // (3/4) - (2/5)
    std::cout << "f1 - f2: " << diferenta.getA() << "/" << diferenta.getB() << std::endl;

    // Test inmultire si impartire
    Fractie inmultire = f1 * f2; // (3/4) * (2/5)
    std::cout << "fi * f2: " << product.getA() << "/" << product.getB() << std::endl;

    Fractie impartire = f1 / f2; // (3/4) / (2/5)
    std::cout << "f1 / f2: " << impartire.getA() << "/" << impartire.getB() << std::endl;

    // Test inversare de semn
    Fractie neg = -f1;  // - (3/4)
    std::cout << "-f1: " << neg.getA() << "/" << neg.getB() << std::endl;

    // Test +=, -=, *=, /=
    f1 += f2; // f1 = f1 + f2
    std::cout << "f1 dupa f1 += f2: " << f1.getA() << "/" << f1.getB() << std::endl;

    f1 -= f2; // f1 = f1 - f2
    std::cout << "f1 dupa f1 -= f2: " << f1.getA() << "/" << f1.getB() << std::endl;

    f1 *= f2; // f1 = f1 * f2
    std::cout << "f1 dupa f1 *= f2: " << f1.getA() << "/" << f1.getB() << std::endl;

    f1 /= f2; // f1 = f1 / f2
    std::cout << "f1 dupa f1 /= f2: " << f1.getA() << "/" << f1.getB() << std::endl;

    // Test ==, !=, <, <=, >, >=
    if (f1 == f3) {
        std::cout << "f1 este egal cu f3" << std::endl;
    } else {
        std::cout << "f1 nu e egal cu f3" << std::endl;
    }

    if (f1 != f2) {
        std::cout << "f1 nu e egal cu f2" << std::endl;
    }

    if (f1 < f2) {
        std::cout << "f1 e mai mic decat f2" << std::endl;
    }

    if (f1 <= f2) {
        std::cout << "f1 e mai mic sau egal decat f2" << std::endl;
    }

    if (f1 > f2) {
        std::cout << "f1 e mai mare decat f2" << std::endl;
    }

    if (f1 >= f2) {
        std::cout << "f1 e mai mare sau egal decat f2" << std::endl;
    }

    // Test setdata
    f1.setdata(7, 8); // Schimbam f1 in 7/8
    std::cout << "Acum f1 = " << f1.getA() << "/" << f1.getB() << std::endl;

    return 0;
}
