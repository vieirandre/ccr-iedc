/*
 * To implement a function that receives an array of integers (v) and its number of elements (n), in order to verify if the
 * elements of the array match the terms of an arithmetic progression, returning the common difference [k] if true or zero if false.
 */

#include <stdio.h>

void capture_values(int n, int* v);
int test_AP(int n, int* v);

int main(void) {
    int n;

    printf("Insert the array size (3 <= n <= 100): ");
    scanf("%d", &n); getchar();

    if (n < 3 || n > 100)
        return 1;

    int v[n];
    capture_values(n, v);
    
    int isAP = test_AP(n, v);

    if (isAP == 0)
        printf("\nDoesn't match an AP\n");
    else
        printf("\nCommon difference of the AP: %d\n", isAP);
    
    getchar();
    return 0;
}

void capture_values(int n, int* v) {
    printf("Insert the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]); getchar();
    }
}

int test_AP(int n, int* v) {
    int first_term = v[0];
    int count_ap = 0;
    int diff;

    for (int i = 1; i < n; i++) {
        diff = v[i] - v[i-1];

        if (v[i] == v[0] + i * diff)
            count_ap++;
    }

    if (count_ap == n - 1)
        return diff;
    else
        return 0;
}