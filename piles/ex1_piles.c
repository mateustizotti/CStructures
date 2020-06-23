#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int pile[MAX];
int top = 0;

int add(int new) {
    if (top >= MAX) {
        printf("Pile is full!\n");
        return -1;
    } else {
        pile[top] = new;
        top++;
    }
}

int removeInt(int *p) {
    if (top <= 0) {
        printf("Pile is empty!\n");
        return -1;      
    } else {
        printf("%d", pile[top]);
        *p = pile[top-1];
        top--;
        return 0;
    }
}

int showPile() {
    if (top <= 0) {
        printf("Pile is empty!\n");
        return -1;
    } else {
        printf("Pile elements:\n");
        for (int i = 0; i < top; i++) {
            printf("%d\n", pile[i]);
        }
        
    }
}

int main() {
   int p;

   removeInt(&p);;
   showPile();

   add(37);
   add(24);
   add(2);
   showPile();

   removeInt(&p);
   printf("\nElement removed from the pile: %d\n", p);
   showPile();

   add(44);
   showPile(); 
   return 0;
}