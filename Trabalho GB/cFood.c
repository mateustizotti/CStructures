#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct dish {
    char name[30];
    double price;
    char notes[100];
};

void clear() {
    system("@cls||clear");
}

int menu() {
    int menu;
    clear();
    printf("Welcome the cFood! Type in the desired option: \n");
    printf("1 - Consult the menu\n");
    printf("2 - Make an order\n");
    printf("3 - Exit\n");
    scanf("%d", &menu);
    return menu;
}

void displayDishes(struct dish *dishes, int n) {
    int var;
    clear();
    for (int i = 0; i < n; i++) {
        printf("\n");
        printf("--- Dish %d ---\n", i + 1);
        printf("Name: %s", dishes[i].name);
        printf("Price: R$%.02f\n", dishes[i].price);
        printf("Description/Notes: %s", dishes[i].notes);
        printf("\n");
    }
    printf("Press 0 and Enter to return: ");
    scanf("%d", &var);
}

void wrapOrder(struct dish *dishes, int orders[], int counter, int n, FILE *invoice) {
    int freq[100], ctr = 0;
    for (int i = 0; i < n; i++) {
        freq[i] = -1;
    }
    
    for (int i = 0; i < counter; i++) {
        ctr = 1;
        for (int j = i+1; j < counter; j++) { 
            if (orders[i] == orders[j]) {
                ctr++;
                freq[j] = 0;
            } 
        }
        if (freq[i] != 0) {
            freq[i] = ctr;
        }   
    }
    for (int i = 0; i < counter; i++) {
        if (freq[i] != 0) {    
            fprintf(invoice, "%dx %s", freq[i], dishes[orders[i]].name);
            printf("%dx %s", freq[i], dishes[orders[i]].name);
        }
    }
}

void makeOrder(struct dish *dishes, int n, int orderId) {
    int orders[100], order, var, counter = 0, isOrdering = 1, x;
    double totalValue = 0;
    FILE *invoice = NULL;

    clear();
    printf("Your menu\n");
    for (int i = 0; i < n; i++) {
        printf("\n");
        printf("--- Dish %d ---\n", i + 1);
        printf("Name: %s", dishes[i].name);
        printf("Price: R$%.02f\n", dishes[i].price);
        printf("Description/Notes: %s", dishes[i].notes);
        printf("\n");
    }
    printf("\n");

    while (isOrdering) {
    order:
        printf("Type in the number of the dish to add it to the order (Type 0 to finish order): ");
        scanf("%d", &order);
        if (order <= n && order > 0) {
            printf("How many: ");
            scanf("%d", &x);
            for (int i = 0; i < x; i++) {
                orders[counter] = order-1;
                counter++;
                totalValue += dishes[order-1].price;
            }
            printf("\nAdded %d %s", x, dishes[order-1].name);
            printf("Total value: R$%.02lf\n\n", totalValue);
        } else if (order == 0){
            clear();
            printf("\nFinished order!\n\n");
            printf("Your order:\n");
            invoice = fopen("invoice.txt", "a+");
            fprintf(invoice, "--- Order #%d ---\n", orderId);
            wrapOrder(dishes, orders, counter, n, invoice);
            fprintf(invoice, "Total: R$%.02lf\n", totalValue);
            printf("Total: R$%.02lf\n", totalValue);
            if (totalValue >= 30) {
                fprintf(invoice, "No delivery fee!\n\n");
                printf("No delivery fee!\n\n");
            } else if (totalValue < 30) {
                totalValue += 5;
                fprintf(invoice, "Total with delivery fee (R$5,00): R$%.02lf\n\n", totalValue);
                printf("Total with delivery fee (R$5,00): R$%.02lf\n\n", totalValue);
            }
            fclose(invoice);
            isOrdering = 0;
        } else {
            printf("\nDish not found! Try again...\n\n");
            goto order;
        }
    }
    
    printf("Press 0 and Enter to return: ");
    scanf("%d", &var);
}

int main() {
    struct dish *dishes;
    int orderId = 0;
    int n, x;

    printf("Type in the the amount of dishes: ");
    scanf("%d", & n);

    if (n <= 1) {
        printf("You need to register at least two dishes! Exiting...\n");
        return 0;
    }

    dishes = malloc(n * sizeof(struct dish));

    if (dishes == NULL) {
        printf("Could not allocate memory! Exiting...");
        return 0;
    } else {
        printf("\nRegister your dishes!\n\n");
        fflush(stdin);
        for (int i = 0; i < n; i++) {
            printf("--- Dish %d ---\n", i + 1);

            printf("Name: ");
            fgets(dishes[i].name, sizeof(dishes[i].name), stdin);
            fflush(stdin);

            printf("Price(R$): ");
            scanf("%lf", & dishes[i].price);
            fflush(stdin);

            printf("Description/Notes: ");
            fgets(dishes[i].notes, sizeof(dishes[i].notes), stdin);
            fflush(stdin);
        }
    }
menu:
    clear();
    switch (menu()) {
        case 1:
            displayDishes(dishes, n);
            goto menu;
        case 2:
            orderId++;
            makeOrder(dishes, n, orderId);
            goto menu;
        case 3:
            clear();
            printf("Exiting...\n");
            printf("Bye bye!\n");
            free(dishes);
            dishes = NULL;
            return 0;
        default:
            printf("\nNot an option! Type 0 and try again!");
            scanf("%d", &x);
            goto menu;
    }
    return 0;
}