#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiply(int x, int y) {
    return x * y;
}
int main(int argc, char **argv) {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int result = multiply(x,y);
    printf("%d\n", result); 
    system("pause");
    return 0;
}