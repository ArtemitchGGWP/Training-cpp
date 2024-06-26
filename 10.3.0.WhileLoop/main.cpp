#include <iostream>
using namespace std;

int main()
{
    // bool done{false};
    // int number{0};

    // while (!done) {
    //     cout << "Enter an interger between 1 and 5: ";
    //     cin >> number;
    //     if (number <= 1 || number >= 5)
    //         cout << "Out of range, try again!" << endl;
    //     else {
    //         cout << "Thanks!" << endl;
    //         done = true;
    //     }

    // }

    int num {};
    cout << "Enter a positive interger - start the countdown: ";
    cin >> num;

    while (num > 0) {
        cout << num << endl;
        --num;

    }

    int num1{};
    cout << "Enter a positive interger to count up to: ";
    cin >> num1;
    
    int i{1};
    while (num1 >= i){
        cout << i << endl;
        i++;
    }

    int number{};
    cout << "Enter an interger less than 100: ";
    cin >> number;

    while (number >= 100){ //!(number < 100)
        cout << "Enter an interger less than 100: ";
        cin >> number;
    }

    cout << "Thanks!" << endl;

    bool done{false};
    int number1 {0};

    while (!done){
        cout << "Enter an interger between 1 and 5: ";
        cin >> number1;
        if (number1 <= 1 || number1 >= 5)
            cout << "Out of range, try again!" << endl;
        else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }

    return 0;
}