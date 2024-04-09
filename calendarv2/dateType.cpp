#include "dateType.h"

void dateType::setDate(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

int dateType::getYear() const {
    return year;
}

int dateType::getMonth() const {
    return month;
}

int dateType::getDay() const {
    return day;
}