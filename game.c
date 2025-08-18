#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DEBUG
#define ATTEMPTS 5

int num = 0;
int guess; 
int UsedAttempts;
int AttemptsLeft = ATTEMPTS;
char selection = 'y';

void NumberGenerate(){

    srand(time(0));
    num = rand() % 100 + 1;
}

void debug(){
    #ifdef DEBUG

        printf("[DEBUG] mode has been activated! \n \n");
        printf("[DEBUG]: The generated number is: [ %d ] \n", num);

    #endif
}
 
void greeting(){
    printf("=============================================== \n");
    printf("      Welcome to the number guessing game! \n");
    printf("===============================================\n \n");
    printf("You have 5 attempts, use them wisely! \n");
}

void guessing(){

    for(AttemptsLeft = 5; AttemptsLeft >= 0; AttemptsLeft--){ // Assigns 5 value to attempts, attempts must be over 0, and attempts's value will decrease by 1 each time. Keeps looping until condition is not met.

        printf("Please guess a number: ");
        scanf("%d", &guess);

        if(scanf("%d", &guess) != 1){
            printf("Invalid input! Please try again! \n");
            printf("You have %d attempts left \n \n", ATTEMPTS);

            while (getchar() != '\n');
            continue;
        }

        if(guess > 100){
            printf("Invalid input! Please try again! \n");
            printf("You have %d attempts left \n", ATTEMPTS);
        }

        if(guess >= 1 && guess < num){
            printf("Guess too low! \n");
            printf("You have %d attempts left: \n \n", ATTEMPTS);

            UsedAttempts++; // Adds 1 to 'TotalAttempts' each time user guesses
            continue;
        }

        if(guess >= 1 && guess > num){
            printf("Guess too high! \n");
            printf("You have %d attempts left: \n \n", ATTEMPTS);

            UsedAttempts++;
            continue;
        } 

        if(guess == num){

            printf("Congratulations! You have guessed the correct number!\n");
            UsedAttempts++;
            printf("You used %d attempts! \n \n", UsedAttempts);

            break;
        }

        if(ATTEMPTS == 0 || UsedAttempts == 5){
            printf("You have run out of attempts!\n");
            printf("The correct number was: %d \n", num);
            break;

        }else{
            printf("Invalid input! please try again! \n");
            AttemptsLeft++;
            printf("You have %d attempts left! \n", ATTEMPTS);
            continue;
        }
    }
}

void selection(){

    printf("Would you like to play again? \n");
    printf("Please enter a selection: \n");
    printf("Yes = 'y' or 'Y', No = 'n' or 'N' \n \n");
    printf("Please make your selection now: ");

    scanf(" %c", &selection);

    if(selection == 'y' || selection == 'Y'){
        printf("Game is restarting, please wait... \n");
        printf("\n \n \n \n \n \n \n \n \n \n \n \n \n");
             
    }

    if(selection == 'n' || selection == 'N'){
        printf("Thank you for playing the number guessing game! Please come again soon! \n \n");

    }else{
        printf("Invalid input! Game is ending");
    }
}

