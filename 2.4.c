/* 
 * To write a program that converts a given angle value into radians to 
 * the corresponding value expressed in degrees, minutes and seconds. 
 */

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void) {
    double radians, degrees, minutes, seconds;

    printf("Angle value (radians): ");
    scanf("%lf", &radians); getchar();

    degrees = radians * 180 / M_PI;
    minutes = modf(degrees, &degrees) * 60;
    seconds = modf(minutes, &minutes) * 60;

    printf("[d]%d [m]%d [s]%d", (int)degrees, (int)minutes, (int)seconds);
    
    getchar();
    return 0;
}