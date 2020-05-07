#include <stdio.h>
#include <stdlib.h>

struct food {
    char type[20];
    char brand[20];
    char fabricationDate[11];
    char goodThrough[11];
    int availability;
};


int main() {
   struct food food1;

   printf("Register the food data: \n");
   printf("Type: ");
   gets(food1.type);

   printf("Brand: ");
   gets(food1.brand);

   printf("Fabrication date: ");
   gets(food1.fabricationDate);

   printf("Good through: ");
   gets(food1.goodThrough);

   printf("Availability: ");
   scanf("%d", &food1.availability);

   printf("The %s from %s was fabricated in %s and is good through %s.\n There are courently %d unities in stock", food1.type, food1.brand, food1.fabricationDate, food1.goodThrough, food1.availability);

   return 0;
}