#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>

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

class CalculatorModule {
public:
    virtual const std::string get_description() = 0;
    virtual void work() = 0;
};

class Adder : public CalculatorModule {
public:
    virtual const std::string get_description();
    virtual void work();

};

const std::string Adder::get_description() {
    return "Add";
}

void Adder::work() {
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("%d + %d = %d\n", x, y, x + y);
}

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
