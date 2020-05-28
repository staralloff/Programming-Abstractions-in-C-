/*
 * This program output a charts to describe WindChill with wind speed and
 * Temperature.
 */
#include <iostream>
#include <cmath>
using namespace std;

/* Function declare */
void windChill(int & t, int & v, int & w);

int main() {
    int temp;
    int speed;
    int wc;
    cout << "----------------------------Temperature(°F)----------------------------" << endl;
    cout << " Calm 40 35 30 25 20  15  10  5  0  -5  -10 -15 -20 -25 -30 -35 -40 -45" << endl;
    for(speed = 5; speed <= 60; speed += 5) {
        if(speed == 5) {
            cout << "   " << speed << " ";
        }else{
            if(speed == 25) {
                cout << " W " << speed;
            }else if(speed == 30) {
                cout << " i " << speed;
            }else if(speed == 35) {
                cout << " n " << speed;
            }else if(speed == 40) {
                cout << " d " << speed;
            }else{
                cout << "   " << speed;
            }
        }
        for(temp = 40; temp >= -45; temp -= 5) {
            windChill(temp, speed, wc);
            cout << " " << wc;
            if(temp == -45) cout << endl;
        }
    }
    cout << "-----Wind Chill(°F)=35.74+0.6215*T-35.75*(V^0.16)+0.4275*T*(V^0.16)----" << endl;
    cout << "-----------------Where,T=Air Temperature(°F) V=Wind Speed(mph)---------" << endl;
    cout << "-------The format of the table is not sorted out in detail here.-------" << endl;
    return 0;
}

void windChill(int & t, int & v, int & w) {
    double res = 35.74 + 0.6215 * t - 35.75 * pow(v, 0.16) + 0.4275 * t * pow(v, 0.16);
    if(res >= 0)
        w = int(res+0.5);
    else
        w = int(res-0.5);
}
