#include <iostream>

class Distance {
private:
    int feet;
    float inches;

public:
    Distance(int ft = 0, float in = 0.0) : feet(ft), inches(in) {}

    friend Distance operator*(const float scalar, const Distance &dist) {
        int newFeet = static_cast<int>(scalar * (dist.feet + dist.inches / 12));
        float newInches = (scalar * (dist.feet + dist.inches / 12) - newFeet) * 12;

        return Distance(newFeet, newInches);
    }

    void displayDistance() {
        std::cout << feet << "'-" << inches << "\"" << std::endl;
    }
};

int main() {
    int feet1, feet2;
    float inches1, inches2;

    std::cout << "Enter feet: ";
    std::cin >> feet1;
    std::cout << "Enter inches: ";
    std::cin >> inches1;

    std::cout << "Enter feet: ";
    std::cin >> feet2;
    std::cout << "Enter inches: ";
    std::cin >> inches2;

    Distance dist1(feet1, inches1);
    Distance dist2(feet2, inches2);

    Distance dist3 = 7.5 * dist2;

    std::cout << "Dist1 = ";
    dist1.displayDistance();

    std::cout << "Dist2 = ";
    dist2.displayDistance();

    std::cout << "Dist3 = ";
    dist3.displayDistance();

    return 0;
}
