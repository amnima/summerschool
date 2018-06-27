#include <stdio.h>
#include <stdlib.h>

#define NX 258
#define NY 258

int main(void)
{
    int i, j;
    // Add here the definition for array with name 'array'
    // of size NX times NY (258x258)
    float array[NX][NY];

    // initializing zeros
      for (i = 1; i < NX - 1; i++) {
        for (j = 1; j < NY - 1; j++) {
            array[i][j] = 0.0;
        }
    }


    // boundary conditions for top and bottom  
    for (i = 0;i<NX;i++)
    {       // bottom    
	    array[i][0] = 5;
	    //top
	    array[i][NY-1] = 85;
    }

    // boundary conditions for left and right
    for (j = 0;j<NY;j++)
    {
	    // right
	    array[0][j] =  20;
	    //left
	    array[NX-1][j] = 70;
    }

    return 0;
}
