#include <stdio.h>
#include <stdlib.h>
#include "quickSort.h"
#define size 10

int binarySearch(int numbers[], int left, int right, int x) {
        int mid = (left + right)/2;

        while (left <= right){
            if (numbers[mid] == x) {
                return mid + 1;
                break;
            } else if (numbers[mid] < x) {
                left = mid + 1;
            } else if (numbers[mid] > x) {
                right = mid - 1;
            }
            mid = (left + right)/2;
        }
        
    if (left > right) {
        printf("Integer not found!\n");
        system("pause");
    }
}

int main() {
    int numbers[size], i, search, index;

    printf("Enter %d integers, hit enter after each one:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Current vector's order:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", numbers[i]);
    }

    quickSort(numbers, 0, size - 1);

    printf("Vector in increasing order:\n");
    for (i = 0; i < size; i++){
        printf("%d\n", numbers[i]);
    }

    printf("Type in the number you are looking for:\n");
    scanf("%d", &search);

    index = binarySearch(numbers, 0, size-1, search);

    printf("Integer %d found at position %d\n", search, index);
    system("pause");
}