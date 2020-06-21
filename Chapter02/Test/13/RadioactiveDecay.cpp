/*
 * This program simulate 10000 atoms' radioactive decay.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/* function declare */
void radioactiveDecay(int & atoms, int & year);

int main() {
    int a = 10000;
    int y = 1;
    srand((unsigned)time(NULL));
    cout << "There are " << a << " atoms initially." << endl;
    radioactiveDecay(a, y);
    return 0;
}

void radioactiveDecay(int & atoms, int & year) {
    if(atoms == 0) {
        return;
    }else{
        int r = 0;
        double rate;
        for(int i = 0; i < atoms; i++) {
            rate = rand() / double(RAND_MAX);
            if(rate >= 0.5)
                r++;
        }
        cout << "There are " << r << " atoms at the end of year " << year << "." << endl;
        year++;
        radioactiveDecay(r, year);
    }
}
