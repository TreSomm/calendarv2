#include "Calendar.h"
#include <iostream>
using namespace std;

void Calendar::displayMonth(int month, int year) {
    int daysInMonth = getDaysInMonth(month, year);
    extDateType date;
    date.setDate(year, month, 1);
    int startingDay = getStartingDayOfMonth(month, year);
    cout << "-----------------------------\n";
    cout << "   " << date.getMonthName() << " " << year << "\n";
    cout << "-----------------------------\n";
    cout << "Sun Mon Tue Wed Thu Fri Sat\n";
    int dayCounter = 0;
    for (int i = 0; i < startingDay; ++i) {
        cout << "    ";
        dayCounter++;
    }
    for (int i = 1; i <= daysInMonth; ++i) {
        cout << (i < 10 ? " " : "") << i << "  ";
        dayCounter++;
        if (dayCounter % 7 == 0)
            cout << "\n";
    }
    cout << "\n-----------------------------\n";
}

int Calendar::getDaysInMonth(int month, int year) {
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            return 29;
        else
            return 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

int Calendar::getStartingDayOfMonth(int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (1 + (26 * (month + 1)) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    return (h + 6) % 7;
}
