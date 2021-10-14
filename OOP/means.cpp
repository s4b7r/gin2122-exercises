#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

void mean();
void mean_restrictedcount();
void mean_unrestricted();
double get_min(double x, double y);
double get_max(double x, double y);

void means() {
    int choice;
    printf("1 mean\n");
    printf("2 restricted num of numbers\n");
    printf("3 unrestircted num of numbers\n");
    scanf("%d", &choice);
    if (choice == 1) mean();
    else if (choice == 2) mean_restrictedcount();
    else if (choice == 3) mean_unrestricted();
}

void mean() {
    int numbers[5];
    int sum = 0;
    double input;
    double min = DBL_MAX, max = DBL_MIN;
    for (int i = 0; i < 5; i++) {
        printf("num %d: ", i);
        scanf("%lf", &input);
        numbers[i] = input;
        sum += numbers[i];
        min = get_min(min, input);
        max = get_max(max, input);
    }
    printf("mean: int %d, float %f\n", sum / 5, (double)sum / 5);
    printf("min %f\n", min);
    printf("max %f\n", max);
}
void mean_restrictedcount() {
    int num;
    int numbers[100];
    int sum = 0;
    double input;
    double min = DBL_MAX, max = DBL_MIN;
    printf("how many numbers: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("num %d: ", i);
        scanf("%lf", &input);
        numbers[i] = input;
    }

    for (int i = 0; i < num; i++) {
        sum += numbers[i];
        min = get_min(min, numbers[i]);
        max = get_max(max, numbers[i]);
    }

    printf("mean: int %d, float %f\n", sum / num, (double)sum / num);
    printf("min %f\n", min);
    printf("max %f\n", max);
}
void mean_unrestricted() {
    int num;
    int sum = 0;
    double input;
    double min = DBL_MAX, max = DBL_MIN;
    printf("how many numbers: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("num %d: ", i);
        scanf("%lf", &input);
        sum += input;
        min = get_min(min, input);
        max = get_max(max, input);
    }

    printf("mean: int %d, float %f\n", sum / num, (double)sum / num);
    printf("min %f\n", min);
    printf("max %f\n", max);
}

double get_max(double x, double y) {
    return x > y ? x : y;
}
double get_min(double x, double y) {
    return x < y ? x : y;
}
