/**
 * Write a function that, given two square matrices, [A] and [B],
 * verify if [B] is the inverse of [A], i.e., if [B] is equal to [A]^-1.
 * If [B] is the inverse, the multiplication of [A] by [B] results in an identity matrix.
 *
 * The function must return 1 if [B] is the inverse of [A], or 0 otherwise,
 * and must follow the prototype below:
 *
 * int inverse (double A[][N], double B[][N]);
 */

#include <stdio.h>
#define N 3

int inverse(double A[][N], double B[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            double sum = 0;

            for (int k = 0; k < N; k++)
            {
                sum += A[i][k] * B[k][j];
            }

            if ((i == j && sum != 1.0) || (i != j && sum != 0.0))
                return 0;
        }
    }
    return 1;
}

int main()
{
    double A[N][N] = {{2, 0, 0}, {0, 2, 0}, {0, 0, 2}};
    double B[N][N] = {{0.5, 0, 0}, {0, 0.5, 0}, {0, 0, 0.5}};

    printf("B is %sinverse of A\n", inverse(A, B) ? "" : "not ");

    return 0;
}
