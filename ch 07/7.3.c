/*
 * Write functions in C to deal with lower triangular matrices of dimension n x n,
 * where all elements below the diagonal are equal to zero and must not be allocated.
 * However, an access to an element below the diagonal must return the value zero.
 *
 * Write the following functions, using the array of pointers strategy to store the matrix.
 *
 * (a) Function to create a matrix, where n represents the dimension of the matrix, initially with all values equal to zero
 * (b) Function to assign the value of a matrix element, assuming that i >= j
 * (c) Function to access the value of a matrix element, including elements above the diagonal
 * (d) Function to release allocated matrix memory
 *
 * Write a main function to test the implemented functions.
 */

#include <stdio.h>
#include <stdlib.h>

float **ti_create(int n)
{
  float **mat = (float **)malloc(n * sizeof(float *));

  int i;
  for (i = 0; i < n; i++)
  {
    mat[i] = (float *)malloc((i + 1) * sizeof(float));
  }

  return mat;
}

void ti_attribute(float **mat, int i, int j, float x)
{
  if (i >= j)
    mat[i][j] = x;
}

float ti_access(float **mat, int i, int j)
{
  if (i < j)
    return 0.0;

  return mat[i][j];
}

void ti_liberate(int n, float **mat)
{
  int i;
  for (i = 0; i < n; i++)
  {
    free(mat[i]);
  }

  free(mat);
}

int main()
{
  int n = 4;
  float **mat = ti_create(n);
  ti_attribute(mat, 0, 0, 1.0);
  ti_attribute(mat, 1, 1, 2.0);
  ti_attribute(mat, 2, 2, 3.0);
  ti_attribute(mat, 3, 3, 4.0);
  printf("mat[2][0]: %f\n", ti_access(mat, 2, 0));
  printf("mat[2][2]: %f\n", ti_access(mat, 2, 2));
  ti_liberate(n, mat);
  return 0;
}
