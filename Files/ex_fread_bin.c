#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *file = NULL;
   int arr[10], result;

   if ((file = fopen("myBinFile", "rb")) == NULL) {
       printf("Could not open file");
       return 0;
   }

   result = fread(&arr[0], sizeof(int), 10, file);
   printf("Number of itens = %d\n", result);

   for (int i = 0; i < result; i++) {
       printf("arr[%d] = %d\n", i, arr[i]);
   }
   fclose(file); 

   return 0;
}