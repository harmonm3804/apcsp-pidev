#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value %d and size %d bytes.\n", a, sizeof(a));

  char b = 97;
  printf("char b value %c and size %d bytes.\n", b, sizeof(b));

  float c = 1.23;
  printf("float c value %f and size %d bytes.\n", c, sizeof(c));

  double d = 1.23;
  printf("double d value %f and size %d bytes.\n", d, sizeof(d));

  unsigned int e = 545;
  printf("unsigned int e value %d and size %d bytes.\n", e, sizeof(e));

  short int f = 545;
  printf("short int f value %d and size %d bytes.\n", f, sizeof(f));  
}

