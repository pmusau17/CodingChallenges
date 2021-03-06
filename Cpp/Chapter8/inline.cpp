// inline.cpp -- uisng an inline function 
#include <iostream>

// an inline function definition 
inline double square(double x) {return x * x;}

int main()
{
    using namespace std;
    double a,b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5); // can pass expressions

    cout << "a = " << a << ", b = " << b << endl;

    cout << "c = " << c;

    cout << ", c squared = " << square(c++) << endl; // interesting the increment happened after the function call

    cout << "Now c = " << c << endl;

    return 0;
}