#include <stdio.h>

int main(int argc, char *argv[])
{
	//int a = 5, b = 10;
	//int c = b/a;
	int dummy;
	//printf("The result to first expression:%d\n", c);
	printf("Please enter your age:\n");
	scanf("%d",&dummy);

	if (dummy<24 || dummy>35){
		printf("it is actually better for you to learn C/C++\n");
	}
	else{
		printf("I would suggest to go on and make a career in Fortran\n");
	}

        // recalling getchar to hold the answer on screen 
	getchar();
       // returning 0 since we have nothing to pass to...
       return 0;	
	
}
