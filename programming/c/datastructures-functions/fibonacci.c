#include <stdio.h>

void fibonacci(int *array)
{
    int i;
    int f0, f1, f2;
    //int array[20];
    f0 = 0;
    f1 = 1;
    printf("%d\n%d\n", f0, f1);
    f2 = f0 + f1;
    for (i=0;i<20;i++) {
        //printf("%d\n", f2);
        f0 = f1;
        f1 = f2;
        f2 = f0 + f1;
	array[i] = f2;
    }

}



void dummy(int *a, int *b)
{
	int var;
	int constant = 1;
	*a +=constant;
	*b +=constant;
	
}




int main(int argc, char *argv[],int *array[])
{
    // declare array and loop variable
    int f[20];
    int i;
    int a=10,b=20;

    // initialize necessary array elements and write the for loop

    fibonacci(&f[0]);
    printf("First 20 Fibonacci numbers are:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", f[i]);
    }
    printf("\n");

     dummy(&a,&b);
     printf("the final results are:\n%d\t%d\n ",a,b);

    return 0;
}

