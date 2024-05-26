//
// Created by lgm61 on 5/25/2024.
//

#include <stdio.h>

int main(void) {
    int num1, num2, num3, sum; // Variables declaration
    printf("Insert the 1º number: \n"); // User insert first number
    scanf("%d", &num1);

    printf("Insert the 2º number: \n"); // User insert second number
    scanf("%d", &num2);

    printf("Insert the 3º number: \n"); // User insert third number
    scanf("%d", &num3);

    sum = num1 + num2 + num3;

    printf("\nThe sum of the numbers is: %d\n", sum);
    return 0;
}
