#include <stdio.h>
#include <stdlib.h>

struct date {
    int day;
    int month;
    int year;
};


struct food {
    char type[20];
    char brand[20];
    struct date fabricationDate;
    struct date goodThrough;
    int availability;
};


int main() {
   struct food food1;

   printf("Register the food data: \n");
   printf("Type: ");
   gets(food1.type);

   printf("Brand: ");
   gets(food1.brand);

   printf("Fabrication date: \n");
   printf("Fabrication day: ");
   scanf("%d", &food1.fabricationDate.day);

   printf("Fabrication month: ");
   scanf("%d", &food1.fabricationDate.month);

   printf("Fabrication year: ");
   scanf("%d", &food1.fabricationDate.year);

   printf("Good through: \n");
   printf("Day: ");
   scanf("%d", &food1.goodThrough.day);

   printf("Month: ");
   scanf("%d", &food1.goodThrough.month);

   printf("Year: ");
   scanf("%d", &food1.goodThrough.year);

   printf("Availability: ");
   scanf("%d", &food1.availability);

   printf("The %s from %s was fabricated in %d/%d/%d and is good through %d/%d/%d.\n There are courently %d unities in stock", food1.type, food1.brand, food1.fabricationDate.day, food1.fabricationDate.month, food1.fabricationDate.year, food1.goodThrough.day, food1.goodThrough.month, food1.goodThrough.year, food1.availability);

   return 0;
}