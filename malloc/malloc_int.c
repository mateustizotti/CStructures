#include <stdio.h>
#include <stdlib.h>

int main() {
   int *v = NULL;
   v = malloc(sizeof(int));

   if(v == NULL) {
       printf("Could not allocate memory. Exiting");
       exit(1);
   } else {
       printf("Memory allocated. V address = %p\n", v);

       printf("Inform an integer: ");
       scanf("%d", v);

       printf("v = %d", *v);

       free(v);
       v = NULL;
   }
   
   return 0;
}