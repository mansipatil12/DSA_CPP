#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle() : radius(0.0) {}
    
    Circle(double r) : radius(r) {}

    double getRadius() const {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }

    double calculateArea() const {
        return 3.14159265358979323846 * radius * radius;
    }
};

int main() {
    double inputRadius;
    std::cout << "Enter the radius: ";
    std::cin >> inputRadius;

    Circle circle(inputRadius);

    std::cout << "radius: " << circle.getRadius() << " area: " << circle.calculateArea() << std::endl;

    return 0;
}
