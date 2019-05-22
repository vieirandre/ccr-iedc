/*
 * To write a function that receives an array of real numbers and returns a new array, dynamically allocated, with the 
 * elements of the original array in reverse order.
 */

#include <stdio.h>
#include <stdlib.h>

void capture_values(int n, float* v);
float* reverse(int n, float* v);

int main(void)  {
    int n;

    printf("Insert the array length (1 < n <= 100): ");
    scanf("%d", &n); getchar();

    if (n <= 1 || n > 100)
        return 1;

    float v[n];
    capture_values(n, v);

    float* rev = reverse(n, v);

    printf("\nReverse order:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", rev[i]);
    }

    free(rev);
    
    getchar();
    return 0;
}

void capture_values(int n, float* v) {
    printf("Insert the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]); getchar();
    }
}

float* reverse(int n, float* v) {
    float* rev = (float*) malloc(n*sizeof(float));

    if (rev == NULL) {
        printf("Insufficient memory.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        rev[i] = v[n-i-1];
    }

    return rev;
}