//
// Created by macedolg on 5/26/24.
//

#include <stdio.h>

int main(void) {
    int number, product;

    printf("Enter a number: \n");
    scanf("%d", &number);

    printf("\nThe multiplication table of %d:\n", number);

    for (int i = 1; i <= 10; i++) {
        product = number * i;
        printf("%d X %d = %d\n", number, i, product);
    }
}