#include "extDateType.h"
using namespace std;

string extDateType::getMonthName() const {
    return monthNames[getMonth() - 1];
}