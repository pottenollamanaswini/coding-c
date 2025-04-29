# GUESS THE NUMBER-C PROGRAM  
1. This is a simple c program 
2. Where the user tries to guess a randomly generated number within a given range.  
3. The program gives hints whether the guess is too high or low until the correct number is guessed.  

* CODE:
#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  

int main() {  
    int number, guess, attempts = 0;  
    srand(time(0));  
    number = rand() % 100 + 1; // Random number between 1 and 100  

    printf("Welcome to the Guess the Number Game!\n");  
    printf("I'm thinking of a number between 1 and 100.\n");  

    do {  
        printf("Enter your guess: ");  
        scanf("%d", &guess);  
        attempts++;  

        if (guess > number) {  
            printf("Too high!\n");  
        } else if (guess < number) {  
            printf("Too low!\n");  
        } else {  
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);  
        }  
    } while (guess != number);  

    return 0;  
}  
* FEATURES:
1.Random number between 1 and 100  
2.Interactive command-line input  
3.Feedback after each guess  
4.Count of attempts  

** "This is known as guess the number"  
