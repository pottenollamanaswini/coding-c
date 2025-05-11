# Guess the Number Game in C

## Overview
This is a simple command-line game where the player tries to guess a randomly generated number within a certain range. The program provides hints (higher or lower) until the correct number is guessed.

## How It Works
- The program generates a random number within a specified range.
- The player enters a guess.
- The program informs whether the guess is too high, too low, or correct.
- The game continues until the correct number is guessed.

## Prerequisites
- A C compiler (e.g., GCC)
- Basic knowledge of running C programs

## How to Run
1. Compile the program using:  

2. Run the game:  


## Sample Code
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 int number, guess, attempts = 0;
 srand(time(0));
 number = rand() % 100 + 1;  // Random number between 1 and 100

 printf("Guess the number between 1 and 100:\n");

 do {
     printf("Enter your guess: ");
     scanf("%d", &guess);
     attempts++;

     if (guess > number) {
         printf("Too high!\n");
     } else if (guess < number) {
         printf("Too low!\n");
     } else {
         printf("Correct! You guessed it in %d attempts.\n", attempts);
     }
 } while (guess != number);

 return 0;
}  
'''  

# OUTPUT  
Welcome to the Guess the Number Game!
I have picked a number between 1 and 100. Try to guess it!

Enter your guess: 30
Too low! Try again.

Enter your guess: 60
Too high! Try again.

Enter your guess: 45
Too low! Try again.

Enter your guess: 52
Congratulations! You guessed the number in 4 attempts.  

# THIS IS KNOWN AS GUESS THE NUMBER  





