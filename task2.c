#include <stdio.h>

int main()
{
	int a = 5, b = 10;
	int c = b/a;
	float dummy;
	//printf("The result to first expression:%d\n", c);
	printf("Please enter a desired number\n");
	scanf("%f",&dummy);

	if (type(dummy)==int){
		printf("the number %d is an integer!\n",dummy);
	}
	else if (type(dummy)==float){
		printf("the number %f is a decimal number!\n",dummy);
	}


        // recalling getchar to hold the answer on screen 
	getchar();
       // returning 0 since we have nothing to pass to...
       return 0;	
	
}
