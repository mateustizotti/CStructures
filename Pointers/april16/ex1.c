#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    char *p = NULL;

    printf("Type in some word: \n");
    gets(string);

    p = &string[0];
    printf("String: %s\n", p);
}
