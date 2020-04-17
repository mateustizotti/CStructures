#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100], t, f;
    char *p = NULL;

    printf("Type in some word: \n");
    scanf("%s", string);
    p = string;
    
    printf("String: %s\n", p);
    printf("String adress: %p\n", p);
    p += 2;
    printf("String 3rd letter: %c\n", *p);
    p++;
    printf("String 4th letter: %c\n", *p); 

    return 0;
}
