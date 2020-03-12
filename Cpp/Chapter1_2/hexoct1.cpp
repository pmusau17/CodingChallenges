//hexoct1 -- shows hex and octal constants
#include <iostream>

int main()
{
    using namespace std;
    int chest= 42; //decimal integer number
    int waist= 0x42; //hexadecimal integer constant
    int inseam= 042; // octal integer constant

    cout << "Monsieur cuts a striking figure" << endl;
    cout << "chest = " << chest << endl;
    cout << "waist = " << waist << endl;
    cout << "inseam = " << inseam << endl;

    return 0;

}