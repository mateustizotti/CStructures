#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int start = 0, end = 0, queue[MAX];

int add(int new) {
    if (end == MAX) {
        printf("Queue is empty!\n");
        return -1;
    }

    queue[end] = new;
    end++;
    return 0;
}

int removeInt(int *removed) {
    if (start == end) {
        printf("Queue is empty!\n");
        return -1;
    }

    *removed = queue[start];
    start++;
    return 0;
}

int showQueue() {
    if (start == end) {
        printf("Queue is empty!\n");
        return -1;
    } else {
        printf("Queue:\n");
        for (int i = start; i < end; i++) {
            printf("%d\n", queue[i]);
        }
        return 0;
    }
}

int main() {
    int x, rem=0, ret=0;

    printf("Type in a number: ");
    scanf("%d", &x);
    add(x);
    showQueue();

    printf("Type in a number: ");
    scanf("%d", &x);
    add(x);
    showQueue();

    ret = removeInt(&rem);
    if (ret == 0) {
        printf("\nIten removed from the queue: %d\n", rem);
        showQueue();
    }

    ret = removeInt(&rem);
    if (ret == 0) {
        printf("\nIten removed from the queue: %d\n", rem);
        showQueue();
    }
   return 0;
}