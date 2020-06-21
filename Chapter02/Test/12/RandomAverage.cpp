/*
 * This program let user input a integer N, then create N random integer, between 0 to 1.
 * at last, it will output the average.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    int N;
    // because rand() function is not real random function, use srand();
    srand((unsigned)time(NULL));
    cout << "Please input a number N: " << endl;
    cin >> N;
    double d;
    double sum;
    for(int i = 0; i < N; i++) {
        d = rand() / double(RAND_MAX);
        cout << "Number " << i << " is " << d << endl;
        sum += d;
    }
    cout << "The average is: " << sum / N << endl;
}
