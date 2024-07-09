/**
 * Write a function that verifies if a square matrix of N x N dimension,
 * where [N] represents a symbolic constant, is a lower triangular matrix.
 *
 * In a lower triangular, all the elements above the main diagonal are equal to 0.0.
 * The elements of the diagonal or below it may assume any value.
 *
 * The function must return 1 if the given matrix is lower triangular and 0 otherwise,
 * and must adhere to the following prototype:
 *
 * int lower_triangular (double A [] [N])
 */

#include <stdio.h>

#define N 4

int lower_triangular(double A[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (A[i][j] != 0.0)
                return 0;
        }
    }

    return 1;
}

int main()
{
    double matrix[N][N] = {
        {1.0, 0.0, 0.0, 0.0},
        {2.0, 3.0, 0.0, 0.0},
        {4.0, 5.0, 6.0, 0.0},
        {7.0, 8.0, 9.0, 10.0}};

    if (lower_triangular(matrix))
        printf("The matrix is lower triangular\n");
    else
        printf("The matrix is not lower triangular\n");

    return 0;
}