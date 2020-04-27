#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concat(char *str1, char *str2) {
   while(*str1)
      str1++;

   while (*str2){
      *str1 = *str2;
      str2++;
      str1++;
   }
   *str1 = '\0';
   printf("%c", *str1);
}

int main() {
   char str1[20], str2[20], str3[40];
   printf("Type in the first word: \n");
   scanf("%s", str1);
   printf("Type in the second word: \n");
   scanf("%s", str2);

   concat(str1, str2);

   system("pause");
}