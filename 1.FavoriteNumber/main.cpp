#include <iostream>

int main()
{
    //Asking for favorite number
    int favorite_number;
    std::cout << "Enter your favorite number between 0 and 100: ";
    std::cin >> favorite_number;
    std::cout << "That is my favorite number too!" << std::endl;
    std::cout << "No really " << favorite_number << " is my favorite number." << std::endl;
    return 0;
}