#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *file = NULL;
   char fileName[100], ch, search;
   int x = 0;

   printf("Type in the name of a file: ");
   gets(fileName);

   printf("Type in the name of the character you are looking for: ");
   scanf("%c", &search);
   
   if ((file = fopen(fileName, "r")) == NULL) {
       printf("Could not open file!");
       return 0;
   }

   while ((feof(file)) == 0) {
       ch = fgetc(file);

       if (ch != EOF && ch == search) {
           x++;
       }
   }
   
   printf("\n'%c' was found %d times in %s\n", search, x, fileName);
   fclose(file); 
   return 0;
}