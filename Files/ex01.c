#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE * file = NULL;
    char str[10];

    printf("Type in a short string: ");
    gets(str);

    if ((file = fopen("file.txt", "w")) == NULL) {
        printf("Could not open file!");
        return 0;
    }

    int size = strlen(str);
    for (int i = 0; i < size; i++) {
        fprintf(file, "%c\n", str[i]);
    }

    fclose(file);
    return 0;
}