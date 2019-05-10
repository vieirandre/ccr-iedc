/*
 * To write a program that calculates the roots of a quadratic equation
 */

#include <stdio.h>
#include <math.h>

int roots(double a, double b, double c, double* px1, double* px2);

int main(void) {
    double a, b, c, x1, x2;
    int n_roots;

    printf("Insert the coefficients (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c); getchar();

    n_roots = roots(a, b, c, &x1, &x2);

    switch (n_roots)
    {
        case 1:
            printf("x = %f\n", x1);
            break;
        case 2:
            printf("x' = %f\n", x1);
            printf("x'' = %f\n", x2);
            break;    
        default:
            printf("No roots\n");
            break;
    }
    
    getchar();
    return 0;
}

int roots(double a, double b, double c, double* px1, double* px2) {
    int n = 0;

    if (a == 0.0) {
        double x = -c / b;
        *px1 = x;
        n = 1;
    }
    else {
        double delta = pow(b, 2) - 4 * a * c;

        if (delta > 0) {
            delta = sqrt(delta);
            double x1 = (-b + delta) / (2 * a);
            double x2 = (-b - delta) / (2 * a);
            *px1 = x1;
            *px2 = x2;
            n = 2;
        }
        else if (delta == 0.0) {
            double x = -b / (2 * a);
            *px1 = x;
            n = 1;
        }
    }

    return n;
}