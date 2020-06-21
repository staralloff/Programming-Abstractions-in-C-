/*
 * This file print ordinal form of the input number.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
#include <string>
using namespace std;

/* Function prototypes */

string createOrdinalForm(int n);

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The ordinal form is: " << createOrdinalForm(n) << endl;
    return 0;
}

string createOrdinalForm(int n)
{
    if(n == 1)
        return "1st";
    else if(n == 2)
        return "2nd";
    else if(n == 3)
        return "3rd";
    else
        return to_string(n)+"th";
}
