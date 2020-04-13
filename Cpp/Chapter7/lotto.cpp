// lotto.cpp -- probability of winning, using the choose math calculation 
#include <iostream>
// Note: Some implementations require double instead of long double
// long double probability (unsigned numbers, unsigned picks)

long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    long double total, choices;
    cout << "Enter the total number of choices on the game card and \n"
         << "The number of picks allowed:\n";

    while((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total,choices); // compute the odds
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }

    cout << "bye." << endl;

    return 0;
}

// The following function probability function of picking picks 
// the numbers correctly from numbers choices

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;

    for (n =numbers, p =picks;p>0; n--,p--)
    {
        result = result * (n/p);
    }

    return result;
}