// arrfun1.cpp -- functions with an array argument
#include <iostream>
const int ArSize = 8;
using namespace std;

int sum_arr(int arr[], int n); // function prototype that says the arguments are an array and its size

int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    // some systems require preceding int with static to 
    // enable array initialization

    int sum = sum_arr(cookies,ArSize);

    cout << "Total Cookies eaten: " << sum << endl;

    return 0; 
}

int sum_arr(int arr[],int n)
{
    int total = 0;

    for (int i =0; i<n; i++)
    {
        total +=  arr[i];
    }
    return total;
}