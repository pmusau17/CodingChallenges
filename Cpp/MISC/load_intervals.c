// Patrick Musau
// 08-2020
// loading points

#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
#include <stdlib.h>
#include <sys/time.h>




double points[6][2] = {{2.0,2.0},{4.7,2.7},{11.36,-1.46},{3.0,6.4},{-9.64,2.96},{2.0,2.0}};
double *** obstacles = 0;


// function that allocates the 3d array for the obstacles
void allocate_obstacles(int num_obstacles,double (*points)[2])
{
    int rows = num_obstacles;
    int cols = 2;
    int height = 2;
    int i,j;
    double w = 0.13;
    double h = 0.13;

    obstacles = (double***)malloc(rows * sizeof(double **));
    
    // check if memory was allocated 
    if(obstacles == NULL)
	{
		fprintf(stderr, "out of memory\n");
		exit(0);
	}

    for(i=0;i<rows;i++)
    {
        obstacles[i] = (double **)malloc(cols * sizeof(double*));
        // check if memory was allocated
        if(obstacles[i] == NULL)
		{
			fprintf(stderr, "out of memory\n");
			exit(0);
		}
        for(j=0;j<cols;j++)
        {
            obstacles[i][j] = (double*)malloc(height*sizeof(double));
            // check if memory was allocated
            if(obstacles[i][j] == NULL)
		    {
			    fprintf(stderr, "out of memory\n");
			    exit(0);
		    }
        }
    }

    for(i=0;i<rows;i++)
    {
        obstacles[i][0][0] = points[i][0]-w/2.0;
        obstacles[i][0][1] = points[i][0]+w/2.0;
        obstacles[i][1][0] = points[i][1]-h/2.0;
        obstacles[i][1][1] = points[i][1]+h/2.0;
        printf("[%f,%f], [%f,%f]\n", obstacles[i][0][0],obstacles[i][0][1],obstacles[i][1][0],obstacles[i][1][1]);
    }
}

// free the memory allocated for the wall points
void deallocate_obstacles(int num_obstacles)
{
    int rows = num_obstacles;
    int cols = 2;
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            free(obstacles[i][j]);
        }
        free(obstacles[i]);
    }
    free(obstacles);
}

int main(void)
{
    allocate_obstacles(6,points);
    deallocate_obstacles(6);
}