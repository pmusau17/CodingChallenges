// arraynew.cpp -- using the new operator for arrays
#include <iostream>
int main()
{
    using namespace std;
    double * p3 = new double[3]; //space for three doubles

    //print the first element by using the dereferencing operator
    cout <<  *p3 << endl;
    p3[0] = 0.2; //treat p3 like an array name
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << *p3 << endl;

    cout << "p3[1] is " << p3[1] << ".\n";
    p3=p3+1; // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and "
         << "p3[1] is " << p3[1] << endl;
    cout << *p3 << endl;
    p3 = p3 -1; 
    
    // remember to delete the array so we can use it later
    delete [] p3;
    return 0;
}