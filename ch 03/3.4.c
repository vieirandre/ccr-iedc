/* 
 * To write a program that converts polar coordinates (r, a) into Cartesian coordinates (x, y).
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double r, a, x, y;

    printf("Radius: ");
    scanf("%lf", &r); getchar();
    
    printf("Angle: ");
    scanf("%lf", &a); getchar();

    x = r * cos(a);
    y = r * sin(a);

    printf("X-axis: %f\n", x);
    printf("Y-axis: %f\n", y);

    getchar();
    return 0;
}