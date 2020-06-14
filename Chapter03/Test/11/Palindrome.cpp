/*
 * This program judge if a sentence is a palindrome.
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

bool isSentencePalindrome(string str);
string preTreatment(string str);

int main()
{
    string s;
    cout << "This program tests for sentence palindrome." << endl;
    cout << "Indicate the end of the input with a blank line." << endl;
    cout << "Enter a sentence: ";
    while(getline(cin, s)) {
        string s1 = preTreatment(s);
        if(isSentencePalindrome(s1))
	    cout << "That sentence is a palindrome." << endl;
	else
	    cout << "That sentence is not a palindrome." << endl;
        cout << "Enter a sentence: ";
    }
    return 0;
}

bool isSentencePalindrome(string str)
{
    int rev = 1;
    for(int begin = 0, end = str.length()-1; (end - begin) >= 1; begin++,end--) {
        if(str.at(begin) == str.at(end) || (str.at(begin) + 0x20) == str.at(end) || str.at(begin) == (str.at(end) + 0x20))
            rev &= 1;
        else
            rev &= 0;
    }
    return rev;
}

string preTreatment(string str)
{
    string rev = "";
    for(int i = 0; i < str.length(); i++) {
        if(str.at(i) >> 5 == 2 || str.at(i) >> 5 == 3)
            rev += str.at(i);
    }
    return rev;
}
