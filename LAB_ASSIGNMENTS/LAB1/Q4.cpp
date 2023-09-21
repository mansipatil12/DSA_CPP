#include <iostream>

int main() {
    double price1, price2, price3;

    std::cout << "Enter the price of Smartphone 1: $";
    std::cin >> price1;

    std::cout << "Enter the price of Smartphone 2: $";
    std::cin >> price2;

    std::cout << "Enter the price of Smartphone 3: $";
    std::cin >> price3;

    double minPrice = price1;

    if (price2 < minPrice) {
        minPrice = price2;
    }

    if (price3 < minPrice) {
        minPrice = price3;
    }

    std::cout << "The best deal in Smartphone is $" << minPrice << "." << std::endl;

    return 0;
}
