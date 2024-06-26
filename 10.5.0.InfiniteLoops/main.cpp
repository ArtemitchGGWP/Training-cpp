#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (true) {
        string input; // String to hold the entire line of input
        cout << "Do you want to loop again? (Y/N): ";
        getline(cin, input); // Read the entire line of input into the string

        // Extract the first character from the input, if the input is empty, use '\0'
        char again = input.empty() ? '\0' : input[0];

        switch (again) {
            case 'n':
            case 'N':
                cout << "Now exiting loop" << endl;
                return 0;  // Exit the program
            case 'y':
            case 'Y':
                cout << "Repeating" << endl;
                break;  // Continue the loop
            default:
                cout << "You entered the wrong character, try again!" << endl;
                break;  // Continue the loop
        }
    }

    return 0;
}
