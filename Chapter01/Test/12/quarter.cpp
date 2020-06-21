/*
 This file calculate the pi with cut the quarter to more and more rectangle,the more the better.
 Author: Xin, Shi(Orion)
 Created: 2020/06.
 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const float r = 0.0508;
    float h;
    float w = r/10000;
    float quarter = 0;
    float x;
    for(int i = 1; i <= 10000; i++) {
        x = w * i;
        h = sqrt((r+x)*(r-x));
        quarter = quarter + w*h;
    }
    cout << "quarter is " << quarter << endl;
    return 0;
}
