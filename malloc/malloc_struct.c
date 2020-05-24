#include <stdio.h>
#include <stdlib.h>

struct date {
    int day;
    char month[10];
    int year;
};

int main() {
   struct date *d = NULL;

   d = malloc(sizeof(struct date));

   if (d == NULL) {
       printf("Could not allocate memory! Exiting");
       return 0;
   } else {
       d->day = 20;
       strcpy(d->month, "October");
       d->year = 1999;

       printf("%s %dth of %d", d->month, d->day, d->year);

       free(d);
       d = NULL;
   }
   
   return 0;
}