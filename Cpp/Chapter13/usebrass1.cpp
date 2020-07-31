// usebrass1.cpp --testing bank account classes
// compile with brass.cpp

#include <iostream>
#include "brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelot Pigg",381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg",382288,3000.00);
    Piggy.ViewAcct();
    cout << endl;

    cout << "Depositing $1000 into the Hogg Account:\n";
    Hoggy.Deposit(1000.0);

    cout << "New Balance: $" << Hoggy.Balance() << endl;
    cout << "Withdrawing $4200 from the Pigg Account:\n";
    Piggy.Withdraw(4200);
    cout << "Pigg account balance: $" << Piggy.Balance() << endl;
    cout << "Withdrawing $4200 from Hogg Account:\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();

    return 0; 

}