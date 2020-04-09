// sumafile.cpp -- functions with an array argument

#include <iostream>
#include <fstream>  // file I/O support 
#include <cstdlib>  // support for exit()

const int SIZE = 60;

int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;  // object for handling file input 

    cout << "Enter name of data file: ";
    // read the whole line up till the /n char
    cin.getline(filename,SIZE);
    
    // ope the file
    inFile.open(filename); // associate inFile with a file

    if (!inFile.is_open()) // if the file didn't open exit
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program Terminating." << endl;
        exit(EXIT_FAILURE);
    }

    double value;
    double sum = 0.0;
    int count = 0;  // number of items read

    inFile >> value; // get first value
    
    while (inFile.good()) // while input good and not EOF
    {
        ++count;
        sum+= value; // calcuate running total 
        inFile >> value; // get next value
    }

    if (inFile.eof())
    {
        cout << "End of file reached." << endl;
    }
    else if (inFile.fail())
    {
        cout << "Input terminated by data mismatch.\n";
    }
    else
    {
        cout << "Input terminated for unknown reason" << endl;
    }

    if (count==0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    
    inFile.close(); // finished with the file
    return 0;
}