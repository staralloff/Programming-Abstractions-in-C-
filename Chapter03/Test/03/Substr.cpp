/*
 * File: Substr.cpp
 * ----------------
 * This program implements substr method without strlib
 * return the  length N sub string from position pos.
 * Note:
 * 1.if miss n or n bigger than str.length, the sub string should ends
 * at the tail of str.
 * 2.if pos bigger than str.length, print the error msg.
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

void error(string msg);
string substr(string str, int pos, int n);

int main() {
    string s;
    int position, len;
    cout << "Enter the string: " << endl;
    getline(cin, s);
    cout << "Enter the sub string's start position and sub string's length, separate with space: " << endl;
    cin >> position >> len;
    cout << substr(s, position, len) << endl;
    return 0;
}

string substr(string str, int pos, int n) {
    if(pos > str.length()) error("pos is out of string's length");
    string rev = "";
    int end = (n==0 ? str.length() : pos + n);
    for(int i = pos; i < end && i < str.length(); i++) {
        rev += str.at(i);
    }
    return rev;
}

void error(string msg) {
    cerr << msg << endl;
    exit(EXIT_FAILURE);
}
