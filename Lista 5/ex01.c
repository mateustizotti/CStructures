#include <stdio.h>
#include <stdlib.h>

struct pc {
    char ip[20];
    char mac[20];
    char mask[20];
    char routerIp[20];
};

int main() {
   struct pc pcs[3];

   for (int i = 0; i < 3; i++) {
       printf("--- PC %d ---\n", i+1);

       printf("IP: ");
       gets(pcs[i].ip);
       fflush(stdin);

       printf("MAC Address: ");
       gets(pcs[i].mac);
       fflush(stdin);

       printf("Network sub-mask: ");
       gets(pcs[i].mask);
       fflush(stdin);

       printf("Router IP: ");
       gets(pcs[i].routerIp);
       fflush(stdin);
   }

   printf("\n\n");

   for (int i = 0; i < 3; i++)
   {
       printf("--- PC %d ---\n", i+1);
       printf("IP: %s\n", pcs[i].ip);
       printf("MAC Address: %s\n", pcs[i].mac);
       printf("Network sub-mask: %s\n", pcs[i].mask);
       printf("Router IP: %s\n", pcs[i].routerIp);
   }
   
   return 0;
}
