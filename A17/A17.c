#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char **argv) {
    int product, choice = 1;
    for (product = 1; choice != 0; product*=choice!=0?choice:1) {
        scanf("%d", &choice);
    }
    printf("%d\n", product);
    system("pause");
    return 0;
}
