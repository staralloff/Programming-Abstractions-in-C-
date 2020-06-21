/*
 * This file return the regular plural of the input words.
 */
#include <iostream>
#include <string>
#include "RegularPlural.h"
using namespace std;

int main()
{
    string s;
    cout << "Enter a word: ";
    cin >> s;
    cout << "The Regular Plural is: " << createRegularPlural(s) << endl;
    return 0;
}

string createRegularPlural(string word)
{
    char a = word.at(word.length()-1);
    char b = word.at(word.length()-2);
    switch(a) {
	case 0x73: case 0x78: case 0x7A:
          return word+"es";
        case 0x68:
          if(b == 0x63 || b == 0x73)
	      return word+"es";
	  else
	      return word+"s";
	case 0x79:
	  if(b != 0x61 && b != 0x65 && b != 0x69 && b != 0x6F && b != 0x75) {
	      word.erase(word.length()-1, 1);
	      return word+"ies";
	  }else{
	      return word+"s";
	  }
	default:
	  return word+"s";
    }
}
