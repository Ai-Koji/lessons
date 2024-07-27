#include <stdio.h>

int main() {
    FILE *file = fopen("data2.txt", "a");
    if (file != NULL) {
        fputs("Запись в лог-файл.\n", file);
        fclose(file);
    }

    return 0;
}
