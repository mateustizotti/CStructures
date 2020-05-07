#include <stdio.h>
#include <stdlib.h>

struct car {
    char model[100];
    char plate[20];
    char checkIn[6];
};


int main() {
   struct car cars[3];

   for (int i = 0; i < 3; i++) {
       printf("--- Car %d ---\n", i+1);
       
       printf("Model: ");
       gets(cars[i].model);

       printf("Plate: ");
       gets(cars[i].plate);

       printf("Checked in at: ");
       gets(cars[i].checkIn);
   }

   printf("\n\n");

   for (int i = 0; i < 3; i++) {
       printf("--- Car %d ---\n", i+1);
       
       printf("Model: %s\n", cars[i].model);

       printf("Plate: %s\n", cars[i].plate);

       printf("Checked in at: %s\n", cars[i].checkIn);
   }
   
   return 0;
}