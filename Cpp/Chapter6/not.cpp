// not.cpp -- using the not operator
#include <iostream>
#include <climits>

bool is_int(double); // function prototype

int main()
{
    using namespace std;
    //double num;
    int num;

    cout << "My man enter an integer value: ";
    cin >> num;

    while (! is_int(num) ) // continue while int is a number
    {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }

    int val = int (num); // type cast

    cout << "You've entered the intger " << val << "\nBye\n";

    return 0;
}


bool is_int(double x)
{
    if (x<= INT_MAX && x >= INT_MIN) // use climits values 
        return true;
    else
    {
        return false;
    }
    
}