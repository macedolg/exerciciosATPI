//
// Created by macedolg on 27/05/24.
//

#include <stdio.h>

int main(void) {
    double grade, grade1;
    double gradeWeight , grade1Weight;
    printf("Enter the first grade: \n");
    scanf("%lf", &grade);

    printf("Enter the weight of the first grade: \n");
    scanf("%lf", &gradeWeight);

    printf("Enter the second grade: \n");
    scanf("%lf", &grade1);

    printf("Enter the weight of the second grade: \n");
    scanf("%lf", &grade1Weight);

    double weightedGrade = grade * gradeWeight;
    double weightedGrade1 = grade1 * grade1Weight;


    double gradeAverage = (weightedGrade + weightedGrade1) / 10;
    if (gradeWeight + grade1Weight <= 10){
        printf("The grade is: \n%.2lf\n", gradeAverage);
    }

    return 0;
}