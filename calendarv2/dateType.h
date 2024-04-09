#ifndef dateType_h
#define datetype_h

class dateType {
public:
    void setDate(int year, int month, int day);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
private:
    int year;
    int month;
    int day;
};

#endif
