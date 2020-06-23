// stone.cpp -- user-defined conversions 
// compile with stonewt.cpp
#include <iostream>
#include "stonewt.h"
using std::cout;
void display(const Stonewt & st, int n);

int main()
{
    Stonewt pavarotti = 260; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21,8); 

    cout << "The tenor weighed ";
    pavarotti.show_stn();
    cout << "The detective weighed ";
    wolfe.show_stn();
    cout << "The president weighed ";
    taft.show_lbs();

    pavarotti = 265.8; // use constructor for conversion
    taft = 325;        // same as taft = Stonewt(325)


    cout << "After dinner, The tenor weighed ";
    pavarotti.show_stn();
    cout << "After dinner, The president weighed ";
    taft.show_lbs();

    display(taft,2);
    cout << "The wrestler weighed even more.\n";
    display(422,2);
    cout << "No stone left unearned\n";
    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i =0; i < n; i++)
    {
        cout << "Wow! ";
        st.show_stn();
    }
}

