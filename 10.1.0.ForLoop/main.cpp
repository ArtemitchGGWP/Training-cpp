#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Count to 10 +1." << endl;
    for (int i{1}; i <= 10; ++i)
        cout << i << " ";
    cout << "\nCount to 10 +2." << endl;
    for (int j{1}; j <= 10; j+=2)
        cout << j << " ";
    cout << "\nCount from 10 -1" << endl;
    for (int k{10}; k > 0; --k)
        cout << k << " ";
    cout << "\nCount to 100 +10 but divisible by 15" << endl;
    for (int l{10}; l <= 100; l+=10)
        if (l % 15 == 0)
        cout << l << " ";
    cout << "i = 1 and j = 5; ++i, ++j" << endl;
    for (int i{1}, j{5}; i <= 5; ++i, ++j)
        cout << i << " + " << j << " = " << i + j << endl;
    cout << "i <= 10 - print endl, else " "" << endl;
    for (int i{1}; i <= 100; i++){
        cout << i;
        if (i % 10 == 0)
            cout << endl;
        else 
            cout << " ";
    }
    
    vector <int> nums {10, 20, 30, 40, 50};
    for (unsigned i{0}; i < nums.size(); i++)
        cout << nums[i] << endl;

    cout << endl;
    return 0;
}