//
// Created by macedolg on 27/05/24.
//

#include <stdio.h>

int main(void) {

    float watts, dailyUse, priceKWH;

    printf("Enter the power consumption of an electrical appliance in Watts(W) \nW ");
    scanf("%f", &watts);

    printf("Enter the hours per day that you use the electrial appliance \n");
    scanf("%f", &dailyUse);

    printf("Enter the price of KWh in your city region \nR$ ");
    scanf("%f", &priceKWH);

    float consumptionDay = (watts * dailyUse) / 1000;

    float spendAmountDay = consumptionDay * priceKWH;

    float consumptionMonth = consumptionDay * 30;

    float spendAmountMonth = consumptionMonth * priceKWH;

    float consumptionYear = consumptionDay * 365;

    float spendAmountYear = consumptionYear * priceKWH;

     float wattsDay = dailyUse * watts;
     float wattsMonth = wattsDay * 30;
     float wattsYear = wattsDay * 365;

     printf("Cost in Watts = %.1f \n", wattsDay);
    printf("The power consumption of your electrical appliance in %.2f hours/day will consume %f KWh daily. \n", dailyUse, consumptionDay);
    printf("Consuming energy %.2f hours/day will give you a cost of R$ %.2f per day. \n", dailyUse, spendAmountDay);
     printf("Cost in Watts = %.1f \n", wattsMonth);
    printf("The power consumption of your electrical appliance in %.2f hours/day will consume %f KWh monthly. \n", dailyUse, consumptionMonth);
    printf("Consuming energy %.2f hours/day will give you a cost of R$ %.2f per month. \n", dailyUse, spendAmountMonth);
     printf("Cost in Watts = %.1f \n", wattsYear);
    printf("The power consumption of your electrical appliance in %.2f hours/day will consume %f KWh yearly. \n", dailyUse, consumptionYear);
    printf("Consuming energy %.2f hours/day will give you a cost of R$ %.2f per year. \n", dailyUse, spendAmountYear);

    return 0;
}