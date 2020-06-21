/*
 This file output the 1-100's sum.
 Author: Xin, Shi(Orion)
 Created: 2020/06.
 */
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for(int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << " 1 to 100 sum is: " << sum <<endl;
}
