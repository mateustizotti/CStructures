#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[100];
    char id[15];
    int enrollNumber;
};


int main() {
   struct student students[3];

   for (int i = 0; i < 3; i++)
   {
       printf("--- Student %d ---\n", i+1);

       printf("Name: ");
       gets(students[i].name);
       fflush(stdin);

       printf("ID: ");
       gets(students[i].id);
       fflush(stdin);

       printf("Enrollment number: ");
       scanf("%d", &students[i].enrollNumber);
       fflush(stdin);
   }
   printf("\n\n");

   for (int i = 0; i < 3; i++)
   {
       printf("--- Student %d ---\n", i+1);
       printf("Name: %s\n", students[i].name);
       printf("ID: %s\n", students[i].id);
       printf("Enrollment number: %d\n", students[i].enrollNumber);
   }

   return 0;
}