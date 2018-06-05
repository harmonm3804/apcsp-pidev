#include <stdio.h>


int main()
{
 {
 printf("Welcome to computer science principles! In this class, we will perform various projects. Like every thing in life, there will be complications. Choose your path through this class. Good luck.\n");
 }
  int first;
  char input [256];
  int a;

   {
    printf("It's the first day of school. Who do you decide to sit with?\n");
    printf("0: Sophomores!\n");
    printf("1: Seniors.. they seem chill.\n");
    fgets (input, 256, stdin);
    a = sscanf (input, "%f", &first);
   }
 if (first == 0)
   {
   printf("You'll be very productive this semester, good job.\n");
   }
 else
   {
   printf("Their senioritis will wear off on you, bad choice. \n");
   }
 return first;

 
  int second;
  char input2 [256];
  int a2;

   {
    printf("You've begun your first project in App Inventor, the Soundboard project. When making your write up, do you use an aia or apk file for making your QR code?\n");
    printf("0: aia\n");
    printf("1: apk\n");
    fgets (input, 256, stdin);
    a2 = sscanf (input, "%f", &second);
   }
 if (second == 0)
   {
   printf("aia is incorrect. Your QR doesn't work. You got marked down by a peer grader.\n");
   }
 else
   {
   printf("apk is correct, but your peer grader couldn't get Google Goggles to work!! :(\n");
   }
 return second;
 }



