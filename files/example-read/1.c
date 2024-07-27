#include <stdio.h>


int main() {
    FILE *file = fopen("data1.txt", "r");
    if (file != NULL) {
        int age;
        char name[50];
        fscanf(file, "%s %d", name, &age);
        printf("Имя: %s, Возраст: %d\n", name, age);
        fclose(file);
    } else
        printf("is not found");

    return 0;
}