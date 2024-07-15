#include <stdio.h>

// обьявляем функцию
int sum(int a, int b); // шапка функции

int main() {
    // используем функцию
    int ans = sum(1, 2);
    printf("%d", ans);

    return 0;
}

// определяем функцию
int sum (int a, int b) {
    return a + b;
}