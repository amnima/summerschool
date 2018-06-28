#include <cstdio>

class democlass {
public:
  // Two member variables, a and b
  int a, b;

  // TODO: add here the member function
  //       described in the exercise
  void add()
  {
	  int c;
	  c = a+b;
	  printf("this is the sum:%i \n",c);
  }
  void print_a() const {printf("a and b are %i \t %i\n",a,b);};
  
};

int main(void)
{
  democlass demo;
  demo.a = 10;
  demo.b = 20;

  // TODO: add here a call to the member
  //       function
  demo.print_a();
  demo.add();
  
  return 0;
}
