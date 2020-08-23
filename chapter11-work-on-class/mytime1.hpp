#ifndef MYTIME1_HPP_
#define MYTIME1_HPP_
#include <iostream>

class Time
{
private:
    int hours;
    int minutes;

public:
    Time(){};
    Time(int hours, int minutes)
    {
        this->hours = hours;
        this->minutes = minutes;
    }
    Time operator+(const Time &t) const;
    Time operator+(const int min) const;
    void show();

    friend Time operator+(int min, const Time &t) {
        return t + min;
    }

    friend std::ostream & operator<<(std::ostream &out, Time &t) {
        out << t.hours << ":" << t.minutes;
        return out;
    }
};

#endif