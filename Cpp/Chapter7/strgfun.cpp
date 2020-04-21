// strgfun.cpp -- functions with a string argument

#include <iostream>

int c_in_str(const char * str, char ch); // function prototype that declares a pointer that can change the underlying string

int main()
{
    using namespace std;

    char mmm[15] = "minimum"; // string in an array

    // some systems require preceding char with static to enable 
    // array initialization

    const char *wail = "ululate"; // wail points to string

    int ms = c_in_str(mmm,'m');
    int us = c_in_str(wail,'u');

    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;

    return 0;

}

// this function counts the number of ch characters
// in the string str

int c_in_str(const char * str, char ch)
{
    int count = 0;
    
    while (*str)  // quit *str is '\0' i guess that evaluates to false
    {
        if (*str == ch)
        {
            count++;
        }
        str++; // move the pointer to the next char 
    }
    return count;
}