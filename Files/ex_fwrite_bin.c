#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *file;
   int arr[10];

   if ((file = fopen("myBinFile", "wb")) == NULL) {
       printf("Could not open file!");
       return 0;
   }

   for (int i = 0; i < 10; i++) {
       arr[i] = i;
   }
   
   fwrite(&arr[0], sizeof(int), 10, file);
   fclose(file);

   return 0;
}