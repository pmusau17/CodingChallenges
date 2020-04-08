// cingolf.cpp -- non-numeric input skipped 

#include <iostream>
const int MAX = 5;

int main()
{
    using namespace std;
    // get data 

    int golf[MAX];

    cout << "Please enter your golf scores." << endl;
    cout << "You must enter " << MAX << " rounds." << endl;

    int i;
    for (i = 0; i < MAX; i++)
    {    
        // reason we don't need carriage return is because the new line character is left 
        // in the queue
        cout << "round #" << i+1 << ": ";
        // loop until the user enters valid input or they quit
        while(!(cin>>golf[i]))
        {
            cin.clear(); // reset input
            while (cin.get() != '\n')
            {
                continue;  // get rid of bad input
            }    
            cout << "Please enter a number: ";
        }
    }

    // calculate average
    double total = 0.0;
    for (i=0; i< MAX; i++)
    {
        total += golf[i];
    }

    // report results
    cout << total / MAX << " = average score"
         << MAX << " rounds\n";
    return 0;
}