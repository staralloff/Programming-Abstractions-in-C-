/*
 * This program convert C to F for temperature with function.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */

#include <iostream>
using namespace std;

/* function declare */
double convert(double C);

int main() {
    double C;
    cout << "C is: " << endl;
    cin >> C;
    double F = convert(C);
    cout << "F is: " << F << endl;
    return 0;
}

double convert(double C) {
    return 1.8 * C + 32;
}
