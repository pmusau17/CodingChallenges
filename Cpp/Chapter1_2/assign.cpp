//assign.cpp -- type changes on assignment
#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3; //int converted to a float
    int guess = 3.9832; //float converted to int
    int debt = 7.2e6; //result not defined in C++
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;

}