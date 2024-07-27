#include <stdio.h>

int main() {
    FILE *file = fopen("data2.txt", "r");
    if (file != NULL) {
        char line[100];
        // будет считывать каждую следующую строчку
        while (fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line);
        }
        fclose(file);
    } else
        printf("is not found");

    return 0;
}