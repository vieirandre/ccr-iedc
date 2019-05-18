/*
 * To write a function — and a program to test it — that calculates and returns the harmonic mean of a set of values.
 */

#include <stdio.h>

void capture_values(int n, float* vec);
float harmonic(int n, float *v);

int main(void) {
    int n;

    printf("Insert the desired array length (0 < n <= 100): ");
    scanf("%d", &n); getchar();

    if (n <= 0 || n > 100)
        return 1;

    float vec[n];
    capture_values(n, vec);

    float mean = harmonic(n, vec);

    printf("\nThe harmonic mean is: %.2f\n", mean);
    
    getchar();
    return 0;
}

void capture_values(int n, float* vec) {
    printf("Insert the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &vec[i]); getchar();
    }
}

float harmonic(int n, float *v) {
    float sum = 0;

    for (int i = 0; i < n; i++) {
        sum += 1/v[i];
    }

    return n/sum;
}