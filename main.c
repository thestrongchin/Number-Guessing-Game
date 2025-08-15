#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DEBUG
#define MAX_ATTEMPTS 10

int num = 0; // Global Variable
int guess;



int main(){
    
    char selection = 'y';

    while(selection == 'y' || selection == 'Y'){

        int TotalAttempts = 0;

        srand(time(0)); // This creates a seed for the number generator
        num = rand() % 100 + 1; // This generates a random number between 1 and 100 and assigns it to variable "num"

        #ifdef DEBUG
            printf("[DEBUG] mode has been activated! \n \n");
            printf("[DEBUG]: The generated number is: [ %d ] \n", num);
        #endif

        printf("=============================================== \n");
        printf("      Welcome to the number guessing game! \n");
        printf("===============================================\n");

        int attempts = MAX_ATTEMPTS;

        for(attempts = 5; attempts >= 0; attempts--){ // Assigns 10 value to attempts, attempts must be over 0, and attempts's value will decrease by 1 each time. Keeps looping until condition is not met.

            printf("Please guess a number: ");
            scanf("%d", &guess);

            if(guess > 100){
                printf("Invalid input! Please try again! \n");
                printf("You have %d attempts left \n", attempts);
            }

            if(guess >= 1 && guess < num){
                printf("Guess too low! \n");
                printf("You have %d attempts left: \n \n", attempts);

                TotalAttempts++; // Adds 1 to 'TotalAttempts' each time user guesses
                continue;
            }

            if(guess >= 1 && guess > num){
                printf("Guess too high! \n");
                printf("You have %d attempts left: \n \n", attempts);

                TotalAttempts++;
                continue;
            } 

            if(guess == num){
                printf("Congratulations! You have guessed the correct number!\n");
                printf("You used %d attempts! \n \n", TotalAttempts);

                break;
            }

            if(attempts == 0 || TotalAttempts == 10){
                printf("You have run out of attempts!\n");
                printf("The correct number was: %d \n", num);
                break;

            }else{
                printf("Invalid input! please try again! \n");
                attempts++;
                printf("You have %d attempts left! \n", attempts);
                continue;
            }

        } // end of for loop

        printf("Would you like to play again? \n");
        printf("Please enter a selection: \n");
        printf("Yes = 'y' or 'Y', No = 'n' or 'N' \n \n");
        printf("Please make your selection now: ");

        scanf(" %c", &selection);

        if(selection == 'y' || selection == 'Y'){
            printf("Game is restarting, please wait... \n");
            printf("\n \n \n \n \n \n \n \n \n \n \n \n \n");
            continue;
             
        }

        if(selection == 'n' || selection == 'N'){
            printf("Thank you for playing the number guessing game! Please come again soon! \n \n");

        }else{
            printf("Invalid input! Game is ending");
            break;
        }

    } // end of while loop

    return 0;
}