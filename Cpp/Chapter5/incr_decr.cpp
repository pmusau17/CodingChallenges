// incr_decr.cpp -- increment and decrement operators
#include <iostream>
using namespace std;

int main()
{
    double arr[5] = {21.1,32.8,23.4,45.2,37.4};
    double *pt = arr; // pt points to arr[0], i.e to 21.1

    cout << pt << endl; // cout 

    // derefernce after incrementing
    cout << *++pt << endl;

    cout << *pt-- << endl;

    cout << pt << endl;
}