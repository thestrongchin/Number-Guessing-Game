#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

// global variables
int num = 0;
int guess;

void debug(){
    #ifdef DEBUG
        printf("[DEBUG] mode has been activated! \n \n");
        printf("[DEBUG]: The generated number is: [ %d ] \n", num);
    #endif
}
