// delete.cpp -- using the delete operator

#include <iostream>
#include <cstring> // or string.h
using namespace std;

char * getname(void); // function prototype

int main()
{
    char * name; // uninitialized character pointer

    name = getname(); // assigne address of string to name, because the function
    // returns a character pointer
    cout << name << " at " << (int *) name << endl;

    delete [] name; // free the memory at the location name

    name = getname(); // reuse the freed memory
    cout << name << " at " << (int *) name << endl;

    delete [] name; // free the memory at the location name again

    return 0;
    
}

char * getname() // return a pointer to new string
{
    char temp[80]; // temporary storage
    cout << "Enter the last name: ";
    // don't want to get more than 80 since that's we have allocated
    cin.get(temp,80);
    cin.get();

    char * pn = new char[strlen(temp)+1];
    strcpy(pn,temp); // copy string into smaller space

    return pn; // temp lost when function ends

}