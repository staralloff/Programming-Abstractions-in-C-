#include <iostream>
using namespace std;

const double i = 0.0254;
const double j = 12;

int main() {
    double length;
    cout << "The length meter is: ";
    cin >> length;
    cout << "The length inch is: " << length / i << endl;
    cout << "The length feet is: " << length / i * j << endl;
    return 0;
}
