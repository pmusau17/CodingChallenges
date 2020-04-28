// swaps.cpp -- swapping with references and with pointers 

#include <iostream>
using namespace std;

void swapr(int & a, int & b);  // a,b are aliases for ints
void swapp(int * p, int * q); // p,q are pointers to int objects
void swapv(int a, int b); // a,b are new variables (pass by reference)



int main()
{
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    swapr(wallet1,wallet2);

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using pointers to swap contents again:\n";
    swapp(&wallet1,&wallet2); // pass the addresses of the integers

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Trying to use passing by value:\n";
    swapv(wallet1,wallet2);

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    return 0;
}


void swapr(int & a, int & b)  // a,b are aliases for ints
{
    int temp = a;
    a = b;
    b = temp;
}
void swapp(int * p, int * q) // p,q are pointers to int objects
{
    int temp = *p; // use *p, *q for values of variables
    *p = *q;
    *q = temp;
}

void swapv(int a, int b) // a,b are new variables (pass by reference), this wont work lmaoooooo
{
    int temp = a;
    a = b;
    b = temp;
}