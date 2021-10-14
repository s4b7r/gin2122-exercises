#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>

#include "binary_operations.h"
#include "continuous.h"
#include "means.h"
#include "CalculatorModule.h"
#include "Adder.h"
#include "misc_operations.h"

int main(int argc, char **argv) {
    CalculatorModule *modules[] = {
       &Adder()
    };
    int num_modules = 1;

    int choice;
    printf("1 binary operations\n");
    printf("2 cont.multiplication\n");
    printf("3 mean\n");
    printf("4 sin\n");
    printf("5 add given num of numbers\n");
    printf("6 *4 w/o +-*/\n");
    printf("7 cont. addition\n");
    for (int i = 0; i < num_modules; i++) {
        std::cout << i + 8 << " " << modules[i]->get_description() << "\n";
    }
    scanf("%d", &choice);
    if (choice == 1) binary_operators();
    else if (choice == 2) continuous_multiplication();
    else if (choice == 3) means();
    else if (choice == 4) give_sinus();
    else if (choice == 5) add_num_of_numbers();
    else if (choice == 6) multiply_by_bitshift();
    else if (choice == 7) continuous_addition();
    for (int i = 0; i < num_modules; i++) {
        if (choice == i+8) modules[i]->work();
    }
    system("pause");
    return 0;
}
