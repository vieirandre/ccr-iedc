/*
 * To write a function — and a program to test it — that calculates and returns the geometric mean of a set of values.
 */

#include <stdio.h>
#include <math.h>

void capture_values(int n, float* vec);
float geometric(int n, float *v);

int main(void) {
    int n;

    printf("Insert the desired array length (0 < n <= 100): ");
    scanf("%d", &n); getchar();

    if (n <= 0 || n > 100)
        return 1;

    float vec[n];
    capture_values(n, vec);

    float mean = geometric(n, vec);

    printf("\nThe geometric mean is: %.4f\n", mean);
    
    getchar();
    return 0;
}

void capture_values(int n, float* vec) {
    printf("Insert the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &vec[i]); getchar();
    }
}

float geometric(int n, float *v) {
    float product = v[0];

    for (int i = 1; i < n; i++) {
        product *= v[i];
    }

    return (float) pow(product, 1.0/n);
}