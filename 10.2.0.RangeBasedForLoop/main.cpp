#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int scores[] {10, 20, 30};
    for(auto score: scores)
        cout << score << endl;

    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
    double avarage_temp {};
    double total {};
    for(auto temp: temperatures)
        total += temp;

    if (temperatures.size() != 0)
        avarage_temp = total/temperatures.size();
    
    cout << fixed << setprecision(1);
    cout << "Average temperature is " << avarage_temp << endl;


    for(auto val: {1, 2, 3, 4, 5})
        cout << val << endl;

    for (auto c: "This is a test")
        if (c != ' ')
            cout << c;
    
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    int count{0};

    for (auto i: vec)
        if (i % 3 == 0 || i % 5 == 0){
            cout << i << " " << endl;
            ++count;
    }

    return 0;
}