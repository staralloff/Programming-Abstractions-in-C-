/*
 * This program output a perfect integer between 1 and 10000.
 */
#include <iostream>
using namespace std;

/* Function declare */
bool isPerfect(int n);

int main() {
    for(int i = 1; i < 10000; i++) {
        if(isPerfect(i))
            cout << i << " is a Perfect Integer." << endl;
    }
    return 0;
}

bool isPerfect(int n) {
    int s = 0;
    for(int i = 1; i < n; i++) {
        if(n%i == 0)
            s += i;
    }
    if(s == n)
        return true;
    else
        return false;
}
