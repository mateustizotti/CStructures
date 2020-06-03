#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *file = NULL;

   file = fopen("My_File.txt", "w");

   if (file == NULL) {
       printf("Could not open file!\n");
   }

   fprintf(file, "%s", "My first file!");
   fclose(file);
   
   return 0;
}