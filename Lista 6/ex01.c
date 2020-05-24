#include <stdio.h>
#include <stdlib.h>

struct car {
    char model[20];
    char plate[9];
    char checkIn[6];
};

int main() {
    struct car * cars;
    int n;

    printf("Inform the number of cars: ");
    scanf("%d", & n);

    if (n < 1) {
        printf("Number needs to be equal or gratter than 1! Exiting");
        return 0;
    }

    cars = malloc(n * sizeof(struct car));

    if (cars == NULL) {
        printf("Could not allocate memory! Exiting");
        return 0;
    } else {
        printf("Memory alloced! Struct address = %p\n", cars);
        fflush(stdin);

        for (int i = 0; i < n; i++) {
            printf("--- Car %d ---\n", i + 1);

            printf("Model: ");
            scanf("%s", cars[i].model);
            fflush(stdin);

            printf("Plate: ");
            scanf("%s", cars[i].plate);
            fflush(stdin);

            printf("Checked in at: ");
            scanf("%s", cars[i].checkIn);
            fflush(stdin);
        }

        printf("\n\n");

        for (int i = 0; i < n; i++) {
            printf("--- Car %d ---\n", i + 1);

            printf("Model: %s\n", cars[i].model);

            printf("Plate: %s\n", cars[i].plate);

            printf("Checked in at: %s\n", cars[i].checkIn);
        }

        free(cars);
        cars = NULL;
    }

    return 0;
}