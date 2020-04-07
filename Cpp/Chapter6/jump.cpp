// jump.cpp -- using continue and break
#include <iostream>
const int ArSize = 80;
using namespace std;

int main()
{
    char line[ArSize];
    int spaces = 0;

    cout << "Enter a line of text:\n";
    // read a string (char array) into memory 
    // with a maximum size of ArSize 
    cin.get(line,ArSize);

    cout << "Complete line:\n" << line << endl;

    cout << "Line through first period:\n";
    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i];
        if(line[i]=='.') // quit if it's a period
            break;
        if (line[i] != ' ')
            continue;
        spaces++;
    }

    cout << "\n" << spaces << " spaces\n";
    return 0;
}