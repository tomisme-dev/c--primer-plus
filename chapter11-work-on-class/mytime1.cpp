#include <iostream>

#include "mytime1.hpp"

Time Time::operator+(const Time &t) const
{
    Time result;
    int addmins = this->minutes + t.minutes;
    result.hours = this->hours + t.hours + addmins / 60;
    result.minutes = addmins % 60;
    std::cout << "result addr: " << &result << std::endl;
    return result;
}

Time Time::operator+(const int min) const
{
    Time result;
    int mins = this->minutes + min;
    result.minutes = mins % 60;
    result.hours = this->hours + mins / 60;

    return result;
}

void Time::show()
{
    using namespace std;
    cout << this->hours << ":" << this->minutes << endl;
}
