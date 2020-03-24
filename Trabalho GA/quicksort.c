#include <stdio.h>
#define size 6

void swap(int numbers[], int a, int b) {
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
}

int partition(int numbers[], int start, int end) {
    int pivotIndex = start;
    int pivotValue = numbers[end];

    for (int i = start; i < end; i++){
        if (numbers[i] < pivotValue) {
            swap(numbers, i, pivotIndex);
            pivotIndex++;
        }
    }

    swap(numbers, pivotIndex, end);
    return pivotIndex;
}

void quickSort(int numbers[], int start, int end) {
    int pivot;
    if (start < end) {
        pivot = partition(numbers, start, end);
        quickSort(numbers, start, pivot - 1);
        quickSort(numbers, pivot + 1, end);
    }
}

int main() {
    int numbers[size], i;

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

    quickSort(numbers, 0, size);

    printf("Vector in increasing order:\n");
    for (i = 0; i < size; i++){
        printf("%d\n", numbers[i]);
    }

    system("pause");
}