//
// Created by macedolg on 5/26/2024.
//
#include <stdio.h>
#include <math.h>

int main(void) {
    double grade1, grade2, grade3, grade4, average;
    int rounded_average;

    printf("Enter the 1º grade: \n");
    scanf("%lf", &grade1);

    printf("Enter the 2º grade: \n");
    scanf("%lf", &grade2);

    printf("Enter the 3º grade: \n");
    scanf("%lf", &grade3);

    printf("Enter the 4º grade: \n");
    scanf("%lf", &grade4);

    average = (grade1 + grade2 + grade3 + grade4) / 4.0;
    rounded_average = round(average);

    printf("The arithmetic mean (rounded) of the grades is: %d\n", rounded_average);

    return 0;
}