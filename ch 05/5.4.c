/*
 * To write a function that calculates the square root of a number given a certain tolerance.
 */

#include <stdio.h>
#include <math.h>

float evaluate(float n, float t);

int main(void) {
    float n, t = 0;

    printf("Insert a number to calculate its square root: ");
    scanf("%f", &n); getchar();

    printf("Insert a tolerance value: ");
    scanf("%f", &t); getchar();

    float sqrt = evaluate(n, t);

    printf("\nThe square root of %.2f, considering a %.2f tolerance, is %.2f", n, t, sqrt);

    getchar();
    return 0;
}

float evaluate(float n, float t) {
    float x = 1;

    do {
        x = (x + n / x) / 2;
    } while (fabs(x * x - n) >= t);

    return x;
}