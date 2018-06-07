#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
 {
 printf("Welcome to computer science principles! In this class, we will perform various projects. Like every thing in life, there will be complications. Choose your path through this class. Good luck.\n\n");
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
   printf("You'll be very productive this semester, good job.\n\n");
   }
 else
   {
   printf("Their senioritis will wear off on you, bad choice. \n\n");
   }
// return first;

 
  int second;
  char input2 [256];
  int a2;

  int secondone;
  char input21 [256];
  int a21;

   {
    printf("You've begun your first project in App Inventor, the Soundboard project. When making your write up, do you use an aia or apk file for making your QR code?\n");
    printf("0: aia\n");
    printf("1: apk\n");
    fgets (input2, 256, stdin);
    a2 = sscanf (input2, "%f", &second);
   }
 if (second == 0)
   {
   printf("aia is incorrect. Your QR doesn't work. You got marked down by a peer grader.\n\n");
   }
 else
   {
   printf("apk is correct, but your peer grader couldn't get Google Goggles to work and thinks it's your fault!! :(\n\n");
   printf("What do you do?\n");


   printf("0: My life is sad. Deal with it.\n");
   printf("1: Complain to Whitehouse\n");
   fgets (input21, 256, stdin);
   a21 = sscanf (input21, "%f", &secondone);

   if (secondone == 0)

   {
   printf("You got a 50 on this project.\n\n");
   }
  else
   {
   printf("Whitehouse gets a bad impression of you; harsh grading for rest of semester.\n\n"); 
   }
   }
  int third;
  char input3 [256];
  int a3;
   {
    printf("You are bored and the unit 3 test is tomorrow. Do you read Blown to Bits?\n");
    printf("0: Read\n");
    printf("1: Hang with friends\n");
    fgets (input3, 256, stdin);
    a3 = sscanf (input3, "%f", &third);
   }
 if (third == 0)
   {
   printf("You are super tired the next day and didn't see the last 10 questions.\n\n");
   }
 else
   {
   printf("You are super tired the next day and didn't see the last 20 questions (there are only 20 questions).\n\n");
   }

  int thirdone;
  char input31 [256];
  int a31;


srand(time(NULL));
  int r=rand() %2;
 if (r ==0)
 {
  printf("You are walking home and step on dog poop. You get sick the next day. Do you...\n");
{
    printf("0: Go to school\n");
    printf("1: Skip\n");
    fgets (input31, 256, stdin);
    a31 = sscanf (input31, "%f", &thirdone);
   }
 if (thirdone == 0)
   {
   printf("You get more sick and fail a test.\n\n");
   }
 else
   {
   printf("Nothing happens!\n\n");
   }
 }
 else if (r==1)
 {
  printf("Surprise! You forget to put a journal on your website and get a 50.\n\n");
 }

int fourth;
char input4 [256];
int a4;

int fourthone;
char input41 [256];
int a41;

   {
    printf("You've learnt a lot so far; it's Create Task #1 time! It's the first day, what's your plan?\n");
    printf("0: Study for tomorrow's calculus 3 math test!\n");
    printf("1: Start my create task.. I'm a good student :-)\n");
    fgets (input4, 256, stdin);
    a4 = sscanf (input4, "%f", &fourth);
   }
 if (fourth == 0)
{
 {
   printf("It's the second day, and the math test wasn't that bad thanks to your grueling cramming.\n\n");
   printf(" You are finally ready to work! Except, where is your partner at? Do you text them?\n");

   printf("0: No, I don't know them that well. I'll just carry and be upset about it.\n \n");
   printf("1: Text her. Find out what's up???\n\n");
   fgets (input41, 256, stdin);
   a41 = sscanf (input41, "%f", &fourthone);
}
{
 if (fourthone == 0)
    {
    printf("Bad things happen when you don't communicate with your partner.. smh. Now you're in a bad mood and burning bridges.\n\n");
    }
else
    {
    printf("Turns out they're just ditching. (aka Xiran with her 5 truancies) You're upset, to say the LEAST.\n");
   }
}
}
 else if (fourth != 0)
   {
   printf("You made a storyboard but got distracted and started playing snake. It's the second day and your math test sucked. You are salty and your partner isn't here for some reason. \n");
   printf("The world is working against you. You're so upset. :(  You can't be productive for the rest of class.\n \n");
 }
}
//return fourth;


int fifth;
  char input5 [256];
  int a5;

   {
    printf("Regardless of your relationship with your partner, you're super stressed because you had a math presentation you were preparing for during$
    printf("0: I don't care. I'm hungry. ¯\_(ツ)_/¯ \n");
    printf("1: I can make it through class without lunch. I'll pass.\n");
    fgets (input5, 256, stdin);
    a5 = sscanf (input5, "%f", &fifth);
   }
 if (fifth == 0)
   {
   printf("Wow. You broke rules and you ended up spilling food all over your computer, breaking it. You owe the school $200 for a replacement laptop. $
   }
 else
{
   printf("Bad choice. You faint on the way home and get sent to the hospital for malnutrition. You're out of school for the next three days recoverin$
   }
// return fifth

  int sixth;
  char input6 [256];
  int a6;

  {
   printf("Your create task is due tomorrow! After that accident, you are finally back to your progress 3 days ago. Your partner is gone again. Do you$
    printf("0: Don't worry about her.. I'll just finish the write up and turn it in.\n");
    printf("1: Wait for her to finish her parts and then do write up.\n");
    fgets (input6, 256, stdin);
    a6 = sscanf (input6, "%f", &sixth);
   }
 if (sixth == 0)
printf("Bad choice. You faint on the way home and get sent to the hospital for malnutrition. You're out of school for the next three days recoverin$
   }
// return fifth

  int sixth;
  char input6 [256];
  int a6;

  {
   printf("Your create task is due tomorrow! After that accident, you are finally back to your progress 3 days ago. Your partner is gone again. Do you$
    printf("0: Don't worry about her.. I'll just finish the write up and turn it in.\n");
    printf("1: Wait for her to finish her parts and then do write up.\n");
    fgets (input6, 256, stdin);
    a6 = sscanf (input6, "%f", &sixth);
   }
 if (sixth == 0)
   {
   printf("Sooo, you didn't communicate with your partner. Y'all ended up writing about the same algorithms, and were knocked some points off for copy$
   }
else
   {
   printf("Don't trust your classmates. They never did their write up, and you fell asleep as the deadline passed. At least you got to turn it in late$
   }
// return sixth 
