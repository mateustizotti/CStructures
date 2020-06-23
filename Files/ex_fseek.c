#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *file;
   char str[100];

   if((file = fopen("myFile.txt", "r")) == NULL) {
       printf("Could not open file!");
       return 0;
   }

   fseek(file, (-4), SEEK_END);
   fread(&str[0], sizeof(char), 4, file);

   printf("\n%s\n", str);
   fclose(file);
   return 0;
}