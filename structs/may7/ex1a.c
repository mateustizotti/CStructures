#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[100];
    char id[15];
    int enrollNumber;
};

struct address
{
    char city[100];
    char country[100];
    char street[100];
    int number;
};



int main() {
   struct student student1;
   struct address address1;

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

   printf("Register the stundet addres: \n");

   printf("Country: ");
   gets(address1.country);
   fflush(stdin);

   printf("City: ");
   gets(address1.city);
   fflush(stdin);

   printf("Street: ");
   gets(address1.street);
   fflush(stdin);

   printf("Number: ");
   scanf("%d", &address1.number);
   fflush(stdin);

   printf("The student %s with the ID %s and enrollment number %d lives in the %s street %d, %s/%s.", student1.name, student1.id, student1.enrollNumber, address1.street, address1.number, address1.city, address1.country);

   return 0;
}