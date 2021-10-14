#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char **argv) {
    int count=0, choice=1;
    for(count=-1;choice!=0;count++) {
        scanf("%d", &choice);
    }
    printf("%d\n", count);
    system("pause");
    return 0;
}
