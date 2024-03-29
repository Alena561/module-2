#include "calculator.h"
#include <stdio.h>


void displayMenu() {
    printf("Calculator App\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    }
    else {
        printf("Cannot divide by zero\n");
        return 0;
    }
}