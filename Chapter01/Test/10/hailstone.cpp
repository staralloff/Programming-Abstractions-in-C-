#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    while(true) {
        if(n==1) break;
        if(n%2==1){
            cout << n << " is odd, so I multiply by 3 and add 1 to get " << n*3+1 << endl;
            n = n * 3 + 1;
        }else{
            cout << n << " is even, so I divide it by 2 to get " << n/2 << endl;
            n = n/2;
        }
    }
    return 0;
}
