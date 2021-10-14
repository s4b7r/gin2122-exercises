#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void continuous_multiplication() {
    int product, choice = 1;
    for (product = 1; choice != 0; product *= choice != 0 ? choice : 1) {
        printf("Continous input: ");
        scanf("%d", &choice);
    }
    printf("%d\n", product);
}

void continuous_addition() {
    int sum;
    char choice[] = "0";
    for (sum = 0; strcmp(choice, "x"); sum += (strcmp(choice, "x") ? atoi(choice) : 0)) {
        printf("Continous input: ");
        scanf("%s", choice);
    }
    printf("%d\n", sum);
}
