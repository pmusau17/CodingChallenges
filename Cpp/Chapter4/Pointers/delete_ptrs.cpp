//delete_ptrs.cpp -- delete ptrs allocated by new

#include <iostream>
int main()
{
    using namespace std;
    int *pt = new int; // allocate a space for an int 
    *pt = 1001; // store a value there

    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
    cout << "size of pt: " << sizeof(pt);
    cout << " size of *pt: " << sizeof(*pt) << endl;

    delete pt; // so free up the space allocated for the int

    // allocate new memory
    pt = new int;
    *pt = 100000;

    cout << "int after deleting";
    cout << "value = " << *pt << ": location = " << pt << endl;
    cout << "size of pt: " << sizeof(pt);
    cout << " size of *pt: " << sizeof(*pt) << endl;

    double * pd = new double;
    *pd= 1000.0000;
    cout << "double";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "size of pt: " << sizeof(pd);
    cout << " size of *pt: " << sizeof(*pd) << endl;

    // delete memory held at ptr locations
    delete pt;
    delete pd;


}