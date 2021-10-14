
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int divide(int x, int y) {
    return x / y;
}
int multiply(int x, int y) {
    return x * y;
}

void binary_operators() {
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    int choice;
    printf("1*, 2/\n");
    scanf("%d", &choice);
    int result;
    if (choice == 1) result = multiply(x, y);
    else if (choice == 2) result = divide(x, y);
    printf("%d\n", result);

}
void continuous_multiplication() {
    int product, choice = 1;
    for (product = 1; choice != 0; product *= choice != 0 ? choice : 1) {
        printf("Continous input: ");
        scanf("%d", &choice);
    }
    printf("%d\n", product);
}
int main(int argc, char **argv) {
    int choice;
    printf("1*/, 2 cont. multiplication\n");
    scanf("%d", &choice);
    if (choice == 1) binary_operators();
    else if (choice == 2) continuous_multiplication();
    system("pause");
    return 0;
}
