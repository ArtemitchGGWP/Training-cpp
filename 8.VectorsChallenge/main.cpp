#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;
    
    cout << "Elements of vector1: " << endl;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements" << endl;

    cout << "Elements of vector2: " << endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "vector2 contains " << vector2.size() << " elements" << endl;

    vector <vector <int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Vector_2d elements: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << "Changing vector1 to 1000." << endl;
    vector1.at(0) = 1000;

    cout << "Updated vector_2d elements: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    cout << "Elements at vector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    return 0;
}