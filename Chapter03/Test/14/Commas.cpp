/*
 * This program implements digits to commas.
 * like 1000000 to 1,000,000
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

string addCommas(string digits);

int main() {
    while (true) {
        string digits;
        cout << "Enter a number: ";
        getline(cin, digits);
        if (digits == "") break;
        cout << addCommas(digits) << endl;
    }
    return 0;
}

string addCommas(string digits) {
    for(int i = digits.length()-1; i >= 0;) {
        i = i - 3;
	if(i >= 0)
            digits.insert(i+1, ",");
    }
    return digits;
}
