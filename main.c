#include "game.h"
#include <stdio.h>

char selection = 'y';

int main(){

    while(selection == 'Y' || selection == 'y'){

        numGenerate();

        debug();

        greeting();

        playgame();

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

            break;

        }else{
            printf("Invalid input! Game is ending");
            break;
        }
    }

    return 0;
}