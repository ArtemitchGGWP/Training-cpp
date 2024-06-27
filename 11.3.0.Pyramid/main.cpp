#include <iostream>
#include <string>
#include <iomanip> // for std::setw

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int length = input.length();

    // Loop to print each row of the pyramid
    for (int i = 0; i < length; ++i) {
        // Print leading spaces
        std::cout << std::setw(length - i);
        
        // Print the first part of the pyramid line
        for (int j = 0; j <= i; ++j) {
            std::cout << input[j];
        }

        // Print the second part of the pyramid line
        for (int j = i - 1; j >= 0; --j) {
            std::cout << input[j];
        }

        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}
