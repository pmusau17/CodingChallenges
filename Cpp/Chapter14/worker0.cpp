// worker0.cpp -- working class methods 

#include "Worker0.h"
#include <iostream>

using std::cout; 
using std::cin;
using std::endl;

// Worker methods 
// must implement virtual destructor, even if pure

Worker::~Worker(){}

void Worker::Set()
{
    cout << "Enter worker's name: "; 
    getline(cin,fullname);
    cout << "Enter worker's ID: ";
    cin >> id; 
    while(cin.get() != '\n')
        continue;
}


void Worker::Show() const
{
    cout << "Name: " << fullname << "\n";
    cout << "Employee ID: " << id << "\n";
}

void Waiter::Set()
{
    Worker::Set();
    cout << "Enter waiter's panache rating: "; 
    cin >> panache;
    while (cin.get()!='\n')
        continue;
}

void Waiter::Show() const
{
    cout << "Category: waiter\n";
    Worker::Show();
    cout << "Panache rating: " << panache << "\n";
}

// Singer methods 

char * Singer::pv[] = {"other","alto","contralto","soprano","bass","baritone","tenor"};


void Singer::Set()
{
    Worker::Set();
    cout << "Enter number for singer's vocal range:\n";
    
    // display the voices so the user can pick
    int i;
    for (i = 0; i < Vtypes;i++)
    {
        cout << i << ": " << pv[i] << " ";
        if(i%4 == 3)
            cout << endl; // this makes sure only 
    }
    cin >> voice;
        while (cin.get() != '\n')
            continue;
}

void Singer::Show() const
{
    cout << "Category: singer\n";
    Worker::Show();
    cout << "Vocal range: " << pv[voice] << endl;
}




