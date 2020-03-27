// forstr1.cpp -- using for with a string 
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter a word: " << endl;
    
    string input_string;
    cin >> input_string;


    // Display the words in reverse order
    for (int i = input_string.size()-1; i>=0; i-- )
    {
        cout << input_string[i];

    }
    cout << "\nBye\n";
    return 0;

}