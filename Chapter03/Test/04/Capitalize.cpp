/*
 * This Program return a string which the first character
 * is Capital.
 * For example: capitalize("BOOLEAN") and capitalize("boolean")
 * all return "Boolean"
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

string capitalize(string str);

int main(){
    string s;
    cout << "Enter the string: " << endl;
    getline(cin, s);
    cout << capitalize(s) << endl;
    return 0;
}

string capitalize(string str) {
    string rev;
    rev += (str.at(0) >= 0x61 && str.at(0) <= 0x7A) ? (str.at(0) - 0x20) : str.at(0);
    for(int i = 1; i < str.length(); i++) {
        if(str.at(i) >= 0x41 && str.at(i) <= 0x5A)
            rev += (str.at(i) + 0x20);
        else
            rev += str.at(i);
    }
    return rev;
}

