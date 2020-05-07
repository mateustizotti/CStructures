#include <stdio.h>
#include <string.h>

int main() {

    char str1[50], str2[50];

    printf("Type in the first word: \n");
    gets(str1);
    
    printf("Type in the second word: \n");
    gets(str2);

    printf("Concatenated strings: %s", strcat(str1, str2));
    return 0;
}