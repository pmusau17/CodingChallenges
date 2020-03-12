//hexoct1 -- shows hex and octal constants
#include <iostream>

int main()
{
    using namespace std;
    int chest= 42; 
    int waist= 42; 
    int inseam= 42; 

    cout << "Monsieur cuts a striking figure" << endl;
    cout << "chest = " << chest << " (decimal)"<< endl;
    cout << hex; //manipulator for changing number base
    cout << "waist = " << waist << " (hexadecimal)" << endl;
    cout << oct; //manipulator for changing number base
    cout << "inseam = " << inseam << " (octal)" << endl;

    return 0;

}