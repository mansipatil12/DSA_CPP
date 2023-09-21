#include <iostream>
#include <cstring>

class Student {
private:
    char name[100];
    char regNo[20];
    char branch[50];
    int semester;

public:
    void enterInfo() {
        std::cout << "Enter name: ";
        std::cin.getline(name, sizeof(name));
        
        std::cout << "Enter registration number: ";
        std::cin.getline(regNo, sizeof(regNo));
        
        std::cout << "Enter branch: ";
        std::cin.getline(branch, sizeof(branch));
        
        std::cout << "Enter semester: ";
        std::cin >> semester;
        std::cin.ignore(); // Clear newline character from previous input
    }

    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Registration Number: " << regNo << std::endl;
        std::cout << "Branch: " << branch << std::endl;
        std::cout << "Semester: " << semester << std::endl;
    }
};

int main() {
    Student student;

    student.enterInfo();
    std::cout << "Output:\n";
    student.displayInfo();

    return 0;
}
