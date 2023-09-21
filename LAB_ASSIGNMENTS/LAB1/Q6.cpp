#include <iostream>

int main() {
    int n;

    std::cout << "Enter a positive number: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input. Please enter a positive number." << std::endl;
        return 1; // Exit with an error code
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
