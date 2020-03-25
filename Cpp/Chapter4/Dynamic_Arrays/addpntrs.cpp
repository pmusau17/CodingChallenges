// addpntrs.cpp -- pointer addition 

#include <iostream>
int main()
{
    using namespace std;
    double wages[3] = {10000.0,20000.0,30000.0};
    short stacks[3] ={3,2,1};

    // Here are two ways to get the address of an array
    // C++ interprets array names as addresses.
    double * pw = wages; // name of an array = address
    short * ps = &stacks[0]; // or use address operator to point to the first element

    // with array element
    // Explaing for myself, pw is a pointer to the first element
    // in wages so pw will result in an address, while 
    // *pw is the value of the first element
    cout << "pw = " << pw << ", *pw = " << *pw << endl;

    //increment it by 1 meaning, move it to the next item
    pw = pw + 1;
    cout << "add 1 to the pw pointer: " << endl;

    cout << "pw = " << pw << ", *pw = " << *pw << endl << endl;

     cout << "ps = " << ps << ", *ps = " << *ps << endl;

    //increment it by 1 meaning, move it to the next item
    ps = ps + 1;
    cout << "add 1 to the ps pointer: " << endl;

    cout << "ps = " << ps << ", *ps = " << *ps << endl << endl;

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0]
         << ", stacks[1] = " << stacks[1] << endl;

    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks << ", *(stacks+1) = "
         << *(stacks+1) << endl;

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";
    cout << sizeof(stacks) << " = size of stacks array\n";

}