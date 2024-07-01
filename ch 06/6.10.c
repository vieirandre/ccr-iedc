/**
 * Consider 'histograms' as being the number of occurrences of values in different intervals.
 * Also consider a lab experiment in which [n] measurements were sampled, all of them greater than or equal to 0 and lesser than 1.
 *
 * Write a function to fulfill an array with 10 elements that represent the 'histogram' of these measurements.
 *
 * The first array element shall store the number of measurements greater than or equal to 0 and lesser than 0.1;
 * the second element shall store the number of measurements greater than or equal to 0.1 and lesser than 0.2, and so forth.
 *
 * The function shall receive the array, [v], with the [n] measurements of the experiment e shall fulfill the [h] array which,
 * knowingly, has a dimension equal to 10. For instance, if the following array is provided as input:
 *
 * v = {0.11, 0.2, 0.03, 0.56, 0.323, 0.345, 0.234, 0.56, 0.6546, 0.123, 0.123, 0.999}
 *
 * the function shall fulfill the [h] array as:
 *
 * h = {1, 3, 2, 2, 0, 2, 1, 0, 0, 1}
 *
 * The function shall follow the prototype:
 *
 * void histogram (int n, float *v, int, *h)
 */

#include <stdio.h>

void histogram(int n, float *v, int *h)
{
    for (int i = 0; i < 10; i++)
    {
        h[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= 0.0 && v[i] < 1.0)
        {
            int idx = (int)(v[i] * 10);
            h[idx]++;
        }
    }
}

int main()
{
    float v[] = {0.11, 0.2, 0.03, 0.56, 0.323, 0.345, 0.234, 0.56, 0.6546, 0.123, 0.123, 0.999};
    int n = sizeof(v) / sizeof(v[0]);
    int h[10];

    histogram(n, v, h);

    for (int i = 0; i < 10; i++)
    {
        printf("h[%d] = %d\n", i, h[i]);
    }

    return 0;
}