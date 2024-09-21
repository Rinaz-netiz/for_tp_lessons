//
// Created by Rinaz on 13.09.2024.
//
#include <stdio.h>

#define TOTAL    10

int main(void) {
    int a, b;
    printf("Введите число a ");
    scanf("%d", &a);
    printf("Введите число b ");
    scanf("%d", &b);

    printf("%d\n", a - b);


    // Создал новую ветку
    // commit 5

    int m[2] = {a, b};

    for(int i = 0; i < 2; i++) {
        printf("%d\n", m[i]);
    }

    int *ptr = &a;
    *ptr = 100;

    return 0;
}
