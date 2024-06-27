#include <iostream>
#include <limits>
using namespace std;

const double pi{3.14159};

double calc_area_circle(double radius){
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height){
    // return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

void area_circle(){
    double radius{};
    cout << "\nEnter the radius of circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder(){
    double radius{};
    double height{};
    cout << "\nEnter the radius of cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " 
    << height << " is: " << calc_volume_cylinder(radius, height) << endl;
}

string say_something(){
    string something;
    cout << "What do you want to say? ";
    getline(cin, something);
    return something;
}

int main()
{
    say_something();
    area_circle();
    volume_cylinder();

    return 0;
}