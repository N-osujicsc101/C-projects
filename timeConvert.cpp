#include <iostream>
using namespace std;

int main () {
    int val, hr, min;
    cout << "Enter a number: "; cin >> val;
    
    hr = val / 60;
    min = val % 60;

    cout << "Time in hours and minutes is " << hr << ":" << min;

    return 0;

}