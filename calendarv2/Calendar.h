#ifndef Calendar_h
#define Calendar_h

#include "extDateType.h"

class Calendar {
public:
    void displayMonth(int month, int year);
private:
    int getDaysInMonth(int month, int year);
    int getStartingDayOfMonth(int month, int year);
};

#endif