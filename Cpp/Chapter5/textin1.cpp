// textin1.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
    using namespace std;
    char ch; // by declaring this to be a character cout will process each character one by one, that's sick
    int count = 0; // use basic counter

    cout << "Enter characters; enter # to quit:"<<endl;
    cin >> ch;

    while (ch!= '#')
    {
        cout << ch << endl; // echo the character
        count++; // count the character
        cin >> ch; // get the next character
        cout << "processing" << endl;
    }

    cout << endl << count << " characters read" <<endl;
    return 0;
}