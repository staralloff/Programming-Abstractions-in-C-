/*
 * This program to output how may times you can get 3 consecutive heads with flip coin.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    int timer = 0;
    int flips = 0;
    double r;
    srand((unsigned)time(NULL));
    while(true) {
        if(timer == 3) break;
        r = rand() / double(RAND_MAX);
        if(r < 0.5) {
            timer += 1;
            cout << "heads" << endl;
        }else{
            timer = 0;
            cout << "tails" << endl;
        }
        flips++;
    }
    cout << "It took " << flips << " flips to get 3 consecutive heads." << endl;
    return 0;
}
