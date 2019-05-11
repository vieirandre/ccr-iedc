/*
 * To write a recursive function that returns the sequence of values until the n-th term of the Fibonacci series.
 */

#include <stdio.h>

int fibonacci(int n);

int main(void) {
    int n;
    
    printf("n-th term: ");
    scanf("%d", &n); getchar();

    for (int i = 0; i < n; i++) {
        int nth_term = fibonacci(i);
        printf("%d ", nth_term);
    }
    
    getchar();
    return 0;
}

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}