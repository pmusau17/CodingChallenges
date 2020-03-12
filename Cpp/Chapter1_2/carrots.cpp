//carrots.cpp --food processing program
//uses and displays a variable 

#include <iostream>

int main()
{
    using namespace std;
    int carrots; // declare an integer

    carrots=25; // assign a value to the variable 
    cout << "I have ";
    cout << carrots; //displau the number of carrots you have
    cout << " carrots.";
    cout << endl;

    carrots--; //modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return 0; 
}