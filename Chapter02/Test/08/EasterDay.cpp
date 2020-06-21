/*
 * This program use Year to calculate the Easter Day.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */
#include <iostream>
using namespace std;

/* Function declare */
void findEaster(int year, string & month, int & day);

int main() {
    int y;
    string m;
    int d;
    cout << "Please input the year: ";
    cin >> y;
    findEaster(y, m, d);
    cout << "The Easter Day is: " << y << "年" << m << d << "日" << endl;
    return 0;
}

void findEaster(int year, string & month, int & day) {
    int A, B, M, N, Q, W;
    N = year - 1900;
    A = N % 19;
    Q = N / 4;
    B = (7 * A + 1) / 19;
    M = (11 * A + 4 - B) % 29;
    W = (N + Q + 31 - M) % 7;
    day = 25 - M - W;
    if(day > 0) {
        month = "4月";
    }else if(day < 0) {
        month = "3月";
        day += 31;
    }else{
        month = "3月";
        day = 31;
    }
}
