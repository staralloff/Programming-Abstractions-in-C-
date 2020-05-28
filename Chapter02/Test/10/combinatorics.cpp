/*
 * This interface implements combinatorics.h
 */
#include <iostream>
#include "combinatorics.h"
using namespace std;

int main() {
    int a, b;
    cout << "Enter the number of object(a): ";
    cin >> a;
    cout << "Enter the number of object(b): ";
    cin >> b;
    cout << "C(n, k) = " << combinations(a, b) <<endl;
    cout << "P(n, k) = " << permutations(a, b) <<endl;
    return 0;
}

int combinations(int n, int k) {
    int result = 1;
    for (int i = 0; i < k; i++) {
        result *= n;
        n--;
    }
    return result / fact(k);
}

int permutations(int n, int k) {
    int result = 1;
    for (int i = 0; i < k; i++) {
        result *= n;
        n--;
    }
    return result;
}

int fact(int m) {
    int result = 1;
    for (int i = 1; i <= m; i++) {
        result *= i;
    }
    return result;
}
