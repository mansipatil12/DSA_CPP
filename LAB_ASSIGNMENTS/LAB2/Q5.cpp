#include <iostream>

class Base {
public:
    virtual double add(double a, double b) {
        return a + b;
    }
};

class Derived : public Base {
public:
    double add(double a, double b) override {
        return a + b;
    }
};

int main() {
    Base *basePtr;
    Derived derived;

    basePtr = &derived;

    double num1, num2;

    std::cout << "Input: ";
    std::cin >> num1 >> num2;

    double result = basePtr->add(num1, num2);

    std::cout << "Output: " << result << std::endl;

    return 0;
}
