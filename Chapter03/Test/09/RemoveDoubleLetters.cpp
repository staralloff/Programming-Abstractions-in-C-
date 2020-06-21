/*
 * This program remove double letters in string.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

void removeDoubleLetters(string & str);

int main()
{
    string s;
    cout << "Enter the letter: " << endl;
    getline(cin, s);
    removeDoubleLetters(s);
    cout << "After remove, letter is: " << s << endl;
    return 0;
}

void removeDoubleLetters(string & str)
{
    for(int i = 0; i < str.length()-1; i++) {
        if(str.at(i) == str.at(i+1))
            str.erase(i, 1);
    }
}
