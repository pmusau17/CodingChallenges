// mytime0.cpp -- implementing Time methods
#include <iostream>
#include "mytime1.h"

// constructors
Time::Time()
{
    this->hours=this->minutes=0;
}

Time::Time(int h, int m)
{
    this->hours = h;
    this->minutes = m;
}

// member functions 
void Time::AddMin(int m)
{
    this->minutes+=m;
    this->hours +=this->minutes/60;
    this->minutes &=60;
}

void Time::AddHr(int h)
{
    this->hours +=h;
}

void Time::Reset(int h, int m)
{
    this->hours =h;
    this->minutes =m;
}

Time Time::operator+(const Time & t) const 
{
    Time sum;
    sum.minutes = this->minutes + t.minutes;
    sum.hours = this->hours +t.hours + sum.minutes/60;
    sum.minutes %=60;
    return sum; 
}

void Time::Show() const 
{
    std::cout << hours << " hours, " << minutes << " minutes";
}