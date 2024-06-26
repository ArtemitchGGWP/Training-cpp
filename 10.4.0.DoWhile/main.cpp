#include <iostream>
using namespace std;

int main()
{
    char selection{};

    do {
        cout << "====================" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

    if (selection == '1')
        cout << "You chose 1" << endl;
    else if (selection == '2')
        cout << "You chose 2" << endl;
    else if (selection == '3')
        cout << "You chose 3" << endl;
    else if (selection == 'Q' || selection == 'q')
        cout << "You chose to quit" << endl << "Goodbye!" << endl;
    else 
        cout << "Try again!" << endl;

        // switch(selection){
        //     case '1':
        //         cout << "You chose 1" << endl;
        //         break;
        //     case '2':
        //         cout << "You chose 2" << endl;
        //         break;
        //     case '3':
        //         cout << "You chose 3" << endl;
        //         break;
        //     case 'q':
        //     case 'Q':
        //         cout << "You chose to quit" << endl << "Goodbye" << endl;
        //         break;
        // default :
        //     cout << "Try again!" << endl;
        // }

    } while (selection != 'q' && selection != 'Q');

    return 0;
}