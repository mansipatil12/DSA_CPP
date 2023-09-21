#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string sentence;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::istringstream iss(sentence);
    std::string word;

    while (iss >> word) {
        std::cout << word << std::endl;
    }

    return 0;
}
