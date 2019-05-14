/*
 * To write a function — and a program to test it — that receives as parameter an array of integers of size [n] and 
 * reverses the order of its elements.
 */

#include <stdio.h>
#define N 100

void capture_values(int n, int* vec);
void reverse(int n, int* vec);

int main(void) {
    int n, vec[N];

    printf("Insert the desired array length (0 < n <= 100): ");
    scanf("%d", &n); getchar();

    if (n <= 0 || n > 100)
        return 1;

    capture_values(n, vec);
    reverse(n, vec);

    printf("\nReversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vec[i]);
    }

    getchar();
    return 0;
}

void capture_values(int n, int* vec) {
    printf("Insert the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]); getchar();
    }
}

void reverse(int n, int* vec) {
    int temp = 0;

    for (int i = 0; i < n/2; i++) {
        temp = vec[i];
        vec[i] = vec[n-i-1];
        vec[n-i-1] = temp;
    }
}