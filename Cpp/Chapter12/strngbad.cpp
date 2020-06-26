// strngbad.cpp --Strngbad.cpp class methods
#include <cstring>
#include "strngbad.h"
using std::cout;

// initializing static class member 
int StringBad::num_strings = 0;


// class methods 
// construct String Bad from C String 

StringBad::StringBad(const char * s)
{
    len = std::strlen(s);   // set size 
    str = new char[len +1]; // allot storage
    std::strcpy(str,s);     // initialize pointer
    num_strings++;          // set object count 
    cout << num_strings << ": \"" << str << "\" object created:\n"; // For your information
}

StringBad::StringBad()  // default constructor
{
    len =4;
    str = new char[4];
    std::strcpy(str,"C++");     // default string
    num_strings++;
    cout << num_strings << ":\"" << str << "\" default object created\n"; // FYI
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" object deleted, "; // FYI
    --num_strings;
    cout << num_strings << " left\n"; // FYI
    delete [] str; // required 
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}