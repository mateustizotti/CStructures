#include <stdio.h>
#include <stdlib.h>

int main() {
   int *v = NULL;
   int n;

   printf("Inform the size of your array: ");
   scanf("%d", &n);

   if (n <= 1) {
       printf("Your array needs to be bigger than 1! Exiting");
       return 0;
   }

    v = malloc(n * sizeof(int));

   if (v == NULL) {
       printf("Could not allocate memory! Exiting");
       return 0;
   } else {
       v[0] = 35;
       printf("v[0] = %d", v[0]);
       free(v);
       v = NULL;
   }
   
   return 0;
}