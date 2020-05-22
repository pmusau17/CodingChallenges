// namesp.cpp -- namespaces
#include <iostream>
#include "namesp.h"

// the protototypes were declared in namespace scope so the 
// the definitions have to be declared in the same scope. 

namespace pers
{
    using std::cout;
    using std::cin;
    
    void getPerson(Person & rp)
    {
        cout << "Enter first name: ";
        cin >> rp.fname;

        cout << "Enter last name: ";
        cin >> rp.lname;
    }
    
    

    void showPerson(const Person & rp)
    {
        std::cout << rp.lname << ", " << rp.fname;
    }
}

namespace debts
{
    // takes a Debt reference and sets it's fileds
    void getDebt(Debt & rd)
    {
        getPerson(rd.name); // the reason we can do this is because in the namesp.h file we use a using directive
        std::cout << "Enter debt: ";
        std::cin >> rd.amount;
    }

    void showDebt(const Debt & rd)
    {
        showPerson(rd.name);
        std:: cout << ": s" << rd.amount << std::endl;
    }

    double sumDebts(const Debt ar[], int n)
    {
        double total = 0;
        for (int i = 0; i<n;i++)
        {
            total += ar[i].amount;
        }
        return total; 
    }
}