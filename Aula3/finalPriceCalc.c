//
// Created by macedolg on 5/26/24.
//

#include <stdio.h>

int main(void) {
    double initialPrice, discountRate, discountAmount, finalPrice;

    printf("Enter the initial price of the product in $: \n");
    scanf("%lf", &initialPrice);

    discountRate = 0.12;

    discountAmount = initialPrice * discountRate;

    finalPrice = initialPrice - discountAmount;

    printf("\nThe final price of the product: $%.2lf\n", finalPrice);

    return 0;
}