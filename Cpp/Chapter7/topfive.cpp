// topfive.cpp -- handling an array of string objects 
// This class will declare an array of string objects instead of a
// two-dimensional array of char

#include <iostream>
#include <string>

using namespace std;
const int SIZE = 5;

void display(const string sa[], int n);

int main()
{
    string list[SIZE]; // an array holding five string objects
    cout << "Enter your " << SIZE << "favorite astronomical sights:\n";

    for (int i =0; i< SIZE; i ++)
    {
        cout << i+1 << ": ";
        getline(cin,list[i]);
    }

    cout << "Your list:\n";
    display(list,SIZE);

    return 0;
}

void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << i +1 << ": " << sa[i] << endl;
}