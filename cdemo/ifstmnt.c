#include <stdio.h>

int main()
{
  int a = 0;
  int b = 5;
  // if statement to test is a is equal to 0
  if (a == b)
  {
    printf("a is b\n");
  }
  else
  {
    printf("a is not b\n");
  }

  if (a != b)
  {
    printf("a is not b\n");
  }
  else
  {
    printf("a is b\n");
  }

  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is not greater than b\n");
  }

  if (a == 0 && b == 0)
  {
    printf("a and b are equal to 0\n");
  }
  else
  {
    printf("a and b are not both equal to 0\n");
  }

  if (a == 0 || b == 0)
  {
    printf("a or b is equal to 0\n");
  }
  else
  {
    printf("a or b is not equal to 0\n");
  }

 if (!(a == 0))
  {
    printf("a is not equal to 0\n");
  }
  else
  {
    printf("a is 0\n");
  }

}
