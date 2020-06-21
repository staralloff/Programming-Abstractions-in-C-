/*
 * This program output a prime number between 1 and 100.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
using namespace std;

/* Function declare */
bool isPrime(int n);

int main() {
    for(int i = 2; i <= 100; i++) {
        if(isPrime(i))
            cout << i << " is a Prime." << endl;
    }
    return 0;
}

bool isPrime(int n) {
    if(n == 2)
        return true;
    int flag = 0;
    for(int i = 2; i < n; i++) {
        if(n%i == 0)
            flag++;
    }
    if(flag == 0)
        return true;
    else
        return false;
}
