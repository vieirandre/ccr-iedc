/* 
 * To write a program that receives three numbers as input and prints the biggest one.
 */

#include <stdio.h>

int main(void) {
    int values[] = {0, 0, 0}, biggest;

    for (int i = 0; i < 3; i++) {
        printf("Input a whole number: ");
        scanf("%d", &values[i]); getchar();
    }

    biggest = values[0];

    for (int i = 0; i < 3; i++) {
        biggest = biggest >= values[i] ? biggest : values[i];
    }

    printf("Biggest number provided: %d", biggest);
    
    getchar();
    return 0;
}
