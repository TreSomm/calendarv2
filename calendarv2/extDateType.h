#ifndef extDateType_h
#define extDateType_h

#include <string>
#include "dateType.h"
using namespace std;

class extDateType : public dateType {
public:
    string getMonthName() const;
private:
    const string monthNames[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
};

#endif