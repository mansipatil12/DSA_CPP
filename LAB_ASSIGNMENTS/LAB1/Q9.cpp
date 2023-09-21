#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter two positive integers 'a' and 'b': ";
    std::cin >> a >> b;

    if (a <= 0 || b <= 0) {
        std::cout << "Invalid input. Please enter valid positive integers." << std::endl;
        return 1; // Exit with an error code
    }

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    std::cout << "GCD of " << a << " and " << b << " is: " << a << std::endl;

    return 0;
}
