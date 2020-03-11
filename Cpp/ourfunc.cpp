//ourfunc.cpp --defining your own function 
#include <iostream>

//function prototype for simon()
void simon(int);

int main()
{
    using namespace std;
    simon(3); // call the function simon
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count); //call it again
    cout << "Done!" << endl;
    return 0;
}

void simon(int n)
{
    using namespace std; 
    cout << "Simon says touch your toes " << n << " times." << endl;
}