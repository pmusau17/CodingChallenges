// strctptr.cpp -- functions with pointer to structure arguments 
#include <iostream>
#include <cmath>
using namespace std;

// structure templates 
struct polar
{
    double r; // distance from origin
    double theta;  // direction from origin
};

struct rect
{
    double x; // horizontal distance from origin
    double y; // vertical distnace from origin
};

// prototypes 
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main()
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";

    while(cin >> rplace.x >> rplace.y) 
    {
        rect_to_polar(&rplace,&pplace); // pass the addresses
        show_polar(&pplace);
        cout << "Next two numbers (q to quit)";
    }

    cout << "Done.\n";
    
    return 0;
}

// show polar coordinates, converting angle to degrees

void show_polar(const polar * pda)
{
    cout << "Distance = " << (*pda).r << endl;
    cout << "Angle = " << double((*pda).theta * 57.29577952) << " degrees." << endl;
}

// convert rectangular to polar coordinates

void rect_to_polar(const rect * xy_pos, polar * pda)
{
    (*pda).r = sqrt((xy_pos->x*xy_pos->x)+(xy_pos->y*xy_pos->y));
    (*pda).theta = atan2(xy_pos->y,xy_pos->x);
}