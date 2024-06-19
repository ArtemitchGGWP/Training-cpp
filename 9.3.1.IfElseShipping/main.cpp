#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int lenght{}, width{}, height{};
    double base_cost{2.50};

    const int tier1_treshhold{100}; //volume
    const int tier2_treshhold{500}; //volume

    int max_dimmension_lenght{10}; //inches

    double tier1_surcharge{0.10}; //10% extra
    double tier2_surcharge{0.25}; //25% extra

    //All dimmensions must be 10 inches or less

    int package_volume{};

    cout << "Welocme to the package cost calculator" << endl;
    cout << "Enter lenght, width and height of the package separated by spaces:";

    cin >> lenght >> width >> height;

    if (lenght > max_dimmension_lenght || width > max_dimmension_lenght || height > max_dimmension_lenght){
        cout << "Sorry, package rejected - dimmensions exceeded" << endl;
    } else {
        double package_cost{};
        package_volume = lenght * width * height;
        package_cost = base_cost;

        if (package_volume > tier2_treshhold) {
            package_cost += package_cost * tier2_surcharge;
            cout << "Adding tier 2 surcharge" << endl; 
        } else if (package_volume > tier1_treshhold) {
            package_cost += package_cost * tier1_surcharge;
            cout << "Adding tier 1 surcharge" << endl; 
        }

        cout << fixed << setprecision(2);// prints dollars nicely
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost$ " << package_cost << " to ship" << endl; 
    }

    return 0;
}