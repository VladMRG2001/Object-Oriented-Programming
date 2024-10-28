//#include "header_lab3.hpp" // includem fisierul de header
#include "clase_lab3.cpp" // includem fisierul de cpp

int main(){

    // Test constructors
    Fractie f1(3, 4);          // Fraction 3/4
    Fractie f2(2, 5);          // Fraction 2/5
    Fractie f3 = f1;           // Copy constructor
    Fractie f4;                // Default constructor (0/0)

    // Test getters
    std::cout << "f1 numerator: " << f1.getA() << ", denominator: " << f1.getB() << std::endl;
    std::cout << "f2 numerator: " << f2.getA() << ", denominator: " << f2.getB() << std::endl;
    std::cout << "f3 (copy of f1) numerator: " << f3.getA() << ", denominator: " << f3.getB() << std::endl;

    // Test getValoare() - division result
    std::cout << "Value of f1 (3/4): " << f1.getValoare() << std::endl;
    std::cout << "Value of f2 (2/5): " << f2.getValoare() << std::endl;

    // Test getInv() - inverse fraction
    Fractie f1Inv = f1.getInv();
    std::cout << "Inverse of f1 (4/3): " << f1Inv.getA() << "/" << f1Inv.getB() << std::endl;

    // Test addition and subtraction
    Fractie sum = f1 + f2;  // (3/4) + (2/5)
    std::cout << "Sum of f1 and f2: " << sum.getA() << "/" << sum.getB() << std::endl;

    Fractie diff = f1 - f2; // (3/4) - (2/5)
    std::cout << "Difference of f1 and f2: " << diff.getA() << "/" << diff.getB() << std::endl;

    // Test multiplication and division
    Fractie product = f1 * f2; // (3/4) * (2/5)
    std::cout << "Product of f1 and f2: " << product.getA() << "/" << product.getB() << std::endl;

    Fractie quotient = f1 / f2; // (3/4) / (2/5)
    std::cout << "Quotient of f1 and f2: " << quotient.getA() << "/" << quotient.getB() << std::endl;

    // Test unary minus
    Fractie neg = -f1;  // - (3/4)
    std::cout << "Negative of f1: " << neg.getA() << "/" << neg.getB() << std::endl;

    // Test compound assignment operators
    f1 += f2; // f1 = f1 + f2
    std::cout << "f1 after f1 += f2: " << f1.getA() << "/" << f1.getB() << std::endl;

    f1 -= f2; // f1 = f1 - f2
    std::cout << "f1 after f1 -= f2: " << f1.getA() << "/" << f1.getB() << std::endl;

    f1 *= f2; // f1 = f1 * f2
    std::cout << "f1 after f1 *= f2: " << f1.getA() << "/" << f1.getB() << std::endl;

    f1 /= f2; // f1 = f1 / f2
    std::cout << "f1 after f1 /= f2: " << f1.getA() << "/" << f1.getB() << std::endl;

    // Test equality and comparison operators
    if (f1 == f3) {
        std::cout << "f1 is equal to f3" << std::endl;
    } else {
        std::cout << "f1 is not equal to f3" << std::endl;
    }

    if (f1 != f2) {
        std::cout << "f1 is not equal to f2" << std::endl;
    }

    if (f1 < f2) {
        std::cout << "f1 is less than f2" << std::endl;
    }

    if (f1 <= f2) {
        std::cout << "f1 is less than or equal to f2" << std::endl;
    }

    if (f1 > f2) {
        std::cout << "f1 is greater than f2" << std::endl;
    }

    if (f1 >= f2) {
        std::cout << "f1 is greater than or equal to f2" << std::endl;
    }

    // Test setdata
    f1.setdata(7, 8); // Change f1 to 7/8
    std::cout << "After setting new data: f1 = " << f1.getA() << "/" << f1.getB() << std::endl;

    return 0;
}
