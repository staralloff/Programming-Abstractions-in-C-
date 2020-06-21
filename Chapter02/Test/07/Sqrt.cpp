/*
 * This program use a method called successive approximation to
 * implements the function "sqrt(x)" in <cmath>
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
using namespace std;

/* Function declare */
double S_asqrt(double x);

int main() {
    cout << "Input a number x: ";
    double number;
    cin >> number;
    cout << "The Square Root is: " << S_asqrt(number) << endl;
    return 0;
}

double S_asqrt(double x) {
    double Guess;
    double nextGuess = x / 2;
    do {
        Guess = nextGuess;
        nextGuess = (Guess + x / Guess) / 2;
    } while (Guess != nextGuess);
    return nextGuess;
}
