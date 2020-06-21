/*
 * This file delete the blank characters in string.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* Function declare */
void trim(string str);
bool isspace(char ch);

int main() {
    string s;
    cout << "Please input a string: " << endl;
    getline(cin, s);
    trim(s);
    return 0;
}

void trim(string str)
{
    string newStr = "";
    for(int i=0;i<str.length();i++) {
        if(!isspace(char(str.at(i)))) {
            newStr += str[i];
        }
    }
    cout << newStr << endl;
}

bool isspace(char ch)
{
    switch(ch){
        case ' ': case '\t': case '\n': case '\f': case '\v': case '\r':
            return true;
        default:
            return false;
    }
}
