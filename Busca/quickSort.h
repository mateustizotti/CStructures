#include <stdio.h>

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