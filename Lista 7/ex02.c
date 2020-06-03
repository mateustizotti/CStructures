#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *file = NULL;
   char fileName[100], ch;
   int x = 0;

   printf("Type in the name of a file: ");
   gets(fileName);
   
   if ((file = fopen(fileName, "r")) == NULL) {
       printf("Could not open file!");
       return 0;
   }

   while ((feof(file)) == 0) {
       ch = fgetc(file);

       if (ch != EOF) {
           x++;
       }
   }
   printf("\nAmount of characteres in that file: %d\n", x);

   fclose(file); 
   return 0;
}