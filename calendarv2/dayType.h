#ifndef dayType_h
#define dayType_h
#include <iostream>
#include <string>

using namespace std;

class dayType {
public:
    void setDay(int day) {
        this->day = day;
    }
    int getDay() const {
        return day;
    }
    string getDayName() const {
        return dayNames[day];
    }
private:
    int day;
    const string dayNames[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
};
#endif