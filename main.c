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

    start:

    int jump;
    char selection;

    srand(time(0)); // This creates a seed for the number generator
    num = rand() % 100 + 1; // This generates a random number between 1 and 100 and assigns it to variable "num"

    printf("=============================================== \n");
    printf("      Welcome to the number guessing game! \n");
    printf("===============================================\n");

    int attempts = MAX_ATTEMPTS;

    for(attempts = 10; attempts > 0; attempts--){ // Assigns 10 value to attempts, attempts must be over 0, and attempts's value will decrease by 1 each time. Keeps looping until condition is not met.

    printf("Please guess a number: ");
    scanf("%d", &guess);

        if(guess >= 1 && guess < num){
            printf("Guess too low! \n");
            printf("You have %d attempts left: \n \n", attempts);

            TotalAttempts++; // Adds 1 to 'TotalAttempts' each time user guesses
        }

        if(guess >= 1 && guess > num){
            printf("Guess too high! \n");
            printf("You have %d attempts left: \n \n", attempts);

            TotalAttempts++;
        } 

        if(guess == num){

            printf("Congratulations! you have guessed the correct number! \n");
            printf("You have guessed the number in %d attempts \n \n", TotalAttempts);
            
            goto jump;
        }

        if(attempts == 0){
            printf("You have run out of attempts! \n");
            printf("The correct number was: %d \n \n", num);

            goto jump;
        }
        
        if(guess <= 0 || guess > 100){

            printf("Invalid input, please try again"); 
            attempts++; // Adds 1 to attempts becuase user put in an invalid input

        }
    }

    jump:

    printf("Would you like to play again? \n");
    printf("Yes = 'Y' or 'y' ");
    printf("No = 'N' or 'n' ");
    printf("Please make your selection: ");

    selection = getchar();

    if(selection == 'Y' || 'y'){
        goto start;
    }

    if(selection == 'N' || 'n'){
        printf("Thanks for playing the Number Guessing Game! Come again soon!");
        return 0;

    } else {
        printf("invalid input, game terminating");
        return 0;
    }
}