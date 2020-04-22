// strctfun.cpp -- functions with a structure argument (2D)

#include <iostream>
#include <cmath> // import cmath library
using namespace std;

// structure declarations
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

polar rect_to_polar(rect xy_pos); // function prototype for rectangular to polar conv
void show_polar(polar dapos); // display polar

int main()
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";

    while(cin >> rplace.x >> rplace.y) 
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit)";
    }

    cout << "Done.\n";
    
    return 0;
}

// convert rectangular to polar coordinates

polar rect_to_polar(rect xy_pos)
{   
    polar ans;
    ans.r = sqrt((xy_pos.x*xy_pos.x)+(xy_pos.y*xy_pos.y));
    ans.theta = atan2(xy_pos.y,xy_pos.x);
    return ans; // return a polar structure
}

// show polar coordinates, converting angle to degrees

void show_polar(polar dapos)
{   
    cout << "Distance = " << dapos.r << endl;
    cout << "Angle = " << double(dapos.theta * 57.29577952) << " degrees." << endl;
}

