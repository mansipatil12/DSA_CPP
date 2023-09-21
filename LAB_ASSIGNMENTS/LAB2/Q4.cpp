#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    char gender;

public:
    Person(const std::string &n, char g) : name(n), gender(g) {}

    Person(const std::string &n, int g) : name(n) {
        if (g == 1) {
            gender = 'M';
        } else if (g == 0) {
            gender = 'F';
        } else {
            gender = 'U'; // Unspecified or Unknown
        }
    }

    void setName(const std::string &n) {
        name = n;
    }

    std::string getName() const {
        return name;
    }

    void setGender(char g) {
        gender = g;
    }

    char getGender() const {
        return gender;
    }

    void displayDetails() const {
        std::cout << "Details: " << name << ", " << gender << std::endl;
    }
};

int main() {
    Person student1("Amit", 'M');
    Person student2("Neha", 'F');
    Person student3("Mukesh", 1);

    std::cout << "Details of student1: ";
    student1.displayDetails();

    std::cout << "Details of student2: ";
    student2.displayDetails();

    std::cout << "Details of student3: ";
    student3.displayDetails();

    return 0;
}
