//
// Created by macedolg on 27/05/24.
//

#include <stdio.h>

int main(void) {

    double BRL, dollarExchange;

    printf("Enter the value of BRL that you want to convert: \nR$");
    scanf("%lf", &BRL);

    printf("Enter the current exchange rate: \n$");
    scanf("%lf", &dollarExchange);

    double USD = BRL * dollarExchange;

    printf("\nBased on the current exchange rate, coverting R$%.2lf to US dollars results in $%.2lf.\n ", BRL, USD);

    return 0;
}