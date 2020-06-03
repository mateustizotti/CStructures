#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * file1 = NULL, * file2 = NULL;
    char ch;
    char name1[100], name2[100];

    printf("Type in the name of the origin file: ");
    gets(name1);

    printf("Type in the name of the destiny file: ");
    gets(name2);

    if ((file1 = fopen(name1, "r")) == NULL) {
        printf("Could not open origin file!");
        return 0;
    }
    fflush(stdin);
    if ((file2 = fopen(name2, "w")) == NULL) {
        printf("Could not open destiny file!");
        return 0;
    }

    while ((feof(file1)) == 0) {
        ch = fgetc(file1);

        if (ch != EOF) {
            fprintf(file2, "%c", ch);
        }
    }

    fclose(file1);
    fclose(file2);
    return 0;
}