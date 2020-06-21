/*
 * File: calendar.h
 * ----------------
 * This interface has three functions.
 * Author: Xin, Shi(Orion)
 * Created: 2020/06.
 */

#ifndef _calendar_h
#define _calendar_h

enum Month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int daysInMonth(Month m, int & y);

bool isLeapYear(int & y);

std::string monthToString(Month m);

#endif
