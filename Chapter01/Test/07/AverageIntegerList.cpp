/*
 * File: AverageIntegerList.cpp
 * ----------------------------
 * This program add a list of Integers. culculate the average.
 * The end of input is indicated by entering a sentinel value,
 * which is defined by setting the value of the constant SENTINEL.
 */

#include <iostream>
using namespace std;

/*
 * Constant: SENTINEL
 * ------------------
 * Defines the value used to terminate the input list. This value must
 * be chosen so that it is not one that could naturally appear in the
 * input data. In the AverageIntegerList application, the value -1 is an
 * appropriate sentinel because the user can simply skip any -1 values
 * in the input.
 */

const int SENTINEL = -1;

/* Main program */

int main() {
    cout << "This program adds a list of numbers." << endl;
    cout << "Use " << SENTINEL << " to signal the end." << endl;
    double average = 0;
    double total = 0;
    int count = -1;
    while(true) {
        double value;
        cout << " ? ";
        cin >> value;
        count++;
        if (value == SENTINEL) break;
        total += value;
    }
    average = total/count;
    cout << "The average is " << average << endl;
    return 0;
}
