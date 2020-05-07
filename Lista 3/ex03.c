#include <stdio.h>
#include <stdlib.h>

int upperCase(int x) {
    return x - 32;
}

int main()
{
    int x;
    printf("Type in a lower case letter:\n");
    scanf("%c", &x);
    printf("Upper case letter: %c", upperCase(x));
    return 0;
}
