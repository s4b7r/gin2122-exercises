#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int divide(int x, int y) {
    return x / y;
}
int main(int argc, char **argv) {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int result = divide(x, y);
    printf("%d\n", result);
    system("pause");
    return 0;
}