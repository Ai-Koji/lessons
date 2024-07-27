#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w");
    if (file != NULL) {
        fprintf(file, "Привет, мир! %d\n", 2024);
        fclose(file);
    }

    return 0;
}