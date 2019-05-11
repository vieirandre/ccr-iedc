/*
 * To write a function that receives as parameters two whole numbers (n, k) and calculates the 
 * corresponding binomial coefficient [c].
 */

#include <stdio.h>

int coefficient(int n, int k);

int main(void) {
    int n, k;

    printf("Insert n, k: ");
    scanf("%d %d", &n, &k); getchar();

    int c = coefficient(n, k);
    printf("c = %d\n", c);
    
    getchar();
    return 0;
}

int coefficient(int n, int k) {
    if (k == 0) {
        return 1;
    }
    else if (n == 0 && k != 0)
        return 0;
    else {
        return coefficient(n - 1, k) + coefficient(n - 1, k - 1);
    }
}