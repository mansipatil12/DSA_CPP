#include <iostream>
#include <string>
#include <vector>

class Person {
private:
    std::string name;
    std::string address;
    std::string city;
    int age;

public:
    Person(const std::string &n, const std::string &a, const std::string &c, int ag)
        : name(n), address(a), city(c), age(ag) {}

    void displayPersonDetails() const {
        std::cout << "Employee name: " << name << std::endl;
        std::cout << "Address: " << address << std::endl;
        std::cout << "City: " << city << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Employee {
private:
    int empId;
    std::string department;

public:
    Employee(int id, const std::string &dep) : empId(id), department(dep) {}

    void displayEmployeeDetails() const {
        std::cout << "Employee Id: " << empId << std::endl;
        std::cout << "Department: " << department << std::endl;
    }
};

class Faculty : public Person, public Employee {
private:
    std::vector<int> subjects;
    int teachingHours;

public:
    Faculty(const std::string &n, const std::string &a, const std::string &c, int ag,
            int id, const std::string &dep,
            const std::vector<int> &subs, int hrs)
        : Person(n, a, c, ag), Employee(id, dep), subjects(subs), teachingHours(hrs) {}

    void displayFacultyDetails() const {
        displayPersonDetails();
        displayEmployeeDetails();

        std::cout << "Subjects: ";
        for (size_t i = 0; i < subjects.size(); ++i) {
            std::cout << subjects[i];
            if (i != subjects.size() - 1) {
                std::cout << ",";
            }
        }
        std::cout << std::endl;

        std::cout << "Teaching hrs: " << teachingHours << std::endl;
    }
};

int main() {
    std::string name, address, city;
    int age, empId, teachingHours;
    std::string department;
    std::vector<int> subjects;

    std::cout << "Enter Employee name: ";
    std::getline(std::cin, name);

    std::cout << "Enter Address: ";
    std::getline(std::cin, address);

    std::cout << "Enter City: ";
    std::getline(std::cin, city);

    std::cout << "Enter Age: ";
    std::cin >> age;

    std::cout << "Enter Employee Id: ";
    std::cin >> empId;

    std::cin.ignore(); // Clear newline character from previous input

    std::cout << "Enter Department: ";
    std::getline(std::cin, department);

    std::cout << "Enter comma-separated Subjects (e.g., 101,102,103): ";
    std::string subjectsStr;
    std::getline(std::cin, subjectsStr);

    for (size_t i = 0; i < subjectsStr.length(); ++i) {
        if (std::isdigit(subjectsStr[i])) {
            subjects.push_back(subjectsStr[i] - '0');
        }
    }

    std::cout << "Enter Teaching hrs: ";
    std::cin >> teachingHours;

    Faculty faculty(name, address, city, age, empId, department, subjects, teachingHours);

    std::cout << "Output:\n";
    faculty.displayFacultyDetails();

    return 0;
}
