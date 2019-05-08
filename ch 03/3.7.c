/*
 * To write a program that implements a game of rock, paper and scissors between user and computer, 
 * assuming that the number 0 represents rock, 1 represents paper and 2 represents scissors.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { false, true } bool;

void game_decider(char userChoice, char computerChoice, bool *userWon) {
    switch (userChoice)
    {
        case 0:
            *userWon = computerChoice == 2 ? true : false;
            break;
        case 1:
            *userWon = computerChoice == 0 ? true : false;
            break;
        case 2:
            *userWon = computerChoice == 1 ? true : false;
            break;
        default:
            break;
    }
}

int main(void) {
    char userChoice, computerChoice;
    bool validChoice, userWon;
    
    do {
        printf("Pick rock (0), paper (1) or scissors (2): ");
        scanf("%d", &userChoice); getchar();
        validChoice = (userChoice == 0 || userChoice == 1 || userChoice == 2) ? true : false;
    } while (validChoice == false);

    do {
        srand(time(NULL));
        computerChoice = rand() % 3;
    } while (userChoice == computerChoice);
    
    printf("Computer's choice: %d\n", computerChoice);

    game_decider(userChoice, computerChoice, &userWon);

    printf("The %s won!\n", userWon ? "user" : "computer");
    
    getchar();
    return 0;
}