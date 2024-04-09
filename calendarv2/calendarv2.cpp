#include <iostream>
#include "dayType.h"
#include "dateType.h"
#include "extDateType.h"
#include "Calendar.h"
using namespace std;

int main() {
    Calendar calendar;
    int month, year;
    cout << "Please Enter month (1-12): ";
    cin >> month;
    cout << "Please Enter year (1990+): ";
    cin >> year;
    calendar.displayMonth(month, year);
    return 0;
}