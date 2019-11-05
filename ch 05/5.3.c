/*
 * To write a function that evaluates the n-th term of the Fibonacci series, (1) printing the first [n] terms and 
 * (2) determining whether a given value belongs to the series or not.
 */

#include <stdio.h>
#include <math.h>

typedef enum { false, true } bool;

int fibonacci(int n);
void work_the_option(int op, int n);
bool is_perfect_square(int n);

int main(void) {
    char op = 0;
    int n = 0;

    do {
        printf("1. Print the first [n] terms\n");
        printf("2. Determine if [n] belongs to the series\n");
        scanf("%d", &op); getchar();
    } while (op != 1 && op != 2);

    do {
        printf("\nInsert [n]: ");
        scanf("%d", &n); getchar();
    } while (n < 0);

    work_the_option(op, n);
    
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

void work_the_option(int op, int n) {
    int series[n];
    bool belongs;

    switch (op)
    {
        case 1:
            for (int i = 0; i < n; i++) {
                series[i] = fibonacci(i);
                printf("%d ", series[i]);
            }

            break;
        case 2:
            belongs = is_perfect_square(5 * n * n + 4) || is_perfect_square(5 * n * n - 4);

            if (belongs == true)
                printf("\nThe number %d belongs to the Fibonacci series\n", n);
            else
                printf("\nThe number %d does not belong to the Fibonacci series\n", n);

            break;
        
        default:
            break;
    }
}

bool is_perfect_square(int n) {
    int sq = sqrt(n);

    return (sq * sq == n);
}