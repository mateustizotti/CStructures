#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *file = NULL;
   int size;
   char str[50] = "Example with fwrite";

   size = strlen(str);
   file = fopen("myFile.txt", "w+");

   if(file == NULL) {
       printf("Could not open file!");
       return 0;
   }

   fwrite(&str[0], sizeof(char), size, file);
   return 0;
}