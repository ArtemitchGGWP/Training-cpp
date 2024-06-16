#include <iostream>
using namespace std;

int main()
{
    bool equal_result{false};
    bool not_equal_result{false};

    cout << boolalpha; // will display true/false instead of 1/0 booleans

    //int
    int num1{}, num2{};
    cout << "Enter two intergers separated by space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    //char
    char char1{}, char2;
    cout << "Enter two characters separated by space: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    //doubles
    double double1{}, double2{};
    cout << "Enter two doubles separated by space: ";
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    //mixed
    int num3{};
    double double3{};
    cout << "Enter an interger and double separated by space: ";
    cin >> num3 >> double3;
    equal_result = (num3 == double3);
    not_equal_result = (num3 != double3);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    return 0;
}