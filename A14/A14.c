#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char **argv) {
    int x, y, r;
    scanf("%d", &x);
    scanf("%d", &y);
    r = x / y;
    printf("%d\n", r);
    system("pause");
    return 0;
}
