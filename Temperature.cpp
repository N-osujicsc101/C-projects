#include <iostream>
using namespace std;

int main () {
    float F, K;

    cout << "Enter the temperature in kelvin: " ; cin >> K;

    F = (K - 273.15) * 9 / 5 + 32;

    cout << "The fahreheit value of the temperature is " << F << endl;

    
    return 0;

}