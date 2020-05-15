// static.cpp -- using a static local variable 

#include <iostream>
// constants
const int ArSize = 10; 

// function prototype 
void strcount(const char * str);

int main()
{
    using namespace std;
    char input[ArSize];
    char next;

    cout << "Enter a line:\n";
    // cin.get reads up to the end of the line or up to ArSize-1
    // whichever comes first 
    cin.get(input,ArSize);

    while(cin && input[0])
    {
        // if there are more characters on the line we have to 
        // remove them 
        cin.get(next);
        while(next!='\n') // string didn't fit!
        {
            cin.get(next);
        }
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        cin.get(input,ArSize);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const char * str)
{
    using namespace std;
    // by declaring total to be static we can count all the characters
    // entered by the user throughout the duration of the program, while 
    // this variable remains local to this function.
    static int total = 0;  // static local variable
    int count = 0;         // automatic local variable 

    cout << "\"" << str << "\" contains ";
    while(*str++)
        count++;
    
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";

}