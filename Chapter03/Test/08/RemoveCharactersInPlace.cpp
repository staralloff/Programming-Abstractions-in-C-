/*
 * This program like test 07 with erase(pos, n) method in <string>
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

void removeCharactersInPlace(string & str, string remove);

int main()
{
    string s, re;
    cout << "Enter the string: " << endl;
    getline(cin, s);
    cout << "Enter the remove string: " << endl;
    cin >> re;
    removeCharactersInPlace(s, re);
    cout << "After remove characters: " << s << endl;
    return 0;
}

void removeCharactersInPlace(string & str, string remove)
{
    for(int i = 0; i < remove.length(); i++) {
        while(str.find(remove.at(i)) != string::npos) {
            str.erase(str.find(remove.at(i)), 1);
        }
    }
}
