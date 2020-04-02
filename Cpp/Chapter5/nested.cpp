// nested.cpp --nested loops and 2-D array

#include <iostream>
const int CITIES = 5;
const int YEARS = 4;
using namespace std;

int main()
{
    const char * cities[CITIES] =
    {
        "Gribble City",
        "Gribbletown",
        "San Gribble",
        "Gribble Vista"
    };

    int maxtemps[YEARS][CITIES] =
    {
        {94,98,87,103,101},  // values for maxtemps[0] 
        {98,99,91,107,105},  // values for maxtemps[1] 
        {93,91,90,101,104},  // values for maxtemps[2] 
        {95,100,88,105,103} // values for maxtemps[3] 
    };

    cout << "Maximum temperatures for 2002-2005" << endl << endl;

    for (int city = 0; city < CITIES; city++)
    {
        cout << cities[city] << ":\t"; // print the city name
        for (int year=0; year< YEARS;year++)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }

    return 0;
}
