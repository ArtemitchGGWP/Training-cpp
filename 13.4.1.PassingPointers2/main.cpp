#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap_int(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x{100}, y{200};
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    swap_int(&x, &y);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;    

    return 0;
}