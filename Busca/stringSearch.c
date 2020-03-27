#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[51], search;
    int found = 0;

    printf("Type in a word or sentence up to 50 characters:\n");
    gets(string);

    printf("which letter do you want to search for?\n");
    scanf("%c", &search);

    for (int i=0; i <= 51; i++) {
        if(string[i] == search) {
            printf("The character '%c' was found at position %d\n", search, i+1);
            found = 1;
            break;
        }   
    }

    if (found == 0) {
        printf("Character not found!\n");
    }

    system("pause");
}