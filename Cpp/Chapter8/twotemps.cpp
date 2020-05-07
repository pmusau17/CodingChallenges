// twotemps.cpp  -- using overloaded template functions

#include <iostream>
template <typename Any> // you can use class here too, I'm choosing to use typename

void Swap(Any &a, Any &b); // this  prototype takes references

template <typename Any> // new template

void Swap(Any *a, Any *b, int n); // this prototype takes pointers

void Show(int a[]);
const int Lim =8;

int main()
{
    using namespace std;
    int i = 10, j = 20;
    cout << "i,j = " << i << ", " << j << ".\n";

    cout << "Using compiler-generated int swapper:\n";

    Swap(i,j); // matches original template

    cout << "Now i,j = " << i << ", " << j << ".\n";

    int d1[Lim] = {0,7,0,4,1,7,7,6};
    int d2[Lim] = {0,6,2,0,1,9,6,9};

    cout << "Original Arrays:\n";

    Show(d1);
    Show(d2);
    Swap(d1,d2,Lim); // matches the new template

    cout << "Swapped arrays:\n";

    Show(d1);
    Show(d2);

    return 0;
}

template <typename Any>
void Swap(Any &a, Any &b)
{   
    Any temp;
    temp = a;

    a = b;
    b = temp; 
}

template <typename Any>
void Swap (Any a[], Any b[], int n)
{
    Any temp;
    for (int i = 0; i < n;i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Show(int a[])
{
    using namespace std;
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    // since Lim is a global variable it can be accessed here
    for (int i = 4; i < Lim; i++)
        cout << a[i];
    cout << endl;
}
