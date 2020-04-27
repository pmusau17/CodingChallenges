// secref.cpp -- defining and using a reference

#include <iostream>
int main()
{
    using namespace std;

    int rats = 101;

    int & rodents = rats; // declare rodents as a referene to rats, pledge allegiance

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats address = " << &rats;

    cout << ", rodents address = " << &rodents << endl;

    int bunnies = 50;

    rodents = bunnies; // cant we change the reference.

    cout << "bunnies = " << bunnies; 

    cout << ", rats = " << rats; 
    cout << ", rodents = " << rodents << endl; 

    cout << "bunnies address = " << &bunnies;

    cout << ", rodents address = " << &rodents << endl;

    return 0;

}