#include <iostream>
#include <cmath>

int main() {
    double initialInvestment, interestRate, years;

    std::cout << "Enter the starting investment (a): ";
    std::cin >> initialInvestment;

    std::cout << "Enter the common ratio (r): ";
    std::cin >> interestRate;

    std::cout << "Enter the number of years (n): ";
    std::cin >> years;

    if (initialInvestment < 0 || interestRate <= 0 || years <= 0) {
        std::cout << "Invalid input. Please enter valid positive values." << std::endl;
        return 1; // Exit with an error code
    }

    std::cout << "Investment growth over " << years << " years:" << std::endl;

    for (int i = 0; i <= years; ++i) {
        double futureValue = initialInvestment * pow(interestRate, i);
        std::cout << "Year " << i << ": $" << futureValue << std::endl;
    }

    return 0;
}
