#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char **argv) {
    int x, y, r;
    int choice;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("1+, 2-, 3*, 4/\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        r = x + y;
        break;
    case 2:
        r = x- y;
        break;
    case 3:
        r = x * y;
        break;
    case 4:
        r = x / y;
        break;

    default:
        break;
    }
    printf("%d\n", r);
    system("pause");
    return 0;
}
