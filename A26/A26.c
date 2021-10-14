
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int divide(int x, int y) {
    return x / y;
}
int multiply(int x, int y) {
    return x * y;
}

int main(int argc, char **argv) {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int choice;
    printf("1*, 2/\n");
    scanf("%d", &choice);
    int result;
    if (choice == 1) result = multiply(x, y);
    else if (choice == 2) result = divide(x, y);
    printf("%d\n", result);
    system("pause");
    return 0;
}
