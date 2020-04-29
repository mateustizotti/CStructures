#include <stdio.h>
#include <stdlib.h>

void power(int x, int *y) {
   *y = x*x;
}

int main() {
   int x, y;

   printf("This program will calculate the square of a number\nType in the number:");
   scanf("%d", &x);

   power(x, &y);
   printf("Result: %d", y);

   return 0;
}