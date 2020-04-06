// more_and.cpp -- using the logical AND operator

#include <iostream>

using namespace std;

const char * qualify[4] = // An array of string pointers (character arrays), const since we are assigning literals
{
    "10,000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"
};

int main()
{
    
    int index;
    cout << "Enter your age in years: ";
    int age;
    cin >> age;

    if (age>17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >=50 && age < 65)
        index = 2;
    else 
        index = 3;

    cout <<  "You qualify for the " << qualify[index]; 
    return 0;  
}
