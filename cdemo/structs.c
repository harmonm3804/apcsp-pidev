#include <stdio.h>
#include <string.h>

struct Students {
        char firstname[50];
        char lastname[50];
        int age;
        int studentid;
        };

void printStudent(struct Students* student);

int main()
{
  struct Students StudentArr[2];
  char input[256] ;
  char  firstname[256];
  char  firstname2[256];
  char  lastname[256];
  char lastname2[256];
  int age;
  int age2;
  int studentid;
  int stid2;
  struct Students student1;
  struct Students student2;

  printf("Student 1 First Name: \n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", firstname);
  printf("Student 1 Last Name: \n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", lastname);
  printf("Student 1 Age: \n");
  fgets(input, 256, stdin);
  printf("Student 1 ID: \n");
  fgets(input, 256, stdin);

  strcpy(student1.firstname, firstname);
  strcpy(student1.lastname, lastname);
  student1.age = age;
  student1.studentid = studentid;
  strcpy(StudentArr[0].firstname, firstname);
  strcpy(StudentArr[0].lastname, lastname);
  StudentArr[0].age = age;
  StudentArr[0].studentid = studentid;

  printf("Student 2 First Name: \n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", firstname2);
  printf("Student 2 Last Name: \n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", lastname2);
  printf("Student 2 Age: \n");
  fgets(input, 256, stdin);
  printf("Student 2 ID: \n");
  fgets(input, 256, stdin);

  strcpy(student2.firstname, firstname2);
  strcpy(student2.lastname, lastname2);
  student2.age = age2;
  student2.studentid = stid2;
  strcpy(StudentArr[1].firstname, firstname2);
  strcpy(StudentArr[1].lastname, lastname2);
  StudentArr[1].age = age2;
  StudentArr[1].studentid = stid2;

  for (int i = 0; i < 2; i++)
         {
        printf("This is student %d:\n", i+1);
        printStudent(&(StudentArr[i]));
        printf("\n");
         }

}
void printStudent(struct Students* student)
{
  printf(" First name: %s\n", student->firstname);
  printf(" Last name: %s\n", student->lastname);
  printf(" Age: %d\n", student->age);
  printf(" Student id: %d\n", student->studentid);
}
