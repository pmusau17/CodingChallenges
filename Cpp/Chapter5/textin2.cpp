// textin2.cpp -- using cin.get(char)
#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;

    cout << "Enter characters; enter # to stop:" << endl;
    cin.get(ch); //get from command line and pass to ch?

    while (ch != '#')
    {
        cout << ch;
        count ++;
        cin.get(ch); // use it again
    } 

    cout << endl << count << " characters read" << endl;
    return 0;
}