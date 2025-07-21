#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DEBUG
#define MAX_ATTEMPTS 10

int generateNum = 0; // Global Variable
int guess;
int attempts;

int main(){
    srand(time(0));
    generateNum = rand() % 100 + 1;

    printf("===========================================================");
    printf("            Welcome to the number guessing game!             ");
    printf("===========================================================")

    while(0){
    int attempts = MAX_ATTEMPTS;

    if(guesses >= generateNum){

        if(guesses < generateNum){
            printf("Too low!");
            printf("Guesses remaining: %d \n", attempts);
            guesses--;
        }
    }

        if(guesses > generateNum){
            printf("Too high!");
            printf("Guesses remaining: %d \n", MAX_ATTEMPTS);
        }

        if 

        if(guesses <= 0 ){
            printf("invalid guess, please try again.");
            printf("Guesses remaining: %d \n", MAX_ATTEMPTS);
        }
    }
}