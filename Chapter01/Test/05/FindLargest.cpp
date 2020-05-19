#include <iostream>
using namespace std;

int main() {
    cout << "This program finds the largest integer in a list." <<endl;
    cout << "Enter 0 to signal the end of the list." <<endl;
    int max=0;
    int N;
    while(true) {
        cout << " ? ";
        cin >> N;
        if(N==0) break;
        if(N>=max) max = N;
    }
    cout << "The largest value was " << max << endl;
    return 0;
}
