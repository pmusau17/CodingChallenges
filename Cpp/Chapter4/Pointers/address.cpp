// address.cpp using the & operator to find addresses
// had to compile this with -std=c++11 (c++ 2011 standard) 
#include <iostream>
#include <cstdint> // library that allows us to safely convert pointers to digits 

int main()
{
    using namespace std;
    int doughnuts = 6;
    double cups = 4.5;

    cout << "doughnuts value = " << doughnuts;
    cout << " and doughnuts address = " << &doughnuts << endl;

    //NOTE you may need to use unsigned (&donuts) and unsigned(&cups)
    // While cout is a smart object some versions are smarter than otheres
    // Some versions might not be up to the C++ standard and recognize pointer types

    cout << "cups value " << cups;
    cout << " and cups address = " << &cups << endl;
    cout << uintptr_t(&doughnuts) << endl;
    cout << uintptr_t(&cups) << endl;
    cout << uintptr_t(&cups)-uintptr_t(&doughnuts) << endl; // if this is negative the number will be huge
    return 0;

}