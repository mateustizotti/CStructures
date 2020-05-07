#include <stdio.h>
#include <string.h>

int main() {
    
    char str[50];
    printf("Type in a word: \n");
    gets(str);
    printf("Size of word: %d", strlen(str));
    return 0;

}