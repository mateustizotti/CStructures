#include <stdio.h>
#include <stdlib.h>

int calcTension(int i, int r)  {
    return i * r;
}

int main()
{
    int i, r;

    printf("This program will calculate the tension in your circuit.\n");

    printf("Type in the current:\n");
    scanf("%d", &i);

    printf("Type in the resistance:\n");
    scanf("%d", &r);

    printf("The tension is: %d", calcTension(i, r));
    return 0;
}
