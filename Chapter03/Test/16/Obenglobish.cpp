/*
 * This program implements a method called obenglobish.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

string obenglobish(string & w);
bool isMonophthong(char ch);

int main()
{
    while(true) {
        cout << "Enter a word: ";
        string word;
	getline(cin, word);
        if (word == "") break;
        string trans = obenglobish(word);
        cout << word << " -> " << trans << endl;
    }
    return 0;
}

string obenglobish(string & w)
{
    string rev = "";
    if(isMonophthong(w.at(0))) {
	rev += "ob";
	rev += w.at(0);
    }else{
	rev += w.at(0);
    }
    for(int i = 1; i < w.length(); i++) {
        if((isMonophthong(w.at(i-1)) && isMonophthong(w.at(i))) || (i == (w.length()-1) && w.at(w.length()-1) == 0x65)) {
	    rev += w.at(i);
        }else if(isMonophthong(w.at(i))) {
	    rev += "ob";
            rev += w.at(i);
        }else{
            rev += w.at(i);
	}
    }
    return rev;
}

bool isMonophthong(char ch)
{
    switch(ch) {
      case 0x61: case 0x65: case 0x69: case 0x6F: case 0x75:
          return true;
      default:
          return false;
    }
}
