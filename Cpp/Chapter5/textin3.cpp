// textin3.cpp -- reading chars to end of file 
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;

    cin.get(ch); // attempt to read a char
    while (cin.fail()==false || cin.eof()==false)
    {
        cout << ch; // echo character
        count ++;
        cin.get(ch);
    }
    cout << endl << count << " characters" << endl;
    return 0; 

}