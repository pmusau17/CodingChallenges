// assgn_st.cpp -- assigning structures.

#include <iostream>
#include <string>
using namespace std;
//define external structure
struct inflatable 
{
    string name;
    float volume;
    double price;
}; // need semicolon after definition
int main()
{
    
    // create an instance of the inflatable structure
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    }; // need this semi-colon because it's a declaration

    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet; // assign one structure to another
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;


}