#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d;
  float* ptrtod;

  ptrtod = &d;

  d = 1.23;
  printf("The value of d is %f\n", d);
  printf("The address of d is %d\n", &d);

  float e;
  float* ptrtoe;

  ptrtoe = &e;
 
  e = 2.23;
  printf("The value of e is %f\n", e);
  printf("The address of e is %d\n", &e);

  float x;
  x = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = x;

  printf("The value of e is %f\n", e);
  printf("The value of d is %f\n", d);

}
