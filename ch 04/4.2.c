/*
 * To write a program that captures three numbers and returns their greatest common divisor.
 */

#include <stdio.h>

int mdc(int x, int y);

int main(void) {
    int x, y, z;

    printf("Insert three whole numbers: ");
    scanf("%d %d %d", &x, &y, &z); getchar();

    printf("Their MDC is: %d\n", mdc(mdc(x, y), z));

    getchar();
    return 0;
}

int mdc(int x, int y) {
    int r = x % y;

    if (r == 0)
        return y;
    else
        return mdc(y, r);
}