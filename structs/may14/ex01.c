#include <stdio.h>
#include <stdlib.h>

struct data {
    int day;
    int month;
    int year;
};

struct student {
    char name[30];
    char id[30];
    int enrollNumber;
    struct data bDay;
};


int main() {
   struct student student1;

   printf("Register the student's data \n");
   
   printf("Name: ");
   gets(student1.name);
   fflush(stdin);

   printf("ID: ");
   gets(student1.id);
   fflush(stdin);

   printf("Enrollment number: ");
   scanf("%d", &student1.enrollNumber);
   fflush(stdin);

   printf("Birthday data\n");

   printf("Birth day: ");
   scanf("%d", &student1.bDay.day);
   fflush(stdin);

   printf("Birth month: ");
   scanf("%d", &student1.bDay.month);
   fflush(stdin);

   printf("Birth year: ");
   scanf("%d", &student1.bDay.year);
   fflush(stdin);

   printf("The student %s with the ID %s and enrollment number %d was born in %d/%d/%d", student1.name, student1.id, student1.enrollNumber, student1.bDay.day, student1.bDay.month, student1.bDay.year);

   return 0;
}