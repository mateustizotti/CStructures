#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * file = NULL;
    char x;

    file = fopen("My_File.txt", "r");
    if (file == NULL) {
        printf("Could not open file!");
    } else {
        while (feof(file) == 0) {
            x = fgetc(file);
            if (x != EOF) {
                printf("%c", x);
            }
        }
    }
    fclose(file);
    return 0;
}