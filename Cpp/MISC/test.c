#include <stdio.h>
#include <stdbool.h>


// creds: https://www.geeksforgeeks.org/find-two-rectangles-overlap/

bool check_safety(double (*rect)[2], double (*cone)[2]);

bool check_safety(double (*rect)[2], double (*cone)[2])
{


    double l1[2] = {rect[0][0],rect[1][1]};
    double r1[2] = {rect[0][1],rect[1][0]};
    double l2[2] = {cone[0][0],cone[1][1]};
    double r2[2] = {cone[0][1],cone[1][0]};
    
    printf("l1_x: %f, l1_y: %f\n",l1[0],l1[1]);
    printf("r1_x: %f, r1_y: %f\n",r1[0],r1[1]);
    printf("l2_x: %f, l2_y: %f\n",l2[0],l2[1]);
    printf("r2_x: %f, r2_y: %f\n",r2[0],r2[1]);

    if (l1[0] >= r2[0] || l2[0] >= r1[0]) 
        return false; 
    
    if (l1[1] <= r2[1] || l2[1] <= r1[1]) 
        return false; 
  

    return true;
}

int main(void)
{
    double cone1[2][2] = {{1,2},{-0.5,0.5}};
	double cone2[2][2] = {{3,4},{-0.5,0.5}};
	double cone3[2][2] = {{5,6},{-0.5,0.5}};
	double cone4[2][2] = {{7,8},{-0.5,0.5}};
	double cone5[2][2] = {{9,10},{-0.5,0.5}};
    double cone6[2][2] = {{1,2},{1,2}};
    double cone7[2][2] = {{1,2},{0,1}};

    bool intersect = check_safety(cone6,cone1);
    printf("overlap: %d\n",intersect);
    intersect = check_safety(cone7,cone1);
    printf("overlap: %d\n",intersect);
}