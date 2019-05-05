/* 
 * To write a program that receives two values: the price of the gallon of gasoline 
 * practiced in the US and the conversion rate from dollar ($) to real (R$). 
 * The price of the corresponding liter of gasoline in reais should be displayed.
 */

#include <stdio.h>

int main(void) {
    double priceGallon_US, conversionRate, priceLiter_BR;

    printf("Gallon of gasoline ($): ");
    scanf("%lf", &priceGallon_US); getchar();

    printf("Conversion rate ($ -> R$): ");
    scanf("%lf", &conversionRate); getchar();

    priceLiter_BR = priceGallon_US / 3.7854 * conversionRate;
    
    printf("Equivalent liter of gasoline (R$): %f", priceLiter_BR);
    
    getchar();
    return 0;
}