#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
#include <stdlib.h>







void load_wallpoints(const char * filename);
int countlines(const char * filename);


// creds: https://www.geeksforgeeks.org/find-two-rectangles-overlap/
bool check_safety(double (*rect)[2], double (*cone)[2]);




int countlines(const char * filename)
{
    int cnt =0;
    FILE *fp;
    char line[60];

    // open the file
    fp = fopen(filename,"r");
    if(fp==NULL)
    {
        printf("Could not open file %s",filename);
    }
    else
    {
        while( fgets(line, 60, fp)!=NULL )
        {
            cnt+=1;
        }
        fclose(fp);
    }
    return cnt;
}

void load_wallpoints(const char * filename)
{
    char line[60]; 
    char * x; 
    char * y;
    double xd;
    double yd;
    FILE *wallPoints;
    int count,i;
    count = countlines(filename);
    printf("Opening file...with %d points\n",count);

    double wallCoords[count][2];

    wallPoints = fopen(filename,"r");
    if(wallPoints==NULL)
    {
        printf("Could not open file %s",filename);
    }
    else
    {
        i =0;
        while( fgets (line, 60, wallPoints)!=NULL )
        {
            x = strtok(line,",");
            y = strtok(NULL,",");
            xd = strtod(x,NULL);
            yd = strtod(y,NULL);
            wallCoords[i][0] = xd;
            wallCoords[i][1] = yd;
            i+=1;

        }
        fclose(wallPoints);
    }

    for (int j=0;j< count;j++)
    {
        printf("%f,%f\n",wallCoords[j][0],wallCoords[j][1]);
    }
}


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

    double cone8[2][2] = {{1.5,2.5},{1.5,2.5}};
    double cone9[2][2] = {{2.0,2.0},{2.0,2.0}};

    bool intersect = check_safety(cone6,cone1);
    printf("overlap: %d\n",intersect);

    intersect = check_safety(cone7,cone1);
    printf("overlap: %d\n",intersect);

    intersect = check_safety(cone8,cone9);
    printf("overlap: %d\n",intersect);

    load_wallpoints("porto_obstacles.txt");
}