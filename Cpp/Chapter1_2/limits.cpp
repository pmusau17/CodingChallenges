//limits.cpp investigation of integer limits
#include <iostream>
#include <climits>  //use limits.h for older systems

int main()
{
    using namespace std;
    int n_int = INT_MAX; //initialize n_int to max int value
    short n_short= SHRT_MAX; //symbols defined in limits.h file
    long n_long= LONG_MAX; 

    //size of operator yields the size of type or of variable
    // these are just examples to show you how to use size of
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;

    //show the maximum values
    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl; 
    cout << "long: " << n_long << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl; 
    cout << "Bits per byte = " << CHAR_BIT << endl; 
    return 0;

}

