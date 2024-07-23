/**
 * Write a function that verifies if a square matrix of [N] x [N] dimension,
 * where [N] represents a symbolic constant, is a identity matrix.
 *
 * In a identity matrix, the elements of the main diagonal are equal to 1.0,
 * and the other are equal to 0.0.
 *
 * The function must return 1 if the given matrix is an identity matrix
 * and 0 on the contrary, and must follow the prototype below:
 *
 * int identity (double A[][N])
 */

#include <stdio.h>

#define N 3

int identity(double A[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                if (A[i][j] != 1.0)
                    return 0;
            }
            else
            {
                if (A[i][j] != 0.0)
                    return 0;
            }
        }
    }

    return 1;
}

int main()
{
    double matrix[N][N] = {
        {1.0, 0.0, 0.0},
        {0.0, 1.0, 0.0},
        {0.0, 0.0, 1.0}};

    if (identity(matrix))
        printf("It's an identity matrix\n");
    else
        printf("It's not an identity matrix\n");

    return 0;
}
