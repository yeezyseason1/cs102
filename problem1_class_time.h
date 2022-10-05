//i dont think i really touched this file.

#pragma once
#include <iostream>

using std::ostream;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:

    Time();
    Time(int seconds);
    void setTime(int seconds);
    int convertTime();
    Time operator+(Time &right_side);
    const Time& operator=(const Time& right_side);
    friend ostream& operator<<(ostream& os, const Time& obj);
};
