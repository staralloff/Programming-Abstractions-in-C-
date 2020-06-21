/*
 This file factors a number with prime factorization.
 Author: Xin, Shi(Orion)
 Created: 2020/06.
 */
#include <iostream>
using namespace std;

int main() {
    cout << "This program factors a number." << endl;
    long n;
    cout << "Enter number to be factored: ";
    cin >> n;
    if(n<=1)
        cout << n << endl;
    while (n != 1) {
        for(int i=2;i<=n;++i) {
            if(n%i==0) {
                cout << i << " ";
                n=n/i;
                break;
            }
        }
    }
    cout << endl;
    return 0;
}
    
