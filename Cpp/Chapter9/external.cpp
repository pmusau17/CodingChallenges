// external.cpp
#include <iostream>
using namespace std; 

// external static variable 
double warming = 0.3;

// function prototypes 
void update(double dt);
void local();

int main()        // uses global variable 
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1),  // call function to change warming
    cout << "Global warming is " << warming << " degrees.\n";
    local();
    cout << "Global warming is " << warming << " degrees.\n";
    return 0;
}

void update (double dt)  // modifies global variable
{
    extern double warming; // optional redeclaration
    warming += dt;
    cout << "Updating global warming to " << warming;
    cout << " degrees.\n";
}

void local()  // uses local variable
{
    double warming = 0.8; // new variable hides external one

    cout << "Local warming = " << warming << " degrees.\n";
    // Access global variable with the 
    // scope resolution operator

    cout << "But global warming = " << ::warming;
    cout << " degrees.\n";
}