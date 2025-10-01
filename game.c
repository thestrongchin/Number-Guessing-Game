#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

#define DEBUG

// global variables
int num = 0;
int guess;

void numGenerate(){

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


void playgame(){    

    for(int attemptsLeft = 5; attemptsLeft >= 1; attemptsLeft--){

        printf("Please guess a number: ");

        // check for invalid character
        if(scanf("%d", &guess) != 1){

            printf("Invalid character input! Please try again! \n");

            while (getchar() != '\n'); 

            printf("You have %d attempts left \n \n", attemptsLeft);

            attemptsLeft++;

            continue;
        }

        // over 100 or under 1 detection
        if(guess > 100 || guess < 1){
            printf("Invalid range input! Please try again! \n");

            printf("You have %d attempts left \n", attemptsLeft);

            attemptsLeft++;
        
            continue;
        }

        // too low detection
        if(guess < num){
            printf("Guess too low! \n");
            printf("You have %d attempts left: \n \n", attemptsLeft - 1);
        }

        // too high detection
        if(guess > num){
            printf("Guess too high! \n");
            printf("You have %d attempts left: \n \n", attemptsLeft - 1);
        } 

        // ran out of attempts
        if(attemptsLeft <= 0){
            printf("You have run out of attempts!\n");
            printf("The correct number was: %d \n", num);

            break;

        }

        // correct number guessed within 5 attempts 
        if(guess == num){
            printf("Congratulations! You have guessed the correct number!\n");
            int UsedAttempts = 6 - attemptsLeft;
            printf("You used %d attempts! \n \n", UsedAttempts);

            break;

        }


    }
}