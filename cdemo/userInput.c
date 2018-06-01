#include <stdio.h>

float areaCircle(float r)
{
float a = 3.14*r*r;
return a;
}

float radiustop()
  {

    float rtop;
    char input2 [256];
    int correct2 = 0;

    while (correct2 == 0)
      {
      printf("What is the top radius for your desired range?\n");
      fgets (input2, 256, stdin);
      correct2 = sscanf (input2, "%f", &rtop);
      }
    if (correct2 != 1)
     {
     printf("Enter a legitimate value. :( \n");
     }
  }


float bottomradius()
 {
  float bottomradius;
  char input [256];
  int correct = 0;

  while (correct == 0)

  {
      printf("What is the bottom radius for your desired range?\n");
      fgets (input, 256, stdin);
      correct = sscanf (input, "%f", &bottomradius);
  }
  if (correct != 1)
    {
     printf("Enter a legitimate value :( \n");
    }
  return bottomradius;
 }

float main ()

{
   float r;
   float rtop = radiustop();
   float rbot = bottomradius();
{
for (float r = rbot; r <= rtop; r++);
  {
     float a = areaCircle(r);
     printf("%f\n", a);
  }
}
}
