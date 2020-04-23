// ruler.cpp -- divide and conquer 

#include <iostream> 
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);

int main()
{
    // declare a character array of length 66
    char ruler[Len];
    int i;

    for (i=1; i < Len -2;i++)
    {
        ruler[i] = ' ';
    }
    ruler[Len-1] = '\0'; // the last element of a character array should be the null character

    int max = Len -2; 
    int min = 0;

    ruler[min] = ruler[max] = '|'; // the first and last part should be '|'

    std:: cout << ruler << std::endl;

    for (i =1; i<=Divs; i++)
    {
        subdivide(ruler,min,max,i);
        std:: cout << ruler << std::endl;

        for (int j =1;j<Len-2; j++)
        {
            ruler[j] = ' '; // reset to blank ruler
        }
    }

    return 0;
}


// the variable level controls how many times the recursive calls occur. 
void subdivide(char ar[], int low, int high, int level)
{
    if (level ==0)
    {
        return;
    }

    int mid = (low + high) / 2;
    ar[mid] = '|';
    subdivide(ar,mid,high,level-1);
    subdivide(ar,low,mid,level-1);
}