#include <stdio.h>

int main()
{
  // standard for loop - from 0
  int div=25;
  for (int i = 0; i < 100; i++)
  {
    if (i%div==0)
    {
      printf("%d \n",i);
    }
   }
    return 0;
 }
