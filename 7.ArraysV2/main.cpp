#include <iostream>
using namespace std;

int main()
{
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "\nThe last vowel is: " << vowels[4] << endl;

//  cin >> vowels[5]; out of bounds
    
    double hi_temps [] {90.1, 89.9, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;
    cout << "\nThe first high temperature is now: " << hi_temps[0] << endl;

    int test_scores[5] {100, 90};

    cout << "\nThe first score at index 0: " << test_scores[0] << endl;
    cout << "\nThe second score at index 1: " << test_scores[1] << endl;
    cout << "\nThe third score at index :2 " << test_scores[2] << endl;
    cout << "\nThe forth score at index 3: " << test_scores[3] << endl;
    cout << "\nThe fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nThe updated array is:" << endl;
    cout << "\nThe first score at index 0: " << test_scores[0] << endl;
    cout << "\nThe second score at index 1: " << test_scores[1] << endl;
    cout << "\nThe third score at index :2 " << test_scores[2] << endl;
    cout << "\nThe forth score at index 3: " << test_scores[3] << endl;
    cout << "\nThe fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nNotice what the value of the array name is: " << test_scores << endl;
    
    return 0;
}