#include <iostream>
#include <vector>

int main() {
    int decimalNumber;

    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    if (decimalNumber < 0) {
        std::cout << "Invalid input. Please enter a non-negative decimal number." << std::endl;
        return 1; // Exit with an error code
    }

    std::vector<int> binaryDigits;

    // Convert decimal to binary using repeated division by 2
    while (decimalNumber > 0) {
        binaryDigits.push_back(decimalNumber % 2);
        decimalNumber /= 2;
    }

    if (binaryDigits.empty()) {
        binaryDigits.push_back(0);
    }

    std::cout << "Binary representation: ";
    
    // Print the binary representation in reverse order
    for (int i = binaryDigits.size() - 1; i >= 0; --i) {
        std::cout << binaryDigits[i];
    }

    std::cout << std::endl;

    return 0;
}
