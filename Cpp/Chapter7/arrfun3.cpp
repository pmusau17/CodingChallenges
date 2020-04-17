// arrfun3.cpp -- explorations in real estate management

#include <iostream>
using namespace std;

// define max property size
const int MAX =5;

// function prototypes
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);


int main()
{
    double properties[MAX]; // declare double array with name properties
    int size = fill_array(properties,MAX);

    show_array(properties,size); // call the function to see the values 

    cout << "Enter the revaluation factor: ";
    double factor;
    cin >> factor; 
    revalue (factor,properties,size);
    show_array(properties,size);
    cout << "Done.\n";
    return 0;
}




int fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for (i = 0;i < limit; i++)
    {
        cout << "Enter value #" << (i+1) << ":";
        cin >> temp;

        if(!cin) // Error reading input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue; // get rid of the bad input 
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp<0)
        {
            break;
        }
        else
        {
            ar[i] = temp;
        }

    }
    return i;
}

// function that displays the array values
// uses const to prevent from accidentally changing values
void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i+1) << ": $";
        cout << ar[i] << endl; 
    }
}


// function that re-values the properties
void revalue(double r, double ar[], int n)
{
    for (int i =0; i< n; i++)
    {
        ar[i] *=r;
    }
}