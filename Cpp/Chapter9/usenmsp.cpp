// usenmsp.cpp -- using namespaces 
#include <iostream>
#include "namesp.h"

void other(void);
void another(void);
int main()
{
    using debts::Debt; // structure definition defined in debts namespace
    using debts::showDebt; // function defined in namepsace debts

    Debt golf = { {"Benny","Goatsniff"},120.0};
    showDebt(golf);
    other();
    another();

    return 0; 
}

void other()
{
    using std::cout;
    using std::endl;

    using namespace debts; // using directive 

    Person dg = {"Doodles","Glister"}; // Since debts uses a using directive we also be default inmport the pers namespace
    showPerson(dg);

    cout << endl; 
    Debt zippy[3]; // declare array of Debt structs

    int i; 

    for (i = 0; i < 3; i++)
    {
        getDebt(zippy[i]); // intialize each of the debts
    }

    for (i=0; i <3; i++)
    {
        showDebt(zippy[i]);
    }
    cout << "Total debts: $" << sumDebts(zippy,3) << endl; // .cpp;.cpp; .cpp

    return;
}

void another()
{
    using pers::Person;

    Person collector = {"Milo","Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl; 

}