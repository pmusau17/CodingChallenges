// outfile.cpp -- writing to a file
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char automobile[50];
    int year;

    double a_price;
    double d_price;

    // create object for output
    ofstream outFile;    
    outFile.open("carinfo.txt"); // associate with a file

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile,50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;

    d_price = 0.913 * a_price;

    cout << fixed; // this flag Sets the floatfield format flag for the str stream to fixed.
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    // now do exact same things using outFile instead of cout

    outFile << fixed; // this flag Sets the floatfield format flag for the str stream to fixed.
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close(); // done with file
    return 0;



}