#include <stdio.h>
#include <stdlib.h>

int show(int size, int *arr) {
    printf("Array content:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}

int main() {
   int arr[5] = {1, 2, 4, 8, 16};
   show(5, arr); 
}