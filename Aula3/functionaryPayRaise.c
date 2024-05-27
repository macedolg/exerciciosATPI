//
// Created by macedolg on 5/26/24.
//

#include <stdio.h>

int main(void) {

    double salary, Increase, finalSalary;

    printf("Insert your Initial Salary: \n $");
    scanf("%lf", &salary);

    Increase = 0.25;

    double salaryIncrease = salary * Increase;

    finalSalary = salary + salaryIncrease;

    int percentualIncrease = Increase * 100;

    printf("After increasing %d%%, your salary is $ %.2lf", percentualIncrease, finalSalary);
    return 0;

}