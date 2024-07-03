#include <iostream>
using namespace std;

unsigned long long fibanocci(unsigned long long n);

unsigned long long fibanocci(unsigned long long n){
    if (n <= 1)
        return n;
    return fibanocci(n-1) + fibanocci(n-2);
}

int main()
{
    cout << fibanocci(5) << endl;
    cout << fibanocci(30) << endl;
    cout << fibanocci(40) << endl;
    
    return 0;
}