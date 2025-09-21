# Number-Guessing-Game

# 1: Description
This is a simple number-guessing game, where the user will have to guess a number between 1 and 100. The game can reset when the user guesses the correct number or runs out of attempts. 

# 1.1: What I learned
Throughout this project, I learned many things, including: 

- How to use functions
- Global variables
- How to use the multi-file system to work more efficiently
- How to understand buffer clearing more deeply
- How to make the DEBUG function using the #define function
- How to properly call functions

# 2: Features
My simple number guessing game features several enhancements to ensure it functions properly and provides an improved user experience. Some of the features are: 
- Robust error detection that can detect characters and integers over 100 or under 1
- Too high/low feedback on user input, to make it easier to guess the correct number with only 5 attempts
- Game restarting, with a new number generated after attempts run out/user guesses correct numbers
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

## 3.2: Finishing the game


  


  
  


  





