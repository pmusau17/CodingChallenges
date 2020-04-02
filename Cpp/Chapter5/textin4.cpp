// textin4.cpp --reading chars with cin.get()

#include <iostream>
#include <stdio.h>
int main()
{
    using namespace std;
    int ch; // should be an int to make it compatible EOF
    int count = 0;

    while ((ch=cin.get())!=EOF) // test for end-of-file
    {
        cout.put(char(ch));
        count++;
    }
    cout << endl << count << " characters read" << endl;
    return 0;
}