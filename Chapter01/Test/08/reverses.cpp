/*
 This file output the number which is reversed.
 Author: Xin, Shi(Orion)
 Created: 2020/06.
 */
#include <iostream>
using namespace std;

int main() {
    cout << "This program finds the largest integer in a list." << endl;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The reversed integer is ";
    int digit = 0;
    while (n > 0) {
        digit = n % 10;
        n = n / 10;
        cout << digit;
    }
    cout << endl;
    return 0;
}
