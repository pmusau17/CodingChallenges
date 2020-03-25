// pointer_arithmetic -- some example pointer arithmetic


#include <iostream>
using namespace std;
int main()
{
    int tacos[10] = {5,2,8,4,1,2,2,4,6,8};
    int * pt = tacos;

    cout << "pt = " << pt << ", &tacos = " << &tacos << endl;
    pt = pt + 1;
    cout << "pt = " << pt << endl;

    int * pe = &tacos[9];
    cout << "pe = " << pe << endl;

    pe = pe -1;

    cout << "pe = " << pe << endl;

    int diff = pe -pt;

    cout << "diff = "<< diff << endl;
    return 0;
}