//
// Created by macedolg on 27/05/24.
//

#include <stdio.h>

int main(void) {

    double examGrade, homeworkGrade;

    printf("Enter the grade of the exam: \n");
    scanf("%lf", &examGrade);

    printf("Enter the grade of the homework: \n");
    scanf("%lf", &homeworkGrade);

    int examWeight = 7;
    int homeworkWeight = 3;

    double examFGrade = examGrade * examWeight;
    double homeworkFGrade = homeworkGrade * homeworkWeight;


    double gradeAverage = (examFGrade + homeworkFGrade) / 10;

    printf("The grade is: \n%.2lf\n", gradeAverage);

    return 0;
}