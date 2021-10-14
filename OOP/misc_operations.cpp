#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>
#include <math.h>

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