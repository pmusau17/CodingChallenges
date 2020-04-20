// arrsum.cpp -- demonstration of pointers 
# include <iostream>
using namespace std;

int sum(int (*ar2)[4],int size); // function prototype the first item is a pointer-to-array-of-four-ints


int main()
{
    int data[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int total = sum(data,3);

    cout << "The total is: " << total << endl;
    return 0;
}

int sum(int (*ar2)[4],int size)
{
    int total = 0;
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<4;j++)
        {
            total += ar2[i][j];
        }
    }
    return total;
}