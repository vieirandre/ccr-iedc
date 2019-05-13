/*
 * To write a function — and a program to test it — that receives as parameter an array of integers of size [n] and 
 * returns the quantity of even numbers stored in it.
 */

#include <stdio.h>
#define N 100

void capture_values(int n, int* x);
int evens(int n, int* vec);

int main(void) {
    int n, x[N];

    printf("Insert the desired array length (0 < n <= 100): ");
    scanf("%d", &n); getchar();

    if (n <= 0 || n > 100)
        return 1;

    capture_values(n, x);
    int qt_evens = evens(n, x);

    printf("\nNumber of evens in the provided array: %d\n", qt_evens);

    getchar();
    return 0;
}

void capture_values(int n, int* x) {
    printf("Insert the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]); getchar();
    }
}

int evens(int n, int* vec) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (vec[i] % 2 == 0)
            count++;
    }

    return count;
}