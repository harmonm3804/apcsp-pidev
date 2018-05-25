#include <stdio.h>

float areaCircle(float r)
{
float a = 3.14*r*r;
}


float main ()
{
  float a;
  float r;

  for (float r = 3.5; r < 12.5; r++)
{
  a = areaCircle (r);

 printf("%f\n", a);}


}

