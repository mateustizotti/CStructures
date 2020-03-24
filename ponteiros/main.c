#include <stdio.h>
int main()
{
    int var;
    int *ptr = NULL;
    ptr = &var;
    printf("O endereço de var e: %p\n", ptr);
}
