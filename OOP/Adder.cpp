#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "Adder.h"

const std::string Adder::get_description() {
    return "Add";
}

void Adder::work() {
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("%d + %d = %d\n", x, y, x + y);
}
