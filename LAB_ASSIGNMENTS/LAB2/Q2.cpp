//Inheritance
#include <iostream>

class basic_salary {
protected:
    double basicSalary;

public:
    void inputBasicSalary() {
        std::cout << "Enter the basic salary: ";
        std::cin >> basicSalary;
    }
};

class gross_salary : public basic_salary {
private:
    double HRA;
    double bonus;

public:
    void inputGrossSalaryDetails() {
        std::cout << "Enter the HRA: ";
        std::cin >> HRA;
        std::cout << "Enter the bonus: ";
        std::cin >> bonus;
    }

    double calculateGrossSalary() {
        return basicSalary + HRA + bonus;
    }
};

int main() {
    gross_salary employee;

    employee.inputBasicSalary();
    employee.inputGrossSalaryDetails();

    double totalSalary = employee.calculateGrossSalary();

    std::cout << "Gross Salary: " << totalSalary << std::endl;

    return 0;
}
