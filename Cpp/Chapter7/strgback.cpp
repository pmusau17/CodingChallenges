// strgback.cpp -- a function that returns a pointer to char

// Remember if you allocate memory, you have to deallocate it

#include <iostream>
using namespace std;

char * buildstr(char c, int n); // function prototype it will return a pointer to a string

int main()
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;

    char *ps  = buildstr(ch,times);
    cout << ps << endl;

    // the function buildstr allocates memory so you have to 
    // de-allocate the memory too

    delete [] ps; // free memory

    ps = buildstr('+',20); // reuse the pointer

    cout << ps << "-DONE-" << ps << endl;
    
    delete [] ps; // free memory

    return 0;

}

// builds string made of n c characters 

char * buildstr(char c, int n)
{
    char * pstr = new char[n+1];
    pstr[n] = '\0'; // terminate the string 

    while(n-- > 0)
    {
        pstr[n] = c;
    }
    return pstr;

}
