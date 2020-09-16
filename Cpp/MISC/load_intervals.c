// Patrick Musau
// 08-2020
// loading points

#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
#include <stdlib.h>
#include <sys/time.h>




double points[5][2] = {{2.0,2.0},{4.7,2.7},{11.36,-1.46},{3.0,6.4},{-9.64,2.96}};
double *** cones = 0;



/*double (*)[2] calculate_intervals(double center[2], double width,double height)
{
    double interval[2][2] = {{center[0]-width/2.0,center[0]+width/2.0},{center[1]-height/2, center[1]+height/2}};
    return interval;
}*/


// function that allocates the 3d array for the cones
void allocate_cones(int num_cones,double (*points)[2])
{

    int rows = num_cones;
    int cols = 2;
    int height = 2;
    int i,j;
    double w = 0.13;
    double h = 0.13;

    cones = (double***)malloc(rows * sizeof(double **));
    
    // check if memory was allocated 
    if(cones == NULL)
	{
		fprintf(stderr, "out of memory\n");
		exit(0);
	}

    for(i=0;i<rows;i++)
    {
        cones[i] = (double **)malloc(cols * sizeof(double*));
        // check if memory was allocated
        if(cones[i] == NULL)
		{
			fprintf(stderr, "out of memory\n");
			exit(0);
		}
        for(j=0;j<cols;j++)
        {
            cones[i][j] = (double*)malloc(height*sizeof(double));
            // check if memory was allocated
            if(cones[i][j] == NULL)
		    {
			    fprintf(stderr, "out of memory\n");
			    exit(0);
		    }
        }
    }

    for(i=0;i<rows;i++)
    {
        cones[i][0][0] = points[i][0]-w/2.0;
        cones[i][0][1] = points[i][0]+w/2.0;
        cones[i][1][0] = points[i][0]-h/2.0;
        cones[i][1][1] = points[i][0]+h/2.0;
        printf("[%f,%f], [%f,%f]\n", cones[i][0][0],cones[i][0][1],cones[i][1][0],cones[i][1][1]);
    }
}

// free the memory allocated for the wall points
void deallocate_cones(int num_cones)
{
    int rows = num_cones;
    int cols = 2;
    int height = 2;
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            free(cones[i][j]);
        }
        free(cones[i]);
    }
    free(cones);
}

int main(void)
{
    //double cone[2][2]= calculate_intervals(points[0], 0.13, 0.13);
    //printf("[%f,%f], [%f,%f]\n",cone[0][0],cone[0][1],cone[1][0],cone[1][1]);

    allocate_cones(5,points);
    deallocate_cones(5);
}