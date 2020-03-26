// ptrstr.cpp -- using pointers to strings

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char animal[20] = "bear"; // animal holds bear
    const char * bird = "wren"; // bird holds address of a string
    char * ps;

    cout << animal << " and "; // display bear
    cout << bird << "\n";      // display wren
    // cout << ps << endl;     // This will most likely display garbage since its an unitiliazed pointer
    cout << *bird << endl; // this is for me

    cout << "Enter a kind of animal: ";
    cin >> animal; // ok if input < 20 chars
    // cin >> ps; Too horrible a blunder to try; ps doesn't point to allocated
    // space

    ps = animal;          // set ps to point to string
    cout << ps << "s!\n"; // ok, same as using animal

    cout << "Before using strcpy():\n";
    
    // print out the addresses by casting it to an integer pointer
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal)+1]; // get new storage
    strcpy(ps,animal); // copy animal into the location ps

    cout << "After uisng strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    
    delete [] ps; // delete the space we allocated for the dynamic array

    return 0;
}