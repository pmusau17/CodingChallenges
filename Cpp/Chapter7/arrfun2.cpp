// arrfun2.cpp -- functions with an array argument 
// in this file we will see how to use std::
#include <iostream>

const int ArSize = 8;

// define function prototype
int sum_arr(int arr[], int n);

// use std:: instead of using directive

int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};

    // some systems require preceding int with static to 
    // enable array initialization

    std::cout << cookies << " = array address, ";
    // some systems require a type cast: unsigned (cookies)
    std::cout << sizeof cookies << " # bytes in cookies.\n";

    // call function sum_arr
    int sum = sum_arr(cookies,ArSize);

    std::cout << "Total cookies eaten: " << sum << std::endl;

    sum = sum_arr(cookies,3); // lies, the lies

    std::cout << "First three eaters ate " << sum << " cookies.\n";

    // adding four is fine since cookies is technically a pointer
    sum = sum_arr(cookies+4,4); // another lie 

    std::cout << "Last four eaters ate " << sum << " cookies.\n";

    return 0;
}

int sum_arr(int arr[],int n)
{
    int total = 0;
    // some systems require a type cast: unsigned(arr)
    std::cout << arr << " = arr, ";

    std::cout << sizeof arr << " = sizeof arr\n"; // This will give you the size of the pointer not the array

    for (int i=0; i<n;i++)
    {
        total = total + arr[i];
    }
    
    return total;

}