/*
 * To write a program, that calculates the volume of a sphere with cylindrical bore.
 */

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double calculate_volume(double r, double h);

int main(void) {
    double radius, height, volume;

    printf("Insert radius (R) and height (h): ");
    scanf("%lf %lf", &radius, &height); getchar();

    volume = calculate_volume(radius, height);

    printf("Volume (V): %.4f\n", volume);
    
    getchar();
    return 0;
}

double calculate_volume(double r, double h) {
    return (double) 1/3 * M_PI * pow(h, 2) * (3 * r - h);
}