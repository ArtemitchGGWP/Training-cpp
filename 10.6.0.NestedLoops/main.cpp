#include <iostream>
using namespace std;

int main()
{
    // int outer_val{};
    // int inner_val{};
    
    // for (outer_val = 1; outer_val <=2; ++outer_val){
    //     for (inner_val = 1; inner_val <=3; ++inner_val){
    //         cout << outer_val << ", " << inner_val << endl;
    // }
    // }

    for (int num1{1}; num1 <= 10; ++num1) {
        for (int num2{1}; num2 <= 10; ++num2) {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
    cout << endl;
    }


    return 0;
}