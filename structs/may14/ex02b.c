#include <stdio.h>
#include <stdlib.h>

struct address {
    char city[50];
    char street[50];
    int number;
};

void registerAddress(struct address *adr) {
    printf("City: ");
    gets(adr->city);
    fflush(stdin);
    printf("Street: ");
    gets(adr->street);
    fflush(stdin);
    printf("Number: ");
    scanf("%d", &adr->number);
    fflush(stdin);
}

int main() {
   struct address adr;
   registerAddress(&adr);

   printf("-----\n");
   printf("City: %s\n", adr.city);
   printf("Street: %s\n", adr.street);
   printf("Number: %d\n", adr.number);
   printf("-----\n");

   return 0;
}