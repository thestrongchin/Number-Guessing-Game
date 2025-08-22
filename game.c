#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

// global variables
int num = 0;
int guess;
int AttemptsLeft;


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

void mainGame(){


    for(AttemptsLeft = 5; AttemptsLeft >= 0; AttemptsLeft--){ // Assigns 5 value to attempts, attempts must be over 0, and attempts's value will decrease by 1 each time. Keeps looping until condition is not met.

        void errorDetect(){

        }

    }

}