// filefunc.cpp -- function with ostream & parameter
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

// function takes an ostream reference, a double passed by value,
// constant pointer to a double array and an int passed by value
void file_it(ostream & os, double fo, const double fe[], int n);

const int LIMIT = 5;


int main(void)
{
    ofstream fout; // create an output stream object
    
    const char * fn = "ep-data.txt"; // declare a pointer to file
    fout.open(fn);

    if (!fout.is_open())
    {
        cout << "Can't open " << fn << ". Bye.\n";
        exit(EXIT_FAILURE);
    }

    double objective;
    cout << "Enter the focal length of your "
         << "telescope objective in mm: ";
    cin >> objective;

    double eps[LIMIT];

    cout << "Enter the focal lengths, in mm, of " << LIMIT << " eyepieces:\n";

    for (int i = 0; i< LIMIT; i++)
    {
        cout << "Eyepice #" << i +1 << ": "; 
        cin >> eps[i];
    }

    file_it(fout, objective,eps,LIMIT);
    file_it(cout, objective,eps,LIMIT);
    cout << "Done\n";

    return 0;

}

void file_it(ostream & os, double fo, const double fe[], int n)
{
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed); // save initial formatting state

    os.precision(0);

    os << "Foracl length of objective: " << fo << "mm\n";
    os.setf(ios::showpoint);
    os.precision(1);

    os.width(12);
    os << "f eyepiece";
    os.width(15);

    os << "magnification" << endl;

    for (int i =0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
    }

    os.setf(initial); // restore intial formatting

}