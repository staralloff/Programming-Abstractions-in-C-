/*
 This file output the largest and second largest number in input numbers that end with 0.
 Author: Xin, Shi(Orion)
 Created: 2020/06.
 */
#include <iostream>
using namespace std;

int main() {
    cout << "This program finds the largest integer in a list." << endl;
    cout << "Enter 0 to signal the end of the list." << endl;
    int largest = 0;
    int second = 0;
    int N;
    while(true) {
        cout << " ? ";
        cin >> N;
        if(N==0) break;
        if(N>=largest) {
            second = largest;
            largest = N;
        }
    }
    cout << "The largest value was " << largest << endl;
    cout << "The second largest value was " << second << endl;
    return 0;
}
