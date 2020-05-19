/*
 * This program is convert C to F for temperature.
 */

#include <iostream>
using namespace std;

int main() {
    double C;
    cout << "C is: " << endl;
    cin >> C;
    double F;
    F = 1.8 * C + 32;
    cout << "F is: " << F << endl;
}
