// mytime0.cpp -- implementing Time methods
#include <iostream>
#include "mytime2.h"

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

Time Time::operator-(const Time & t) const 
{
    Time diff;
    int tot1, tot2;
    tot1=t.minutes +(60 * t.hours);
    tot2=this->minutes +(60 * this->hours);
    diff.minutes= (tot2-tot1) % 60;
    diff.hours= (tot2-tot1) / 60;
    return diff;
}

Time Time::operator*(double mult) const 
{
    Time result;
    long totalminutes=(this->hours*mult*60)+(mult*this->minutes);
    result.hours= totalminutes /60;
    result.minutes=totalminutes % 60;
    return result;
}

void Time::Show() const 
{
    std::cout << hours << " hours, " << minutes << " minutes";
}