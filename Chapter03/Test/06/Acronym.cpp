/*
 * This program output the acronym of the input string.
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

string acronym(string str);

int main(){
    string s;
    cout << "Enter the string: " << endl;
    getline(cin, s);
    cout << "The acronym of the string is: " << acronym(s) << endl;
    return 0;
}

string acronym(string str) {
    string rev = "";
    int begin;
    if(str.at(0) >> 5 != 2 && str.at(0) >> 5 != 3) {
        begin = 0;
    }else{
        begin = 1;
        rev += str.at(0);
    }
    for(; begin < str.length() - 1; begin++) {
        if(str.at(begin) >> 5 != 2 && str.at(begin) >> 5 != 3)
            rev += str.at(begin+1);
    }
    return rev;
}
