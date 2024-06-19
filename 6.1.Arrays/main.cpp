#include <iostream>
using namespace std;

int main()
{
    int test_scores [5] {100, 95, 99, 87, 88};
    int high_score_per_level [10] {3, 5};

    const int days_in_year {365};
    double hi_temperatures [days_in_year] {0};

    cout << test_scores << "\n";
    cout << high_score_per_level << "\n";
    cout << hi_temperatures << endl;
    
    return 0;
}