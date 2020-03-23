//array.cpp --small arrays of integers
#include <iostream>

int main()
{
    using namespace std;
    int yams[3]; //creates an array with three elements 
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 9;
    cout << yams[2] << endl;


    int yamcosts[3] ={20,30,5}; // create, initialize array
    //NOTE: if your C++ compiler doesn't accept this  use
    // static int yamcosts[3]


    cout <<  "\nSize of yams array = " << sizeof yams;
    cout << " bytes. \n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes." << endl;
    
    return 0;

}