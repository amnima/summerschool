#include <stdio.h>

void fibonacci(int *array)
{
    int i;
    int f0, f1, f2;
    f0 = 0;
    f1 = 1;
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

    // the function fibonacci take care of calculating the first 20 elements of fibonacci array

    fibonacci(&f[0]);
    printf("First 20 Fibonacci numbers are:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", f[i]);
    }
    printf("\n");

    // adding one value to two different pointers
     dummy(&a,&b);
     printf("the final results are:\n%d\t%d\n ",a,b);

    return 0;
}

