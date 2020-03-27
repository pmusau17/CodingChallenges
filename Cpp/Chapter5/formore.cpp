// formore.cpp -- more looping with for
#include <iostream>
using namespace std;
const int ArSize = 16; // example of external declaration

int main()
{
    double factorials[ArSize]; // declare a double array of size 16

    factorials[0] = factorials[1] = 1;
    
    for (int i=2;i<ArSize;i++)
    {
        factorials[i]=i*factorials[i-1];
    }

    for (int j=0;j<ArSize;j++)
    {
        cout << "i[" << j << "] = " << factorials[j] << endl;
    }

    return 0;

}