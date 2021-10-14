#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

#include "binary_operations.h"

int divide(int x, int y) {
    return x / y;
}
int multiply(int x, int y) {
    return x * y;
}

struct cylinder_dimensions {
    double radius;
    double height;
};

int cylinder_volume(struct cylinder_dimensions cydim) {
    return (int)(M_PI * cydim.radius*cydim.radius*cydim.height);
}

void binary_operators() {
    printf("1 x*y, 2 x/y\n");
    printf("3 cylinder volume: x height, y radius\n");
    int choice;
    scanf("%d", &choice);
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    int result;
    if (choice == 1) result = multiply(x, y);
    else if (choice == 2) result = divide(x, y);
    else if (choice == 3) {
        struct cylinder_dimensions dim_input;
        dim_input.radius = y;
        dim_input.height = x;
        result = cylinder_volume(dim_input);
    }
    printf("%d\n", result);

}
