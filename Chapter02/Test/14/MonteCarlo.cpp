/*
 * This program use random to calculate PI.
 */
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    double x, y;
    double r;
    int count = 0;
    srand((unsigned)time(NULL));
    for(int i = 0; i < 10000; i++) {
        x = rand() / double(RAND_MAX);
        y = rand() / double(RAND_MAX);
        if(x * x + y * y < 1)
            count++;
    }
    r = count / double(10000);
    cout << "The PI/4 is almost: " << r << endl;
    return 0;
}
