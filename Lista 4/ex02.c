#include <stdio.h>
#include <stdlib.h>

void search(char *str, char x) {
   printf("String: %s\n", str);
   printf("Search: %c\n", x);
   int counter = 0;
   int len = strlen(str);
   for (int i = 0; i < len; i++) {
      if (str[i] == x) {
         counter++;
      }
   }
   printf("Number of ocurrencies: %d", counter);
}

int main() {
   char str[30], x;
   printf("Type in a string:\n");
   scanf("%s", str);
   fflush(stdin);
   printf("Type in a letter you want to search for:\n");
   scanf("%c", &x);

   search(str, x);

   return 0;
}