/*
 * This is a scrabble game which indicate every letter's score
 * than print the sum.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

int scoreOfLetter(char ch);

int main(){
    string s;
    int sum = 0;
    cout << "Enter the string: " << endl;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++) {
        sum += scoreOfLetter(s.at(i));
    }
    cout << "The score of letter '" << s << "' is: " << sum << endl;
    return 0;
}

int scoreOfLetter(char ch) {
    switch (ch) {
        case 0x41: case 0x45: case 0x49: case 0x4C: case 0x4E: case 0x4F:
        case 0x52: case 0x53: case 0x54: case 0x55:
          return 1;
        case 0x44: case 0x47:
          return 2;
        case 0x42: case 0x43: case 0x4D: case 0x50:
          return 3;
        case 0x46: case 0x48: case 0x56: case 0x57: case 0x59:
          return 4;
        case 0x4B:
          return 5;
        case 0x4A: case 0x58:
          return 8;
        case 0x51: case 0x5A:
          return 10;
        default:
          return 0;
    }
}
