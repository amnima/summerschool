#include<stdio.h>
#include <stdlib.h>
//#include "pngwriter.h"
#include "header_data.h"



void laplacian(new_data *field)
{
      
    int i, j;
    double laplacian[NX][NY];
   

    // First initalize the inner values to zero
    for (i = 1; i < NX - 1; i++) {
        for (j = 1; j < NY - 1; j++) {
            field->array[i][j] = 0.0;
        }
    }

    // Zero out the outer boundary of laplacian
    for (i = 0; i < NX; i++) {
        laplacian[i][0] = laplacian[i][NY - 1] = 0.0;
    }
    for (j = 0; i < NY; j++) {
        laplacian[0][j] = laplacian[NX - 1][j] = 0.0;
    }

    // Initial conditions for top and bottom
    for (i = 0; i < NX; i++) {
        field->array[i][0] = 30.0;
        field->array[i][NY - 1] = -10.0;
    }
    // left and right
    for (j = 0; j < NY; j++) {
        field->array[0][j] = 15.0;
        field->array[NX - 1][j] = -25.0;
    }

    // Evaluate the Laplacian
    for (i=1;i<NX-1;i++)
            for (j=1;j<NY-1;j++){
                    laplacian[i][j] =
                            ((field->array[i-1][j]-2*field->array[i][j]+field->array[i+1][j])/(DX*DX))
                          + ((field->array[i][j-1]-2*field->array[i][j]+field->array[i][j+1])/(DY*DY));
            }

    for (i = 0;i<NX;i++)
            for (j=0;j<NY;j++){
                    printf("%f",laplacian[i][j]);
            }

}












int main()
{
	new_data field;
	laplacian(&field);

        return 0;
}


