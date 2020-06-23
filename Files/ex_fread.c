#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *file = NULL;
   char str[101];
   int size;

   file = fopen("myFile.txt", "r");

   if (file == NULL) {
       printf("Could not open file!");
       return 0;
   }

   size = fread(&str[0], sizeof(char), 100, file);
   str[size] = "\0";

   printf("Data read from file \n\n %s\n", str);
   fclose(file);
   
   return 0;
}