#define _CRT_SECURE_NO_WARNINGS 
#include "calculator.h"
#include <stdio.h>
#include "function.c"

int main() {
    int choice, num1, num2;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);

            switch (choice) {
            case 1:
                printf("Result: %d\n", add(num1, num2));
                break;
            case 2:
                printf("Result: %d\n", subtract(num1, num2));
                break;
            case 3:
                printf("Result: %d\n", multiply(num1, num2));
                break;
            case 4:
                printf("Result: %f\n", divide(num1, num2));
                break;
            }
        }
        else {
            printf("Invalifchoice. Please try again.\n");
        }
    } while (1);

    return 0;
}