#include <iostream>
#include <string>
using namespace std;

/* function declare */
bool endsWith(string str, string suffix);

int main()
{
    string str1, str2;
    cout << "Please type the str: " << endl;
    cin >> str1;
    cout << "Please type the suffix: " << endl;
    cin >> str2;
    cout << endsWith(str1, str2) << endl;
    return 0;
}

bool endsWith(string str, string suffix)
{
    if(str.substr(str.length()-suffix.length(), suffix.length()).compare(suffix) == 0)
        return true;
    else
        return false;
}
