#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DEBUG
#define MAX_ATTEMPTS = 10;

int num = 0;

int generate_random_number(){

}

int get_user_guess(int guess){
    while(1){
    int attempts = MAX_ATTEMPTS;

    if(guess >= 1){

        if(guess < num){
            printf("Too low!");
            printf("Guesses remaining: %d \n", MAX_ATTEMPTS);
        }
    }

        if(guess > num){
            printf("Too high!");
            printf("Guesses remaining: %d \n", MAX_ATTEMPTS);
        }

        if 

        if(guess <= 0){
            printf("invalid guess, please try again.");
            printf("Guesses remaining: %d \n", MAX_ATTEMPTS);
        }

    }
}