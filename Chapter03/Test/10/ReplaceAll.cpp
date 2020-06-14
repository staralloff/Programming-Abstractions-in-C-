/*
 * This program return a string which replace str1 with str2.
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

string replaceAll(string str, char c1, char c2);
string replaceAll(string str, string s1, string s2);

int main()
{
    cout << replaceAll("nannies", 'n', 'd') << endl;
    cout << replaceAll("hahahaha", "ha", "xi") << endl;
    return 0;
}

string replaceAll(string str, char c1, char c2)
{
    string rev = "";
    for(int i = 0; i < str.length(); i++) {
        if(str.at(i) == c1) {
            rev += c2;
        }else{
            rev += str.at(i);
        }
    }
    return rev;
}

string replaceAll(string str, string s1, string s2)
{
    while(str.find(s1) != string::npos) {
        str.replace(str.find(s1), s1.length(), s2);
    }
    return str;
}
