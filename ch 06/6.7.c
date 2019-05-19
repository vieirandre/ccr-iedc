/*
 * To write a function — and a program to test it — that calculates the weighted mean of a set of values.
 * It shall receive, as parameters, the vectors of weights and values, returning the mean.
 */

#include <stdio.h>

void capture_values(int n, float* vec, char *what);
float weighted(int n, float *v, float *w);

int main(void) {
    int n;

    printf("Insert the desired arrays length (0 < n <= 100): ");
    scanf("%d", &n); getchar();

    if (n <= 0 || n > 100)
        return 1;

    float v[n];
    capture_values(n, v, "values");
    float w[n];
    capture_values(n, w, "weights");

    float mean = weighted(n, v, w);

    printf("\nThe weighted mean is %.2f\n", mean);

    getchar();
    return 0;
}

void capture_values(int n, float* vec, char *what) {
    printf("Insert the %s:\n", what);
    for (int i = 0; i < n; i++) {
        scanf("%f", &vec[i]); getchar();
    }
}

float weighted(int n, float *v, float *w) {
    float sum_vw = 0;
    float sum_w = 0;

    for (int i = 0; i < n; i++) {
        sum_vw += v[i] * w[i];
        sum_w += w[i];
    }

    return sum_vw / sum_w;
}