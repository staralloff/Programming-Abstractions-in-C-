/*
 This file transfer the temperature from °C to °F
 Author: Xin, Shi(Orion)
 Created: 2020/06.
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
