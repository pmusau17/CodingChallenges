// experimenting with enumerations

#include <iostream>
#include <string>
using namespace std;

int main()
{
    enum spectrum {red,orange,yellow, green,blue, violet,indigo, ultraviolet};
    enum bits {one = 1,two = 2, four = 4, eight = 8};
    cout << ultraviolet << endl;

    // Let's try some illegal statements
    spectrum band;

    // band = 3;  illegal
    cout << band << endl;
    cout << four << endl;
}