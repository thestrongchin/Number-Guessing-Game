#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DEBUG
#define MAX_ATTEMPTS 10

int num = 0; // Global Variable
int guess;
int attempts;

int main(){

    char selection;

    srand(time(0));
    num = rand() % 100 + 1;

    printf("      =============================================== \n");
    printf("            Welcome to the number guessing game! \n");
    printf("      ===============================================\n");

    while(0){

    printf("Please guess a number");
    scanf("%d", &guess);

    int attempts = MAX_ATTEMPTS;

    if(guess >= num){

        if(guess < num){
            printf("Too low!");
            attempts--;
            printf("Guesses remaining: %d \n", attempts);
        }
    }

        if(guess > num){
            printf("Too high!");
            attempts--;
            printf("Guesses remaining: %d \n", MAX_ATTEMPTS);
        }

        if(guess <= 0 ){
            printf("invalid guess, please try again.");
            printf("Guesses remaining: %d \n", MAX_ATTEMPTS);
        }

        if(guess == num){
            printf("Congratulations! You have guessed the correct number! \n");
            printf("Do you want to play again? \n");
            printf("Yes = 'y' or 'Y', No = 'n' or 'N' \n ");

            scanf("%c", selection);
        }
    }
}