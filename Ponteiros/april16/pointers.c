#include <stdio.h>

int main()
{
    int var;
    int *ptr = NULL;
    ptr = &var;
    printf("Var's pointer address: %p\n", ptr);
}
