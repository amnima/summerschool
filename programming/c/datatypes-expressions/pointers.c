#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c;
    a = 25;
    b = 5;
    c = 10;
    // declare a pointer variable and assign it to address of e.g. a
    int *p,*new_p;
    p = &a;
    //a = (*p)/5;
    // Evaluate expressions using both the original and the pointer variable
    if (a == (*p)){
	    printf("Yes, this is alright!!!\n");
    }
    else{
	    printf("I think something is wrong!???\n");
    }
    // and investigate the value / value pointed to
    new_p = &c;
    int result = 2 * (*new_p) + b;
    printf("The result is:%d\n", result);
    //getchar();
    return 0;
}
