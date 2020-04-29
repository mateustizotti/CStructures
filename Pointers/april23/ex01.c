#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char concat(char *str1, char *str2) {
   char str3[40];
   char *a = str1;
   char *b = str2;
   char *c = str3;

   while(*a != '\0') {
      *c = *a;
      c++;
      a++;
   }

   while (*b != '\0') {
      *c = *b;
      c++;
      b++;
   }
   printf("%s", str3);
}

int main() {
   char str1[20], str2[20];
   printf("Type in the first word: \n");
   scanf("%s", str1);
   printf("Type in the second word: \n");
   scanf("%s", str2);

   concat(str1, str2);

   return 0;
}