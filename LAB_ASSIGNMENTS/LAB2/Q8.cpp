#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    long long contact;
    static int count;

public:
    Student(const std::string &n, long long c) : name(n), contact(c) {
        count++;
    }

    std::string getName() const {
        return name;
    }

    void setName(const std::string &n) {
        name = n;
    }

    long long getContact() const {
        return contact;
    }

    void setContact(long long c) {
        contact = c;
    }

    static int getCount() {
        return count;
    }
};

int Student::count = 0;

class MCA_student : public Student {
private:
    static int total_credits;
    static int duration_of_course;
    std::string specialization;

public:
    MCA_student(const std::string &n, const std::string &spec, long long c)
        : Student(n, c), specialization(spec) {}

    std::string getSpecialization() const {
        return specialization;
    }

    void setSpecialization(const std::string &spec) {
        specialization = spec;
    }

    static int getTotalCredits() {
        return total_credits;
    }

    static int getDurationOfCourse() {
        return duration_of_course;
    }
};

int MCA_student::total_credits = 104;
int MCA_student::duration_of_course = 2;

class Btech_student : public Student {
private:
    static int total_credits;
    static int duration_of_course;

public:
    Btech_student(const std::string &n, long long c)
        : Student(n, c) {}

    static int getTotalCredits() {
        return total_credits;
    }

    static int getDurationOfCourse() {
        return duration_of_course;
    }
};

int Btech_student::total_credits = 160;
int Btech_student::duration_of_course = 4;

int main() {
    MCA_student amit("Amit", "MCA", 34455566);
    Btech_student akhil("Akhil", 123456789);

    std::cout << "Student Count: " << Student::getCount() << std::endl;
    std::cout << amit.getName() << " Course Duration: " << MCA_student::getDurationOfCourse()
              << " years Total credits: " << MCA_student::getTotalCredits() << std::endl;

    return 0;
}
