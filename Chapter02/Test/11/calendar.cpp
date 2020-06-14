/*
 * This program calculate all months' days of the year which you input.
 */

#include <iostream>
#include <string>
#include "calendar.h"
using namespace std;

int main() {
    int year;
    cout << "Please input the year: " << endl;
    cin >> year;
    cout << monthToString(JANUARY) << " has " << daysInMonth(JANUARY, year) << " days." << endl;
    cout << monthToString(FEBRUARY) << " has " << daysInMonth(FEBRUARY, year) << " days." << endl;
    cout << monthToString(MARCH) << " has " << daysInMonth(MARCH, year) << " days." << endl;
    cout << monthToString(APRIL) << " has " << daysInMonth(APRIL, year) << " days." << endl;
    cout << monthToString(MAY) << " has " << daysInMonth(MAY, year) << " days." << endl;
    cout << monthToString(JUNE) << " has " << daysInMonth(JUNE, year) << " days." << endl;
    cout << monthToString(JULY) << " has " << daysInMonth(JULY, year) << " days." << endl;
    cout << monthToString(AUGUST) << " has " << daysInMonth(AUGUST, year) << " days." << endl;
    cout << monthToString(SEPTEMBER) << " has " << daysInMonth(SEPTEMBER, year) << " days." << endl;
    cout << monthToString(OCTOBER) << " has " << daysInMonth(OCTOBER, year) << " days." << endl;
    cout << monthToString(NOVEMBER) << " has " << daysInMonth(NOVEMBER, year) << " days." << endl;
    cout << monthToString(DECEMBER) << " has " << daysInMonth(DECEMBER, year) << " days." << endl;
    return 0;
}

int daysInMonth(Month m, int & y) {
    switch (m) {
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
          return 30;
        case FEBRUARY:
          return (isLeapYear(y)) ? 29 : 28;
        default: 
          return 31;
    }
}

bool isLeapYear(int & y) {
    return ((y % 4 == 0 && y % 100 != 0)) || (y % 400 == 0);
}

string monthToString(Month m) {
    switch (m) {
        case JANUARY: return "JANUARY";
        case FEBRUARY: return "FEBRUARY";
        case MARCH: return "MARCH";
        case APRIL: return "APRIL";
        case MAY: return "MAY";
        case JUNE: return "JUNE";
        case JULY: return "JULY";
        case AUGUST: return "AUGUST";
        case SEPTEMBER: return "SEPTEMBER";
        case OCTOBER: return "OCTOBER";
        case NOVEMBER: return "NOVEMBER";
        case DECEMBER: return "DECEMBER";
        default: return "???";
    }
}
