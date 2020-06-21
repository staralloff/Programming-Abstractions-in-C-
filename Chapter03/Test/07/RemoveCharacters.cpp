/*
 * This program remove the characters which is given in the string 'remove',
 * then return the new string.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

string removeCharacters(string str, string remove);
bool isSubcharacter(string str, char ch);

int main(void) {
    string s, re;
    cout << "Enter the string: " << endl;
    getline(cin, s);
    cout << "Enter the remove: " << endl;
    cin >> re;
    cout << "The return is: " << removeCharacters(s, re) << endl;
    return 0;
}

string removeCharacters(string str, string remove) {
    string rev = "";
    for(int i = 0; i < str.length(); i++) {
        if(remove.find(str.at(i)) == string::npos)
	    rev += str.at(i);
    }
    return rev;
}
