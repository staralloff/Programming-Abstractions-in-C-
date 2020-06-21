/*
 * This program convert meters to inch and feet at the same time
 * with reference parameter.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
using namespace std;

/* function declare */
void feet(double & inch, double & feet);
void inch(double & meter, double & inch);
void print(double inch, double feet);

int main() {
    double m;
    double in, fe;
    cout << "The meter is: ";
    cin >> m;
    inch(m, in);
    feet(in, fe);
    print(in, fe);
    return 0;
}

void feet(double & inch, double & feet) {
    feet = inch * 12;
}

void inch(double & meter, double & inch) {
    inch = meter / 0.0254;
}

void print(double inch, double feet) {
    cout << "The inch is: " << inch << endl;
    cout << "The feet is: " << feet << endl;
}
    
