//
// Created by macedolg on 27/05/24.
//

#include <stdio.h>

int main(void) {

    int first, second, third;
    double awardValue;

    printf("Enter the value of the award: \n$");
    scanf("%lf", &awardValue);

    first = awardValue * 0.5;
    second = awardValue * 0.3;
    third = awardValue * 0.2;

    printf("The values of the top 3 awards are: \n1st: $%d \n2nd: $%d \n3rd: $%d", first, second, third);

    return 0;
}