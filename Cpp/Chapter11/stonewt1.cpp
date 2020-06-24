// stonewt.cpp --Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt1.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    this->stone = int(lbs) / Lbs_per_stn; // integer division
    this -> pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs); // the second part of this equation is the double remainder
    this -> pounds = lbs;
}

// construct Stonewt object from stone double values
Stonewt::Stonewt(int stn, double lbs)
{
    this->stone = stn;
    this->pds_left = lbs;
    this->pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() // default constructor, wt =0 
{
    stone = pounds = pds_left =0;
}

Stonewt::~Stonewt() // destructor 
{
}

// show weight in stones
void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds 
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}

// conversion functions 

Stonewt::operator int() const
{
    return int (pounds +0.5);
}

Stonewt::operator double() const
{
    return pounds;
}