// cctypes.cpp -- using the ctype.h library
#include <iostream>
#include <cctype> // prototypes for character functions

int main()
{
    using namespace std;
    cout << "Enter your text for analysis and type @"
         << "to terminate the input." << endl;

    char ch;

    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch); // get first character
    while (ch != '@') // test for the sentinel character
    { 
        if(isalpha(ch))  // is it an alphabetic character?
            chars++;
        else if (isspace(ch)) // is it a whitespacecharacter?
            whitespace++;
        else if (isdigit(ch)) // is it a digt?
            digits++;
        else if(ispunct(ch)) // is it a punctuation?
            punct++;
        else                 // is it something else   
            others++;

        cin.get(ch);
    }

    cout << chars << " letters, "
         << whitespace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others.\n" << endl;
    return 0; 
}