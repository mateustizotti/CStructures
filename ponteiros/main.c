#include <stdio.h>
int main()
{
    int var;
    int *ptr = NULL;
    ptr = &var;
    printf("O endere�o de var e: %p\n", ptr);
}
