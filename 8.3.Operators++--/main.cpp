#include <iostream>
using namespace std;

int main()
{
    int counter {10};
    int result {0};

    cout << "Counter: " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;

    counter = 10;
    result = 0;
    cout << "Preincrement" << endl;
    cout << "Counter: " << counter << endl;


    result = ++counter;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    counter = 10;
    result = 0;
    cout << "Postincrement" << endl;
    cout << "Counter: " << counter << endl;

    result = counter++;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    counter = 10;
    result = 0;
    cout << "Preincrement + 10" << endl;
    cout << "Counter: " << counter << endl;

    result = ++counter + 10;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    counter = 10;
    result = 0;
    cout << "Postincrement + 10" << endl;
    cout << "Counter: " << counter << endl;

    result = counter++ + 10;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    return 0;
}