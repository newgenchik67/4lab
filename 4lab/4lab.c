#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "ru");
    int a, b, c;
    int condition;
    printf("=== КОНТРОЛЬ КАЧЕСТВА ФАБРИКИ ИГРУШЕК ===\n");
    printf("Введите вес трех игрушек в граммах (A, B, C):\n");
    scanf("%d %d %d", &a, &b, &c);
    condition = (a % 7 == 0) && (b % 7 == 0) && (c % 7 == 0);
    printf("Партия принята (1 - да, 0 - нет): %d\n", condition);
    return 0;
}