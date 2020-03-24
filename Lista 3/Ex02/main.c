#include <stdio.h>
#include <stdlib.h>

float calcAvg(float a, float b, float c) {
    float avg = (a + b + c)/3;
    return avg;
}

int main()
{
    float a, b, c;

    printf("Type in your first grade: \n");
    scanf("%f", &a);

    printf("Type in your second grade: \n");
    scanf("%f", &b);

    printf("Type in your third grade: \n");
    scanf("%f", &c);

    printf("Your average is: %f", calcAvg(a, b, c));

    return 0;
}
