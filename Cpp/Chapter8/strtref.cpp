// stretref.cpp -- using structure references
#include <iostream>
using namespace std;

// define structure
struct sysop 
{
    char name[26];
    char quote[64];
    int used;
};

// function that returns a constant reference to sysop structure
// it also takes a sysop references as an input

const sysop & use(sysop & sysopref); 

int main()
{
    // initialize the structs : some implementations require using the 
    // keyword static in the structure declarations
    sysop looper =
    {
        "Rick \"Fortran\" Looper",
        "I'm a goto kind of guy.",
        0
    };

    use(looper); // update structure, looper is type sysop

    cout << "Looper: " << looper.used << " use(s)\n";
    
    sysop copycat; // create new sysop structure

    copycat = use(looper); // make copy cat an alias for looper?

    cout << "Looper: " << looper.used << " use(s)\n";
    cout << "Copycat: " << copycat.used << " use(s)\n";
    cout << "use(looper): " << use(looper).used << " use(s)\n";

    return 0;


}


// use() returns the reference passed to it

const sysop & use(sysop & sysopref)
{
    cout << sysopref.name << " says:\n";
    cout << sysopref.quote << endl;
    sysopref.used++;
    return sysopref;
}


