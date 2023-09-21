#include <iostream>

int main() {
    double weight, height;

    std::cout << "Enter your weight in kilograms: ";
    std::cin >> weight;

    std::cout << "Enter your height in meters: ";
    std::cin >> height;

    if (weight <= 0 || height <= 0) {
        std::cout << "Invalid input. Please enter valid positive values." << std::endl;
        return 1; // Exit with an error code
    }

    double bmi = weight / (height * height);

    std::cout << "Your BMI: " << bmi << std::endl;

    if (bmi < 18.5) {
        std::cout << "You are underweight" << std::endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        std::cout << "You are in the normal weight range" << std::endl;
    } else if (bmi >= 25 && bmi < 30) {
        std::cout << "You are overweight" << std::endl;
    } else {
        std::cout << "You are obese" << std::endl;
    }

    return 0;
}
