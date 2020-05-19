#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for(int i = 1; i <= N; i++) {
        sum = sum + i * 2 - 1;
    }
    cout << " front N odd sum is: " << sum <<endl;
    return 0;
}
