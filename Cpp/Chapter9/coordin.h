// coordin.h -- structure templates and function prototypes
// structure templates

#ifndef COORDIN_H
#define COORDIN_H

struct polar
{
    double distance; // r (distance from origin)
    double angle; //
};

struct rect
{
    double x; // horizontal distance from origin
    double y; // vertical distance from origin
};


// prototypes

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif 
