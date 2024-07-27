#include <stdio.h>

int main() {
    FILE *file = fopen("data3.txt", "w");
    if (file != NULL) {
        putc('H', file);
        putc('e', file);
        putc('l', file);
        putc('l', file);
        putc('o', file);
        putc('\n', file);
        fclose(file);
    }
}
