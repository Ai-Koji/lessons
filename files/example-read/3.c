#include <stdio.h>

int main() {
    FILE *file = fopen("data3.txt", "r");
    if (file != NULL) {
        int ch;
        while ((ch = getc(file)) != EOF) {
            printf("%c", ch);
        }
        fclose(file);
    }

    return 0;
}