#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *file = NULL;
   int x = 0;

   if((file = fopen("number.txt", "r")) == NULL) {
       printf("Could not open file!");
       return 0;
   } else {
       fscanf(file, "%d", &x);
       printf("Number from the file: %d", x);
   }

   fclose(file);
   return 0;
}