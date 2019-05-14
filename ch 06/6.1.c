/*
 * To write a function — and a program to test it — that receives as parameter an array of integers of size [n] and 
 * returns the quantity of even numbers stored in it.
 */

#include <stdio.h>

void capture_values(int n, int* vec);
int evens(int n, int* vec);

int main(void) {
    int n;

    printf("Insert the desired array length (0 < n <= 100): ");
    scanf("%d", &n); getchar();

    if (n <= 0 || n > 100)
        return 1;

    int vec[n];

    capture_values(n, vec);
    int qt_evens = evens(n, vec);

    printf("\nNumber of evens in the provided array: %d\n", qt_evens);

    getchar();
    return 0;
}

void capture_values(int n, int* vec) {
    printf("Insert the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]); getchar();
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