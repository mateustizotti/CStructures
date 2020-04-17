#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *px = NULL;
    px = &x;
    printf("X's address: %p\n", px);
    printf("X's value: %d\n", *px);
}
