/*
 * To write recursive versions of the previous functions and test them.
 */

#include <stdio.h>

typedef enum { false, true } bool;

void capture_values(int n, int* vec);
int evens(int n, int* vec);
void reverse(int n, int* vec);
int get_min(int n, int* vec, int min);

int main(void) {
    static int n;

    printf("Insert the desired array length (0 < n <= 100): ");
    scanf("%d", &n); getchar();

    if (n <= 0 || n > 100)
        return 1;

    int vec[n];

    capture_values(n, vec);

    char choice = 0;
    bool isChoiceValid;
    do {
        printf("\n1. Quantity of even numbers\n");
        printf("2. Revert the order\n");
        printf("3. Minimum value\n");
        scanf("%d", &choice); getchar();

        switch (choice) {
            case 1:
                isChoiceValid = true;
                int qt_evens = evens(n, vec);
                printf("\nNumber of evens in the provided array: %d\n", qt_evens);
                break;
            case 2:
                isChoiceValid = true;
                reverse(n, vec);

                printf("\nReversed array:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", vec[i]);
                }

                break;
            case 3:
                isChoiceValid = true;
                int minValue = get_min(n, vec, vec[n-1]);
                printf("\nMinimum value stored: %d\n", minValue);
                break;
            default:
                break;
        }
    } while (!isChoiceValid);

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
    static int count = 0;

    if (n < 1)
        return count;
    else {
        if (vec[n-1] % 2 == 0)
            count++;
    }

    return evens(n-1, vec);
}

void reverse(int n, int* vec) {
    int temp = 0;
    static int c = 0;

    if (c <= n/2) {
        temp = vec[n-1];
        vec[n-1] = vec[c];
        vec[c] = temp;

        c++;
        reverse(n-1, vec);
    }
}

int get_min(int n, int* vec, int min) {
    if (n == 0)
        return min;

    if (vec[n-1] < min)
        min = vec[n-1];

    return get_min(n-1, vec, min);
}