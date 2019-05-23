/*
 * To write a function that receives an array of integers and returns a new array, dynamically allocated, with
 * only the even elements of the original array.
 */

#include <stdio.h>
#include <stdlib.h>

void capture_values(int n, int* v);
int* only_evens(int n, int* v, int* n_evens);

int main(void) {
    int n, n_evens;

    printf("Insert the array length (1 < n <= 100): ");
    scanf("%d", &n); getchar();

    if (n <= 1 || n > 100)
        return 1;

    int v[n];
    capture_values(n, v);
    
    int* result = only_evens(n, v, &n_evens);

    if (n_evens > 0) {
        printf("\nEvens:\n");
        for (int i = 0; i < n_evens; i++) {
            printf("%d\n", result[i]);
        }
    }
    else
        printf("\nThere are no evens in the provided array.\n");

    free(result);
    
    getchar();
    return 0;
}

void capture_values(int n, int* v) {
    printf("Insert the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]); getchar();
    }
}

int* only_evens(int n, int* v, int* n_evens) {
    int count = 0;
    int* evens = (int*) malloc(count*sizeof(int));

    if (evens == NULL) {
        printf("Insufficient memory.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            evens[count] = v[i];
            count++;
        }
    }

    *n_evens = count;
    return evens;
}