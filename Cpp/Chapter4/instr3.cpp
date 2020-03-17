// instr3.cpp -- reading more than one word with get() & get()

#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: " << endl;
    cin.get(name, ArSize).get(); //read string, newline
    cout << "Enter your favourite dessert: " << endl;
    cin.get(dessert, ArSize).get();

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << "." << endl;
    return 0;


}