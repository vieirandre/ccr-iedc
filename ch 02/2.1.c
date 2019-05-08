/* 
 * To write a program that, given the value of the radius, 
 * calculates and prints the volume of the corresponding sphere. 
 */

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void) {
    double radius, sphereVolume;

    printf("Radius value: ");
    scanf("%lf", &radius); getchar();

    sphereVolume = 4.0 / 3.0 * M_PI * pow(radius, 3);

    printf("%f", sphereVolume);

    getchar();
    return 0;
}