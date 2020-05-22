// newplace.cpp -- using placement new
#include <iostream>
#include <new>  // for placement new

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main()
{
    using namespace std;

    double *pd1, *pd2; // declare two pointers to doubles
    int i; 

    cout << "Calling new and pacement new:\n";

    pd1 = new double[N]; // use heap
    pd2 = new (buffer) double[N]; // use buffer array

    for (i = 0; i<N; i++)
        pd2[i] = pd1[i] = 1000 + (20.0 * i);

    cout << "Buffer addresses:\n" << " heap: " << pd1
         << " static: " << (void *) buffer << endl; // the (void *) means a void pointer, and it is a pointer that has no associated data type to it
         // this allows cout to print out the address since it is empty at the beginning

    cout << "Buffer contents:\n";

    for (i=0;i<N;i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }


    cout << "\nCalling new and placement new a second time:\n";
    double *pd3, *pd4; 

    pd3 = new double[N]; // declare array of doubles
    pd4 = new (buffer) double[N]; // use buffer array

    for (i = 0; i<N; i++)
        pd3[i] = pd4[i] = 1000 + (20.0 * i);

    cout << "Buffer contents:\n";
    for (i=0;i<N;i++)
    {
        cout << pd3[i] << " at " << &pd3[i] << "; ";
        cout << pd4[i] << " at " << &pd4[i] << endl;
    }


    // delete allocated memory
    delete [] pd1;
    delete [] pd3;

    return 0;
}