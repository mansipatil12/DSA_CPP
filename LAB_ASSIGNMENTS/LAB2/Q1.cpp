#include <iostream>
#include <string>

class Customer {
private:
    int customerNumber;
    std::string customerName;
    int consumedUnits;
    double unitCost;

public:
    void inputDetails() {
        std::cout << "Enter customer number: ";
        std::cin >> customerNumber;
        std::cin.ignore(); // Clear newline character from previous input
        std::cout << "Enter customer name: ";
        std::getline(std::cin, customerName);
        std::cout << "Enter number of consumed units: ";
        std::cin >> consumedUnits;
    }

    void calculateBill() {
        if (consumedUnits <= 100) {
            unitCost = 4.0;
        } else if (consumedUnits <= 300) {
            unitCost = 4.5;
        } else {
            unitCost = 5.0;
        }
    }

    void displayBill() {
        std::cout << "Customer details:\n";
        std::cout << "Customer number: " << customerNumber << "\n";
        std::cout << "Customer name: " << customerName << "\n";
        std::cout << "Units Consumed: " << consumedUnits << "\n";
        double billAmount = unitCost * consumedUnits;
        std::cout << "Electricity bill is Rs. " << billAmount << "\n";
    }
};

int main() {
    Customer customer;
    
    std::cout << "Enter the customer details:\n";
    customer.inputDetails();
    customer.calculateBill();
    customer.displayBill();

    return 0;
}
