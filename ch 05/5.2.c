/* 
 * To write a function that determines if a given number is prime or not, printing 
 * (a) all prime numbers smaller than [n] and (b) the first [n] prime numbers.
 */

#include <stdio.h>
#include <math.h>

typedef enum { false, true } bool;

bool prime(int x);

int main(void) {
    char op = 0;
    int n = 0;

    do {
        printf("1. All prime numbers smaller than [n]\n");
        printf("2. First [n] prime numbers\n");
        scanf("%d", &op); getchar();
    } while (op != 1 && op != 2);

    do {
        printf("Insert [n]: ");
        scanf("%d", &n); getchar();
    } while (n < 1);

    int primes[n];
    int i, cont = 0;
    int* lim;

    if (op == 1) lim = &i;
    else lim = &cont;

    for (; *lim < n; i++) {
        if (prime(i) == true) {
            primes[cont] = i;
            cont++;
        }
    }
    
    for (int i = 0; i < cont; i++) {
        printf("%d ", primes[i]);
    }

    getchar();
    return 0;
}

bool prime(int x) {
    if (x == 2)
        return true;
    else if (x < 2 || (x % 2) == 0)
        return false;
    else {
        int lim = (int) sqrt(x);
        for (int i = 3; i <= lim; i += 2) {
            if (x % i == 0)
                return false;
        }
        return true;
    }
}