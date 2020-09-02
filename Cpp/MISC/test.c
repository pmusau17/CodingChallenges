#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
#include <stdlib.h>
#include <sys/time.h>



// Function Declarations: 
void load_wallpoints(const char * filename,bool print);
void allocate_2darr(int rows,int columns);
void deallocate_2darr(int rows,int columns);
int countlines(const char * filename);
void print_time_elapsed(struct timeval * t1);
bool check_safety(double (*rect)[2], double (*cone)[2]); // creds: https://www.geeksforgeeks.org/find-two-rectangles-overlap/

bool check_safety_wall(double (*rect)[2]);


// This is how I'm gonna do it in the rtreach file 

double ** wallCoords;
int file_rows;
int file_columns =2;

void allocate_2darr(int rows,int columns)
{

    wallCoords = malloc(rows * sizeof(double *));
    if(wallCoords == NULL)
	{
		fprintf(stderr, "out of memory\n");
		exit(0);
	}
    // allocate each of the rows there is two for our case
    for(int i = 0; i < rows; i++)
	{
		wallCoords[i] = malloc(columns * sizeof(double));
		if(wallCoords[i] == NULL)
		{
			fprintf(stderr, "out of memory\n");
			exit(0);
		}
	}
}


void deallocate_2darr(int rows,int columns)
{
    for(int i = 0; i < rows; i++)
		free(wallCoords[i]);
    free(wallCoords);
    printf("Done\n");
}


void print_time_elapsed(struct timeval * t1)
{
    struct timeval now;
    long int elapsedTime;
	gettimeofday(&now, NULL);
	elapsedTime = (now.tv_sec - t1->tv_sec) * 1000.0;
	elapsedTime += (now.tv_usec - t1->tv_usec) / 1000.0; 
    printf("elapsed time: %ld\n",elapsedTime);
   
}


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

void load_wallpoints(const char * filename, bool print)
{
    char line[60]; 
    char * x, * y; 
    double xd, yd;
    int count,i;
    FILE *wallPoints;
    file_rows = countlines(filename);

    if(print)
        printf("Opening file...with %d points\n",count);
    // allocate the memory
    allocate_2darr(file_rows,file_columns);
    
    // open the file
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

    if(print)
    {
        for (int j=0;j< file_rows;j++)
        {
            printf("%f,%f\n",wallCoords[j][0],wallCoords[j][1]);
        }
    }
    
}


bool check_safety(double (*rect)[2], double (*cone)[2])
{


    double l1[2] = {rect[0][0],rect[1][1]};
    double r1[2] = {rect[0][1],rect[1][0]};
    double l2[2] = {cone[0][0],cone[1][1]};
    double r2[2] = {cone[0][1],cone[1][0]};
    
    //printf("l1_x: %f, l1_y: %f\n",l1[0],l1[1]);
    //printf("r1_x: %f, r1_y: %f\n",r1[0],r1[1]);
    //printf("l2_x: %f, l2_y: %f\n",l2[0],l2[1]);
    //printf("r2_x: %f, r2_y: %f\n",r2[0],r2[1]);

    if (l1[0] >= r2[0] || l2[0] >= r1[0]) 
        return true; 
    
    if (l1[1] <= r2[1] || l2[1] <= r1[1]) 
        return true; 
  

    return false;
}

bool check_safety_wall(double (*rect)[2])
{
    bool safe = true; 
    for (int i = 0;i<file_rows;i++)
    {
        double point[2][2] = {{wallCoords[i][0],wallCoords[i][0]},{wallCoords[i][1],wallCoords[i][1]}};
        safe = check_safety(rect,point);
        if(!safe)
        {
            printf("offending point (%f,%f)\n",wallCoords[i][0],wallCoords[i][1]);
            break;
        }
    }
    return safe;
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
    double cone10[2][2] = {{100.0,101.0},{100.0,101.0}};

    /*bool intersect = check_safety(cone6,cone1);
    printf("overlap: %d\n",intersect);

    intersect = check_safety(cone7,cone1);
    printf("overlap: %d\n",intersect);

    intersect = check_safety(cone8,cone9);
    printf("overlap: %d\n",intersect);*/

    struct timeval start;
    gettimeofday(&start, NULL);
    load_wallpoints("porto_obstacles.txt",true);
    print_time_elapsed(&start);

    gettimeofday(&start, NULL);
    check_safety_wall(cone1);
    print_time_elapsed(&start);

    deallocate_2darr(file_rows,file_columns);
}