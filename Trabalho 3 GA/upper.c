#include <stdio.h>
#include <stdlib.h>

int upper(char *str, char *upperStr) {
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] <= 90 && str[i] >= 65) {
            upperStr[i] = str[i];
        } else if (str[i] >= 97 && str[i] <= 172) {
            upperStr[i] = str[i] - 32;
        } else {
            upperStr[i] = str[i];
        }
        
    }
    printf("%s", upperStr);
    
    return 0;
}

int main() {
   char str[10], upperStr[10];
    printf("Type in a string: \n");
    gets(str);
    
    upper(str, upperStr);
}