#include <iostream>
using namespace std;

int main() {
    int n;
    float quarter = 0;
    for(int i = 1; i <= 10000; i++) {
        n = i*2-1;
        if(i%2==1) {
            quarter = quarter + float(1) / n;
        }else{
            quarter = quarter - float(1) / n;
        }
    }
    cout << "pi/4 is " << quarter << endl;
    return 0;
}
