// strtype2.cpp -- assigning, adding, and appending

#include <iostream>
#include <string> //make string class avaliable

int main()
{
    using namespace std;

    string s1 = "penguin";
    string s2, s3;

    cout << "You can assign one string object to another: s2 = s1";
    s2 = s1;
    cout << "s1 : " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C-style string to a string object. \n";
    cout << "s2 =\"buzzard\"" << endl;
    s2= "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3= s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can append strings." << endl;
    s1+= " "+s2;
    cout << s1 << endl;
    return 0;
}