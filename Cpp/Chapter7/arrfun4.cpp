// arrfun4.cpp -- functions with an array range

#include <iostream>
const int ARSIZE = 8;
using namespace std;

// function prototype
int sum_arr(const int * begin, const int * end);

int main()
{
    int cookies[ARSIZE] = {1,2,4,8,16,32,64,128};

    // some systems require preceding int with static to 
    // enable array initialization

    int sum = sum_arr(cookies, cookies+ARSIZE);
    cout << "Total cookies eatien: " << sum << endl;
    sum = sum_arr(cookies, cookies+3); // first three elements 
    cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies+4, cookies+8); // last 4 elements
    cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;
}

// return the sum of an integer array
int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin; pt!=end; pt++)
    {
        // since the pointers point to the beginning 
        // get the value the pointer using *
        total += *pt; 
    }

    return total;
}