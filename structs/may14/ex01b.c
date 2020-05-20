#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int age;
};

int main() {
   struct student student1;
   struct student *ps;
   ps = &student1;

   printf("Name: ");
   scanf("%s", ps->name);

   printf("Age: ");
   scanf("%d", &ps->age);

   printf("-----\n");
   printf("Name: %s\n", ps->name);
   printf("Age: %d\n", ps->age);
   printf("-----\n"); 
   return 0;
}