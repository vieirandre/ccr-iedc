/*
 * To write recursive power function, considering the exponent to be a positive integer value (χκ, κ > 0).
 * 
 * The result shall be compared to the value returned by the [pow] function, from the math.h library.
 */

#include <stdio.h>
#include <math.h>

double pot(double x, int k);

int main(void) {
    double x, result;
    int k;

    do {
        printf("Insert a whole number and its exponent (x, k): ");
        scanf("%lf %d", &x, &k); getchar();

        if (!(k > 0))
            printf("The exponent (k) must be greater than zero.\n");

    } while (k <= 0);
    
    result = pot(x, k);

    printf("%.2f ^ %d = %.2f\n", x, k, result);
    printf("[from pow] = %.2f\n", pow(x, k));
    
    getchar();
    return 0;
}

double pot(double x, int k) {
    if (k == 0)
        return 1;
    else {
        return x * pot(x, k - 1);
    }
}