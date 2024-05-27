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

    printf("At %.2f hours/day of use, your %.2f W appliance will consume:\n", dailyUse, watts);
    printf("  - %.2f kWh daily\n", consumptionDay);
    printf("  - Costing R$ %.2f per day\n", spendAmountDay);
    printf("  - %.2f kWh monthly\n", consumptionMonth);
    printf("  - Costing R$ %.2f per month\n", spendAmountMonth);
    printf("  - %.2f kWh yearly\n", consumptionYear);
    printf("  - Costing R$ %.2f per year\n", spendAmountYear);
    printf("  - Watts used daily: %.2f W\n", wattsDay);
    printf("  - Watts used monthly: %.2f W\n", wattsMonth);
    printf("  - Watts used yearly: %.2f W\n", wattsYear);

    return 0;
}