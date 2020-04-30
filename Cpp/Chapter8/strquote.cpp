// strquote.cpp -- different designs

#include <iostream>
#include <string>
using namespace std;

// we will investigate versions of the function 

// this function takes two constant references
// and returns a string
string version1(const string & s1, const string &s2);

// this function takes one string reference, and one const string references
// it returns a string reference
const string & version2(string & s1, const string & s2);

// same as above
const string & version3(string & s1, const string & s2);

int main()
{
    string input;
    string copy; 
    string result;

    cout << "Enter a string: ";
    getline(cin,input); // read input into input

    copy = input;
    
    cout << "Your string as entered: " << input << endl;
    result = version1(input,"***");
    
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    result = version2(input, "###");

    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    cout << "Resetting original string.\n";
    input = copy; 
    result = version3(input,"@@@");

    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    return 0;

}

string version1(const string & s1, const string & s2)
{
    // create temporary variable
    string temp;
    // concatenate the two strings, this might be a string class
    // benefit
    temp = s1 +s2;

    return temp;
}

const string & version2(string & s1, const string & s2)
{   
    // This has a bad side effect since s1 isn't a const reference
    // thus it will aslo change the value of the variable outside 
    // of this function scope
    s1 = s2 + s1 +s2;
    return s1; // the reference it returns though can't change the function, hmmmm
}

// It doesn't even compile
const string & version3(string & s1, const string & s2)
{
    string temp;
    temp = s2 + s1 + s2;
    // This is very bad since you are returning a reference to a local variable
    // that disappears after the function executes. v v bad.
    return temp;
}