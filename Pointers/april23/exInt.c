#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b, int *res) {
    *res = a + b;
    return 0;
}

int main() {
    int a = 1, b = 2, res = 0;
    
    sum(a, b, &res);
    printf("Sum of %d and %d: %d", a, b, res);
    return 0;
}