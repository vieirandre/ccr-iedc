/*
 * To implement a iterative function to calculate the greatest common divisor of two positive integer numbers, 
 * using the the Euclidean algorithm.
 */

#include <stdio.h>

int mdc(int x, int y);

int main(void) {
    int x, y, result;

    printf("Insert x: ");
    scanf("%d", &x); getchar();

    printf("Insert y: ");
    scanf("%d", &y); getchar();

    result = mdc(x, y);

    printf("The greatest common divisor of %d and %d is: %d\n", x, y, result);
    
    getchar();
    return 0;
}

int mdc(int x, int y) {
    int r;

    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }

    return x;
}