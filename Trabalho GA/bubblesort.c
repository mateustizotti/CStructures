#include <stdio.h>
#define size 6

void swap(int numbers[], int a, int b) {
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
}

void bubbleSort(int numbers[]) {
    for (int i = 1; i < size; i++){
        for (int j = 0; j < size - i; j++){
            if (numbers[j] > numbers[j + 1]){
                swap(numbers, j, j+1);
            }
        }
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

    bubbleSort(numbers);

    printf("Vector in increasing order:\n");
    for (i = 0; i < size; i++){
        printf("%d\n", numbers[i]);
    }

    system("pause");
}