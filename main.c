#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DEBUG
#define MAX_ATTEMPTS 10

int num = 0; // Global Variable
int guess;
int attempts;
int TotalAttempts = 0;
int main(){

    char selection;

    srand(time(0)); // This creates a seed for the number generator
    num = rand() % 100 + 1; // This generates a random number between 1 and 100 and assigns it to variable "num"

    printf("=============================================== \n");
    printf("      Welcome to the number guessing game! \n");
    printf("===============================================\n");

    int attempts = MAX_ATTEMPTS;

    while(attempts > 0){

    printf("Please guess a number: ");
    scanf("%d", &guess);

    if(guess < num){
        printf("Guess too low! \n");
        printf("You have %d attempts left: \n \n", attempts);

        TotalAttempts++;
        attempts--;
    }

    if(guess > num){
        printf("Guess too high! \n");
        printf("You have %d attempts left: \n \n", attempts);

        TotalAttempts++;
        attempts--;
    }

    if(guess == num){
        printf("Congratulations! you have guessed the correct number! \n");
        printf("You have guessed the number in %d attempts \n \n", TotalAttempts);
        
        printf("Would you like to play again? \n");
        printf("Yes = 'Y' / 'y' No = 'N' or 'n' \n");
        selection = getchar();

    }

    if(attempts == 0){
        printf("You have run out of attempts! \n");
        printf("The correct number was: %d \n \n", num);

        printf("Would you like to play again? \n");
        printf("Yes = 'Y' / 'y' No = 'N' or 'n' ");
        selection = getchar();
    }

    while(selection == 'y' || selection == 'Y'){
        return 1;
    }

    }
}