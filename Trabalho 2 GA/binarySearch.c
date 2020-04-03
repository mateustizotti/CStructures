#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[10] = {1,5,7,11,15,19,26,32,38,40}, x, i;

    printf("This program will search for a specific value inside an array of integers.\nType in the number you are looking for:\n");
    scanf("%d", &x);

    int left = 0;
    int right = 9;
    int mid = (left + right)/2;

    while (left <= right){
        if (numbers[mid] == x) {
            printf("Integer %d found at position %d\n", x, mid + 1);
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

    system("pause");
}