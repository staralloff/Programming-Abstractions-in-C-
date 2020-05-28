/*
 * This program use a quick method to calculate P(n,k);
 */
#include <iostream>
using namespace std;

/* Function declare */
void permutations(int & n, int & k);
void error(string msg);

int main() {
    int a, b;
    cout << "Please Input the number n and k: ";
    cin >> a >> b;
    if(b > a)
        error("a must bigger or equal b!");
    permutations(a, b);
    return 0;
}

void permutations(int & n, int & k) {
    int result = 1;
    for(int i = 0; i < k; i++) {
        result *= n;
        n--;
    }
    cout << "P(n, k) = " << result << endl;
}

void error(string msg) {
    cout << msg << endl;
    exit(EXIT_FAILURE);
}
