#include <iostream>

class Complex {
private:
    int real;
    int imaginary;

public:
    void inputComplex() {
        std::cout << "Enter real part: ";
        std::cin >> real;
        std::cout << "Enter imaginary part: ";
        std::cin >> imaginary;
    }

    Complex add(const Complex &other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    Complex subtract(const Complex &other) {
        Complex result;
        result.real = real - other.real;
        result.imaginary = imaginary - other.imaginary;
        return result;
    }

    void displayComplex() {
        std::cout << real << "+" << imaginary << "i" << std::endl;
    }
};

int main() {
    Complex complex1, complex2, sum, difference;

    std::cout << "Enter the first complex number:\n";
    complex1.inputComplex();

    std::cout << "Enter the second complex number:\n";
    complex2.inputComplex();

    sum = complex1.add(complex2);
    difference = complex1.subtract(complex2);

    std::cout << "Sum: ";
    sum.displayComplex();

    std::cout << "Difference: ";
    difference.displayComplex();

    return 0;
}
