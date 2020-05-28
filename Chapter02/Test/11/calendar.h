/*
 * File: calendar.h
 * ----------------
 * This interface has three functions.
 */

#ifndef _calendar_h
#define _calendar_h

enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int daysInMonth(Month m, int & y);

bool isLeapYear(int & y);

std::string monthToString(Month m);

#endif
