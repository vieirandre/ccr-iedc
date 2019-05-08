/* 
 * To write a program that receives three numbers as input and prints them in ascending order.
 */

#include <stdio.h>

int main(void) {
    int values[] = {0, 0, 0}, temp;

    for (int i = 0; i < 3; i++) {
        printf("Input a whole number: ");
        scanf("%d", &values[i]); getchar();
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (values[i] > values[j]) {
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d\n", values[i]);
    }
    
    getchar();
    return 0;
}