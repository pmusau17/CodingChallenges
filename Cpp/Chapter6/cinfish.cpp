// cinfish.cpp --non-numeric input terminates loop
#include <iostream>

const int MAX = 5;
using namespace std;

int main()
{
    // get data
    double fish[MAX];
    
    cout << "Please enter the weights of your fish." << endl;
    cout << "You may enter up to " << MAX << " fish <q to terminate>." << endl;

    cout << "fish #1: ";
    int i = 0;

    while (i<MAX && cin >> fish[i])
    {
        if(++i < MAX)
            cout << "fish #" << i+1 << ": ";
    }

    // calculate average
    double total = 0.0;
    // we use i as the counter in case the user doesn't use all 5 options
    for (int j =0; j<i; j++)
    {
        total+=fish[j];
    }

    // report results
    if (i==0)
        cout << "No fish\n";
    else 
        cout << total / i << " = average weight of "
             << i << " fish\n";

    cout << "Done." << endl;
    return 0;
}