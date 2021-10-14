#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "binary_operations.h"
#include "continuous.h"
#include "means.h"

void give_sinus() {
    double param;
    printf("param of sin: ");
    scanf("%lf", &param);
    printf("%f\n", sin(param));
}

void add_num_of_numbers() {
    int num;
    double input, sum = 0;
    printf("how many numbers: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%lf", &input);
        sum += input;

    }
    printf("sum %f\n", sum);
}

void multiply_by_bitshift() {
    int input;
    printf("number: ");
    scanf("%d", &input);
    printf("%d * 4 = %d\n", input, input << 2);
}
int main(int argc, char **argv) {
    int choice;
    printf("1 binary operations\n");
    printf("2 cont.multiplication\n");
    printf("3 mean\n");
    printf("4 sin\n");
    printf("5 add given num of numbers\n");
    printf("6 *4 w/o +-*/\n");
    printf("7 cont. addition\n");
    scanf("%d", &choice);
    if (choice == 1) binary_operators();
    else if (choice == 2) continuous_multiplication();
    else if (choice == 3) means();
    else if (choice == 4) give_sinus();
    else if (choice == 5) add_num_of_numbers();
    else if (choice == 6) multiply_by_bitshift();
    else if (choice == 7) continuous_addition();
    system("pause");
    return 0;
}
