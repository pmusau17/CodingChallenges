// dynamic_struct.cpp -- playing around with dynamic structures

#include <iostream>
using namespace std;

struct things 
{
    int good;
    double bad;
};

int main()
{
    things grubnose = {1,305.045}; // initialize the struct
    things * gb = &grubnose; // this pointer points to the grubnose structure

    cout << grubnose.good << ", " << gb -> bad << endl;
    return 0;

}