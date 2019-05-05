/*
 * To write a program that, considering the existence of R$ 100, R$ 50, 
 * R$ 20, R$ 10, R$ 5, R$ 2 and R$ 1 bills, captures a whole amount in 
 * reais and determines the smallest number of bills to obtain the amount 
 * provided. The program should display the number of bills for each of 
 * the existing values.
 */

#include <stdio.h>

int main(void) {
    int amount, bills[7][7] = {{100,0}, {50,0}, {20,0}, {10,0}, {5,0}, {2,0}, {1,0}};

    printf("Amount (R$): ");
    scanf("%d", &amount); getchar();

    for (int i = 0; i < 7; i++) {
        if (amount > 0 && amount % bills[i][0] == 0) {
            bills[i][1]++;
            amount -= bills[i][0];
            i = -1;
        }
    }

    for (int i = 0; i < 7; i++) {
        printf("%d's: %d\n", bills[i][0], bills[i][1]);
    }
    
    getchar();
    return 0;
}