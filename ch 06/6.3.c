/*
 * To write a function — and a program to test it — that returns the minimum value stored in an array.
 */

#include <stdio.h>

void capture_values(int n, int* vec);
int get_min(int n, int* vec);

int main(void) {
    int n;

    printf("Insert the desired array length (0 < n <= 100): ");
    scanf("%d", &n); getchar();

    if (n <= 0 || n > 100)
        return 1;

    int vec[n];

    capture_values(n, vec);
    int minValue = get_min(n, vec);

    printf("\nMinimum value stored: %d\n", minValue);

    getchar();
    return 0;
}

void capture_values(int n, int* vec) {
    printf("Insert the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]); getchar();
    }
}

int get_min(int n, int* vec) {
    int min = vec[0];

    for (int i = 1; i < n; i++) {
        if (vec[i] < min)
            min = vec[i];
    }

    return min;
}