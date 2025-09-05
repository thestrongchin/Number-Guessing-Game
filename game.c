#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

// global variables
int num = 0;
int guess;
int attemptsLeft = 5;
int UsedAttempts = 0;

void numGenerate(){

    srand(time(0)); // This creates a seed for the number generator
    num = rand() % 100 + 1; // This generates a random number between 1 and 100 and assigns it to variable "num"
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


void playgame(){    

    int UsedAttempts = 0;
    int attemptsLeft = 5;

    for(attemptsLeft = 5; attemptsLeft >= 0; attemptsLeft--){

        
        printf("Please guess a number: ");
        if(scanf("%d", &guess) != 1){

            printf("Invalid input! Please try again! \n");

            while (getchar() != '\n');

            printf("You have %d attempts left \n \n", attemptsLeft);
            attemptsLeft++;

            continue;
        }

        if(guess > 100){
            printf("Invalid input! Please try again! \n");

            printf("You have %d attempts left \n", attemptsLeft);

            attemptsLeft++;
            continue;
        }

        if(guess >= 1 && guess < num){
            printf("Guess too low! \n");
            printf("You have %d attempts left: \n \n", attemptsLeft);

            UsedAttempts++; // Adds 1 to 'UsedAttempts' each time user guesses

            continue;
        }

        if(guess >= 1 && guess > num){
            printf("Guess too high! \n");
            printf("You have %d attempts left: \n \n", attemptsLeft);

            UsedAttempts++;

            continue;
        } 

        if(guess == num){
            printf("Congratulations! You have guessed the correct number!\n");
            UsedAttempts++;
            printf("You used %d attempts! \n \n", UsedAttempts);

            break;

        }

        if(attemptsLeft == 0 || UsedAttempts == 5){
            printf("You have run out of attempts!\n");
            printf("The correct number was: %d \n", num);

            break;

        }else{
            printf("Invalid input! please try again! \n");

            printf("You have %d attempts left! \n", attemptsLeft);

            attemptsLeft++;

            continue;
        }
    }
}