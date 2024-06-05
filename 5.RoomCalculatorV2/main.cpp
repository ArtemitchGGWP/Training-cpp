#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, welcome to Mitch's Carpet Cleaning service!" << endl;
    
    cout << "\nHow many small rooms would you like cleand? " << endl;
    int small_rooms {0};
    cin >> small_rooms;

    cout << "\nHow many large rooms would you like cleand? " << endl;
    int large_rooms {0};
    cin >> large_rooms;

    const double price_small_room {25.0};
    const double price_large_room {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days
 
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;

    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room << endl;

    cout << "Cost: $" << small_rooms * price_small_room + large_rooms * price_large_room  << endl;
    cout << "Tax: $" << (small_rooms * price_small_room + large_rooms * price_large_room) * sales_tax << endl;
    
    cout << "==============================" << endl;
    cout << "Total estimate $" << (small_rooms * price_small_room + large_rooms * price_large_room) + 
    (small_rooms * price_small_room + large_rooms * price_large_room) * sales_tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    return 0;
}