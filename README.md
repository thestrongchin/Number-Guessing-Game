# Number-Guessing-Game

## Table of Contents
- ### [1. Description](#1-description)
  - [1.1: What I Learned](#11-what-i-learned) 
    
- ### [2. Features](#2-features)

- ### **[3. Using The Number Guessing Game](#3-using-the-number-guessing-game)**
  - [3.1: Welcome Message](#31-welcome-message)
  - [3.2: Guessing The Number](#32-guessing-the-number)
  - [3.3: Finishing The Game](#33-finishing-the-game)
  - [3.4: Restarting Game](#34-restarting-game)
 
- ### **[4: Implementations](#4-implementations)**
  - [4.1: Flow Chart](#41-flow-chart)
  - [4.2: Buffer Clearing](#42-buffer-clearing)
  - [4.3: Multi-File System](#43-multi-file-system)
  - [4.4: Functions](#44-functions)

- ### **[5: The End](#5-the-end)**
  - [5.1: Contact](#51-contact)
  
    

# 1: Description
A simple C project where the user tries to guess a randomly generated number between 1 and 100 in only 5 attempts! Includes robust error handling, restart options, and even a DEBUG mode for testing. 

# 1.1: What I learned
Throughout this project, I learned many things, including: 

- How to use functions
- How to use Global variables
- How to use the multi-file system 
- How buffer clearing works
- How to make the DEBUG function using the #define function
- How to properly call functions

# 2: Features
My simple number guessing game features several enhancements to ensure it functions properly and provides an improved user experience. Some of the features are: 
- Robust error detection catches character errors and too high/too low numbers over 100 and under 1
- Too high/low feedback on user input, to make it easier to guess the correct number with only 5 attempts
- The game can restart/cancel after finishing the game
- DEBUG mode for easy testing
- Number generation between 1 and 100
- Error detection for numbers and characters for the restarting input

# 3: Using the Number Guessing Game
Playing/using the number guessing game is fun and simple! Here's an overview of how it works:

## 3.1: Welcome message
When the game starts, it generates a number in the background, displays a welcome message, and then prompts the user to guess a number.

```text
=============================================== 
      Welcome to the number guessing game! 
===============================================
You have 5 attempts, use them wisely!
```

If DEBUG mode is on, the game will first display what number was generated before continuing as normal.

```text
[DEBUG] DEBUG mode has been activated!

[DEBUG] The generated number is 50!
=============================================== 
      Welcome to the number guessing game! 
===============================================
You have 5 attempts, use them wisely!
```

## 3.2: Guessing the number
After the welcoming part, the user will have 5 attempts to guess the number that was generated. The code will provide feedback on whether or not their guess was too high or too low.


### Too low:
  
```text
Please guess a number: 5
Guess too high! Please try again!
```

### Too high:

  ```text
Please guess a number: 100
Guess too high! Please try again!
```

  If there is an error, the game will let the user know and won't take away an attempt to ensure fair play.

### Character error:
This is how the character error will act

  ``` text
Please guess a number: c
Invalid Input! Please try again!

You have 5 attempts left
```

## 3.3: Finishing the game

### User runs out of attempts:
```text
You have 0 attempts left!
Would you like to play again?
```

### User guesses the correct number:
```text
Congratulations! You have guessed the correct number in 'x' attempts!
Would you like to play again?
```
# 3.4: Restarting Game
Choosing whether or not you want to restart is very straightforward and only requires 1 letter!

### User wants to restart

```text
Would you like to play again?
Please enter a selection, Yes = 'y'/'Y', No = 'n'/'N'

Please make your selection now: y

=============================================== 
      Welcome to the number guessing game! 
===============================================
```
### User wants to end
```text
Would you like to play again?
Please enter a selection, Yes = 'y'/'Y', No = 'n'/'N'

Please make your selection now: n

Thank you for playing the number-guessing game! Please come again soon!
```

### Input Error
```text
Would you like to play again?
Please enter a selection, Yes = 'y'/'Y', No = 'n'/'N'

Please make your selection now: c

Invalid input! Game terminating...
```

# 4. Implementation
Part 4 will explain the implementation I used in this code to help it work, along with the logic. 

## 4.1: Flow Chart
Here is a simple flow chart that I made for my presentation about this project

<img width="1359" height="765" alt="image" src="https://github.com/user-attachments/assets/367c8ff9-3392-473f-afb7-5c54375c992a" />

## 4.2: Buffer Clearing
In this project, buffer clearing was required for character error detection, because in the case the user accidentally inputs a character, the buffer can be cleared so no issues arise. 

## 4.3: Multi-File system
The multi-file system was used in this simple number-guessing game. The multi-file system made everything more organized and easier to debug. I had 3 files: game.c for creating functions, game.h for declaring functions and variables, and main.c to call all the functions and bring everything together. 

## 4.4: Functions
Functions were needed in this project, as I used the multi-file system. I declared the functions in the game.c file so they could function. I wrote what the functions did in game.c, and then called them in game.h. Almost everything in the game was in a function, except for the game restart. 

# 5: The End
This is the end of my README about the simple number guessing game. Thank you for reading about my game!

# 5.1: Contact
If you really enjoyed this README, or have comments, suggestions, or improvements that I can make, please feel free to reach out to me via email: riverchen0510@gmail.com
***No spam please!***








  


  
  


  





